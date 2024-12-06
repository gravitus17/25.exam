#include "ram.h"
#include <disk.h>
#include <fstream>
#include <iostream>

using namespace std;

void save()
{
    int* buffer = read_buffer();
    ofstream file("data.txt");
    for (int i = 0; i < 8; i++)
    {
        file << buffer[i] << endl;
    }
    file.close();
}

void load()
{
    int number[8];
    ifstream file("data.txt");
    if (!file) 
    {
        cerr << "Error opening file!" << endl;
        return;
    }
    for (int i = 0; i < 8; i++)
    {
        file >> number[i];
    }

    write_buffer(number);
    file.close();
}