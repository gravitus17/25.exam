#include "cpu.h"
#include "ram.h"
#include "gpu.h"
#include "disk.h"
#include "kbd.h"
#include <iostream>

using namespace std;

int main()
{
    string command;
    while (true)
    {
        cout << "Enter command(sum, save, load, input, display,exit): ";
        cin >>  command;

        if (command == "sum")
        {
            compute();
        }
        else if (command == "save")
        {
            save();
        }
        else if (command == "load")
        {
            load();
        }
        else if (command == "input")
        {
            input();
        }
        else if (command == "display")
        {
            display();
        }
        else if (command == "exit")
        {
            return 0;
        }
        else
        {
            cerr << "error: wrong command\n";
        }   
    }
}


