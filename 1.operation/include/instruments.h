#ifndef INSTRUMENTS_H
#define INSTRUMENTS_H

#include <iostream>

using namespace std;

struct point 
{
    double x;
    double y;
};

point inputpoint();
void scalpel(point start, point end)
{
    cout << "Cut made between (" << start.x << ", " << start.y << ") and ("
            << end.x << ", " << end.y << ")." << endl;
}

void hemostat(point point)
{
    cout << "Clamp applied at (" << point.x << ", " << point.y << ")." << endl;
}

void tweezers(point point)
{
    cout << "Tweezers applied at (" << point.x << ", " << point.y << ")." << endl;
}
bool suture(point start_sut, point end_sut, point start, point end)
{
    
    cout << "Suture made between (" << start_sut.x << ", " << start_sut.y << ") and ("
              << end_sut.x << ", " << end_sut.y << ")." << endl;
              
    if ((start_sut.x == start.x && start_sut.y == start.y) && 
        (end_sut.x == end.x && end_sut.y == end.y)) 
    {
        cout << "Operation success!\n";
        return true;
    }
    else
    {
        cout << "Scalpel point (" << start.x << ", " << start.y << ") and ("
              << end.x << ", " << end.y << ")." << endl;
        cout << "Failed operation! Patient died! try again!\n";
        cout << "\nOperation started!\n";
        return false;
    }
}

#endif