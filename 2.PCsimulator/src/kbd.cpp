#include "ram.h"
#include "kbd.h"
#include <iostream>

using namespace std;

void input()
{
    int number[8];
    cout << "Enter 8 integer: ";
    for (int i = 0; i < 8; i++)
    {
        cin >> number[i];
    }
    write_buffer(number);
}