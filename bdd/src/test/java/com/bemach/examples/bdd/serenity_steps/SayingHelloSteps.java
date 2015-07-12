package com.bemach.examples.bdd.serenity_steps;

import net.thucydides.core.annotations.Step;

import com.bemach.examples.jni.SayHelloJni;

public class SayingHelloSteps {

	@Step
	public String sayHello(String name) {
		SayHelloJni jni = new SayHelloJni();
		String greetings = jni.sayHello(name);
		return greetings;
	}
}
