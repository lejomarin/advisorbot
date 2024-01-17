#include <iostream>
#include "advisorbot.h"

using namespace std;

void printMenu();


int main()
{
    AdvisorBot advisorbot;

    advisorbot.printMenu();
    advisorbot.prompt();

    
    return 0;
}
