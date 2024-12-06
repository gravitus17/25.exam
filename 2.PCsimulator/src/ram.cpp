#include "ram.h"

int buffer[8];

void write_buffer(int numbers[8])
{
    for (int i = 0; i < 8; i++)
    {
        buffer[i] = numbers[i];
    }
}

int* read_buffer()
{
    return buffer;
}