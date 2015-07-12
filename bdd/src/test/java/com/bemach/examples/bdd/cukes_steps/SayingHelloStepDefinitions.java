package com.bemach.examples.bdd.cukes_steps;

import org.junit.Assert;

import com.bemach.examples.bdd.serenity_steps.SayingHelloSteps;

import net.thucydides.core.annotations.Steps;
import cucumber.api.java.en.Given;
import cucumber.api.java.en.Then;
import cucumber.api.java.en.When;

public class SayingHelloStepDefinitions {
	@Steps
	SayingHelloSteps sayingHello;
	private String greetings;
	
	@Given("^that I have a greeting software$")
	public void that_I_have_a_greeting_software() throws Throwable {
	}

	@When("^I give a my friend name \"(.*?)\" to the software I use$")
	public void i_give_a_my_friend_name_to_the_software_I_use(String name) throws Throwable {
		greetings = sayingHello.sayHello(name);
	}

	@Then("^I should see a greeting message \"(.*?)\"$")
	public void i_should_see_a_greeting_message(String expectedGreetings) throws Throwable {
		Assert.assertEquals("*** invalid greetings!", expectedGreetings, greetings);
	}

	@Then("^I should NOT see a greeting message \"(.*?)\"$")
	public void i_should_NOT_see_a_greeting_message(String unexpectedGreetings) throws Throwable {
		Assert.assertNotEquals("*** invalid greetings!", unexpectedGreetings, greetings);
	}
}
