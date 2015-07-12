package com.bemach.examples.jni;

public class SayHelloJni {
	static {
		System.loadLibrary("hello"); // Load native library at runtime
	                                   // hello.dll (Windows) or libhello.so (Unixes)
	}
	 
	// Declare a native method sayHello() that receives nothing and returns void
	public native String sayHello(String name);
	  
}
