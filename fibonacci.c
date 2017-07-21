/* Headers */

#include <Python.h>

/* Internal Prototypes */

static unsigned int fib_number(unsigned int n);
static unsigned int fib_number_sequence(unsigned int n, unsigned int **sequence);

static PyObject *py_fib_number(PyObject *self, PyObject *args);
static PyObject *py_fib_sequence(PyObject *self, PyObject *args);

/* Internal Private Data */

/// Defines Python->C method mappings for this module.
PyMethodDef method_bindings[] = {
    { "fib_number", py_fib_number, METH_VARARGS, "Calculate and return the Fibonacci number." },
    { "fib_sequence", py_fib_sequence, METH_VARARGS, "Calculate and return the entire Fibonacci sequence." },
    { NULL, NULL, 0, NULL}  /* Sentinel */
};

/* Implementations */

static unsigned int fib_number(unsigned int n) {
    if(n <= 1) {
        return n;
    }
    else {
        return fib_number(n-1) + fib_number(n-2);
    }
}

/*!
   Computes the fibonacci sequence for a given number. Both the number and the sequence are returned.

   The 'sequence' parameter is a heap allocated object; ownership is passed to the caller.

   @note Uses the more modern Fibonacci sequence where the first value of the sequence is 0, rather than 1.

   @param n number to compute
   @param sequence pointer to heap allocated array that is the complete sequence

   @return returns the fibonacci number
 */
static unsigned int fib_number_sequence(unsigned int n, unsigned int **sequence) {
    *sequence = (unsigned int*)malloc(sizeof(unsigned int) * n);

    for(unsigned int i = 0; i < n; i++) {
        (*sequence)[i] = fib_number(i);
    }

    return (*sequence)[n-1];
}

static PyObject *py_fib_number(PyObject *self, PyObject *args) {
    int n;

    PyArg_ParseTuple(args, "i", &n);
    // TODO: check for error.

    return Py_BuildValue("I", fib_number(n));
}

static PyObject *py_fib_sequence(PyObject *self, PyObject *args) {
    int n;

    PyArg_ParseTuple(args, "i", &n);
    // TODO: check for error.

    // Get the number and sequence:
    unsigned int *sequence;
    unsigned int number = fib_number_sequence(n, &sequence);

    // Now build a Python list from the C array:
    PyObject *pylist = PyList_New(n);
    for(size_t i = 0; i < n; i++) {
        PyObject *obj = Py_BuildValue("I", sequence[i]);
        PyList_SetItem(pylist, i, obj);
    }

    return Py_BuildValue("(IO)", number, pylist);
}

/* Module initialization */
PyMODINIT_FUNC initfibonacci(void) {
    (void)Py_InitModule("fibonacci", method_bindings);
}
