#include "gpu.h"
#include "ram.h"
#include <iostream>

using namespace std;

void display()
{
    int* buffer = read_buffer();
    cout << "Buffer: ";
    for (int i = 0; i <8; i++)
    {
        cout << buffer[i] << " ";
    }
    cout << endl;
}

