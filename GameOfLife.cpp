#include <iostream>
#include "life.h"

using namespace std;

void instructions();
bool user_says_yes();

int main()
{
    Life configuration;
    instructions();
    configuration.initialize();
    configuration.print();
    cout << "Continue viewing new generations? " << endl;
    while (user_says_yes()) {
        configuration.update();
        configuration.print();
        cout << "Continue viewing new generations? " << endl;
    }
}

