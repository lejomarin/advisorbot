#include<iostream>
#include "advisorbot.h"

using namespace std;

void AdvisorBot::printMenu()
{
    cout << "Please enter a command, or help for a list of commands"<<endl;
    
}

void AdvisorBot::printHelp() {
  cout << "This is the list of available commands: help, help <cmd>, average, min, max" << std::endl;
  cout << endl;
}

void AdvisorBot::printAverage() {
  // Calculate and print average here
}

void AdvisorBot::printMin() {
  // Calculate and print min here
}

void AdvisorBot::printMax() {
  // Calculate and print max here
}

void AdvisorBot::prompt() {
  string input;
  getline(cin, input);
  if (input == "help") {
    printHelp();
  } else if (input == "average") {
    printAverage();
  } else if (input == "min") {
    printMin();
  } else if (input == "max") {
    printMax();
  }
}