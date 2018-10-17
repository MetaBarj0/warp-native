# language: en

Feature: Addition
  In order to test cucumber-cpp for warp-native,
  As a math idiot,
  I want to be told the sum of two numbers

  Scenario Outline: Add two numbers
    Given I have entered <input_1> into the calculator
    And I have entered <input_2> into the calculator
    When I press <button>
    Then the result should be <output> on the screen

    Examples:
      | input_1 | input_2 | button | output |
      | 1       | 2       | add    | 3      |
      | 10      | -1      | add    | 9      |
      | 0       | 0       | add    | 0      |
      | 20      | 30      | add    | 50     |
      | 2       | 5       | add    | 7      |
      | 0       | 40      | add    | 40     |
