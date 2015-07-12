Feature: Saying Hello
  As a person, 
  I want to greet my friend by his first name,
  So that, he feels warm and welcome.
  
  Scenario: Saying Hello with first name
    Given that I have a greeting software
    When I give a my friend name "Mark" to the software I use
    Then I should see a greeting message "Hello, Mark!"
    
  Scenario: Not saying Hello with a wrong name
    Given that I have a greeting software
    When I give a my friend name "Joseph" to the software I use
    Then I should NOT see a greeting message "Hello, Mark!"
    
  Scenario Outline: Saying Hello with a first name
    Given that I have a greeting software
    When I give a my friend name "<name>" to the software I use
    Then I should see a greeting message "<greetings>"
    Examples:
    | name    | greetings    |
    | Mark 	  | Hello, Mark! |
    | John 	  | Hello, John! |
    | Mary 	  | Hello, Mary! |
    