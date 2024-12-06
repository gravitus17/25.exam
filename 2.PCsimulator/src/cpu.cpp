#include "cpu.h"
#include "ram.h"
#include <iostream>

using namespace std;

void compute()
{
    int* buffer = read_buffer();
    int sum = 0;
    for( int i = 0; i < 8;i++)
    {
        sum += buffer[i];
    }

    cout << "Sum: " << sum << endl;
}