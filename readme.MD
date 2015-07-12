Readme Notes for CPP Workspace using Eclipse C/C++ IDE along with CUTE
======================================================================

Instruction
-----------

- 'DONOT' change test.cpp that was created as a part of CUTE test project!
- Create a C++ Project
- Select CUTE with MinGW (Do not use Cygwin because it will have a make problems!)
- Make sure to select to include 'header files'
- I decided to organize the src into cpp and test subfolders to separate production code
   and unit tests. I am not quite sure how a typical C++ project handles unit tests. I am 
   doing it manually because that is how I work on Java using JUnit.

Simple test case:
----------------
For this, I created (based on cute-test.com website) a test for Calculator (very basic stuffs here). When a CUTE test is created, CUTE creates a test.cpp file and stores the file in src folder. Then, I create cpp and test folders. cpp folder should contain the 'production' code and 'test' the test code. I move test.cpp into the 'test' folder. All my tests for calculator class is located here.

This is not very exciting but it covers the basic test writing technique using CUTE

A suite of tests:
----------------
I create a C++ project with Cute Test Suite Module option.

Then, I also creates test and cpp folders to contains my code. I move test.cpp into the test folder.

I create multiple test suites and add them into the main suite like this:
> cute::suite s=make_suite_pawnTest();
>
> cute::makeRunner(lis,argc,argv)(s, "pawnTest");
>
> s=make_suite_bankAccountTest();
>
> cute::makeRunner(lis,argc,argv)(s, "bankAccountTest");

I complete a simple test suite for the pawn class under chess src/chess folder.
I create a skeleton for bank account test and left it as an exercise.

Websites:
JNI & C++:
http://thebreakfastpost.com/2012/01/21/wrapping-a-c-library-with-jni-introduction/
https://www3.ntu.edu.sg/home/ehchua/programming/java/JavaNativeInterface.html


@jni:target/classes folder:
javah com.bemach.examples.jni.SayHelloJni

@hello:src folder
gcc -Wl,--add-stdcall-alias -I"%JAVA_HOME%\include" -I"%JAVA_HOME%\include\win32" -shared -o hello.dll hello.c



- Linux:
  jni project: target/classes:
    - javah -jni com.bemach.examples.jni.SayHelloJni
    - cp com_bemach_examples_jni_SayHelloJni.h ../../../lin-hello/src/.

  lin-hello project: src
    - gcc -fPIC -shared hello.c -I$JAVA_HOME/include -I$JAVA_HOME/include/linux -o libhello.so

website:
  - http://adamish.com/blog/archives/620

