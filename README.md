# pintos

## Building Pintos
As the next step, build the source code supplied for the first project. 
First, cd into the threads directory. Then, issue the ```make``` command. This will create a build directory under threads, populate it with a Makefile and a few subdirectories, and then build the kernel inside. The entire build should take less than 30 seconds.

## Running Pintos
We've supplied a program for conveniently running Pintos in a simulator, called pintos. In the simplest case, you can invoke pintos as pintos argument.... Each argument is passed to the Pintos kernel for it to act on.

First cd into the newly created build directory (for project 1: threads): (```cd build```)
Then issue the command ```pintos run alarm-multiple```, which passes the arguments run alarm-multiple to the Pintos kernel. In these arguments, run instructs the kernel to run a test and alarm-multiple is the test to run.

This command invokes QEMU. QEMU opens a new window that represents the simulated machine's display, and a BIOS message briefly flashes. Then Pintos boots and runs the alarm-multiple test program, which outputs a few screenfuls of text. When it's done, you can close QEMU by clicking on the "X" to close the window. Note: If you click on the QEMU window, you will need to follow the instructions at the top of the window to release the mouse for use in other windows .

(If no window appeared at all, then you're probably logged in remotely and X forwarding is not set up correctly. In this case, you can fix your X setup, or you can use the output echoed to the calling window: ctrl-alt.

The text printed by Pintos inside QEMU probably went by too quickly to read. However, you've probably noticed by now that the same text was displayed in the terminal you used to run pintos. This is because Pintos sends all output both to the VGA display and to the first serial port, and by default the serial port is connected to QEMU's stdin and stdout. You can log serial output to a file by redirecting at the command line, e.g. pintos run alarm-multiple > logfile.

The pintos program offers several options for configuring the simulator or the virtual hardware. If you specify any options, they must precede the commands passed to the Pintos kernel and be separated from them by --, so that the whole command looks like pintos option... -- argument.... Invoke pintos without any arguments to see a list of available options. Options can select a simulator to use: the default in our installation is QEMU, but --bochs selects Bochs (which you would need to install and get running to use). You can run the simulator with a debugger (see section E.5 GDB). You can set the amount of memory to give the VM. Finally, you can select how you want VM output to be displayed: use -v to turn off the VGA display, -t to use your terminal window as the VGA display instead of opening a new window (Bochs only), or -s to suppress serial input from stdin and output to stdout.

The Pintos kernel has commands and options other than run. These are not very interesting for now, but you can see a list of them using -h, e.g. pintos -h.

##Testing
Testing
Your test result grade will be based on our tests. Each project part has several tests, each of which has a name beginning with tests. To completely test your submission, invoke make check from the project build directory. This will build and run each test and print a "pass" or "fail" message for each one. When a test fails, make check also prints some details of the reason for failure. After running all the tests, make check also prints a summary of the test results.

For project 1, the tests will probably run faster in Bochs. For the rest of the projects, they will run much faster in QEMU. make check will select the faster simulator by default, but you can override its choice by specifying SIMULATOR=--bochs or SIMULATOR=--qemu on the make command line.

You can also run individual tests one at a time. A given test t writes its output to t.output, then a script scores the output as "pass" or "fail" and writes the verdict to t.result. To run and grade a single test, make the .result file explicitly from the build directory, e.g. make tests/threads/alarm-multiple.result. If make says that the test result is up-to-date, but you want to re-run it anyway, either run make clean or delete the .output file by hand.

By default, each test provides feedback only at completion, not during its run. If you prefer, you can observe the progress of each test by specifying VERBOSE=1 on the make command line, as in make check VERBOSE=1. You can also provide arbitrary options to the pintos run by the tests with PINTOSOPTS='...'.

All of the tests and related files are in pintos/src/tests. Before we test your submission, we will replace the contents of that directory by a pristine, unmodified copy, to ensure that the correct tests are used. Thus, you can modify some of the tests if that helps in debugging, but we will run the originals.

All software has bugs, so some of our tests may be flawed. If you think a test failure is a bug in the test, not a bug in your code, please point it out. We will look at it and fix it if necessary.

Please don't try to take advantage of our generosity in giving out our test suite. Your code has to work properly in the general case, not just for the test cases we supply. For example, it would be unacceptable to explicitly base the kernel's behavior on the name of the running test case. Such attempts to side-step the test cases will receive no credit. If you think your solution may be in a gray area here, please ask us about it.
