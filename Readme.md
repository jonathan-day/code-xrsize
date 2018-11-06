# iDevices Embedded Programming Exercise

## 1. Introduction

Hello! The purpose of this exercise is to get to know you more as a software engineer. It is not meant to be rigorous by any stretch, but it is meant to provide use with a clearer picture of you in your day to day work.

This is not meant to consume 12 hours of your time, stress you out, or pose ridiculous questions such as "how many manholes are on the streets of New York?".

If you already know this content, then great, this should be an easy time. If not, then at the very least hopefully you will simply learn a bit that will serve you well in your future endeavors.

## 2. Content

The exercise will cover the following content:
1. C (GCC)
2. Python (v2.7)
3. GIT
4. Linux (Ubuntu, or derivative; most other distro's should work fine)
5. Make

## 3. Instructions

The current state of this project is that it:
1.Builds via the Makefile
2. Executes without faulting via the 'fibonacci.py' script
3. The simple tests in the Python script pass

However, there are various improvements that can be made around the code. As well as a few bugs that needs squashing. Additionally general code quality could stand to be improved. You've just inherited this code from an engineer that left recently so you have the lattitude to make it your own without tearing it up completely. 

Your task is to address all the above issues, and anything else you comes across, that needs fixing.

This is very open ended in that certain aspects are clear cut (read: error/incorrect), other aspects reflect application of best practices, as well as just your engineering sensibilities.

Please make your git check-ins atomic as possible.

*BONUS*:  Create a more useable and robust set of tests using PyUnit. The tests in 'fibonacci.py' leave a lot to be desired, particularly in the case of an API with a larger surface area, and integration into larger more mature projects. The standard Python testing framework, PyUnit, would be really nice to leverage here.

## 4. Questions/Problems

If you have any issues, or questions, it's perfectly fine. We have an open door policy regarding these exercises; again the point is not to induce stress.

So by all means if there are questions, installation/setup issues, don't hesitate to reach out and contact us.

## 5. Feedback

Finally, if you have any suggestions/comments regarding this exercise, don't hesitate to send an honest assessment. We want to make these effective tools for us, that improve with time.

Future engineering applicants in the area will thank you for your contributions :-)

## 6. Getting Started

To get started make sure you have the necessary tooling installed.

1. Running Linux system is desireable
2. Installed compilers (see 'build-essential' Ubuntu package)
3. Installed Python2.7 (execute `python --version` and should see 'Python 2.7.x')
4. Installed Python development headers (see 'python-dev' package)
5. Installed GIT

Now clone this repository and you should be off and running.

To confirm everything is setup correctly, a quick 'make' and execution of the Python script 'fibonacci.py' should should show:
`Runnings tests...PASSED!`
