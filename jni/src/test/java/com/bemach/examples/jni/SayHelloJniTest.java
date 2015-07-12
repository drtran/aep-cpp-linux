package com.bemach.examples.jni;

import static org.junit.Assert.assertEquals;

import org.junit.Test;

public class SayHelloJniTest {
	@Test
	public void shouldSayHello() {
		SayHelloJni jni = new SayHelloJni();
		String greetings = jni.sayHello("Joe");
		assertEquals("Hello, Joe!", greetings);
		greetings = jni.sayHello("Mark");
		assertEquals("Hello, Mark!", greetings);
	}
}
