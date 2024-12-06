#include <iostream>
#include "instruments.h"

using namespace std;

point inputpoint() 
{
    point p;
    cout << "Enter coordinates (x y): ";
    cin >> p.x >> p.y;
    return p;    
}


int main() 
{
    cout << "Operation started!\n";
    bool start_op = false;
    point start;
    point end;
    while(true)
    {
        string command;
        cout << "Input command: \n" << "1.scalpel (operation should begin with this command)"
            << "\n2.hemostat" << "\n3.tweezer" <<"\n4.suture(the operation should end with this command)\n";
        cin >> command;
       
       
        
        if (command == "scalpel" && !start_op)
        {
            start_op = true;
            cout << "Scalpel command:" << endl;
            start = inputpoint();
            end = inputpoint();
            scalpel(start, end);
        }
        
        else if (command == "hemostat" && start_op)
        {
            cout << "Hemostat command:\n";
            point hemostatpoint = inputpoint();
            hemostat(hemostatpoint); 
        }

        else if (command == "tweezer" && start_op)
        {
            cout << "Tweezers command:\n";
            point tweezerspoint = inputpoint();
            tweezers(tweezerspoint);
        }
        else if (command == "suture" && start_op)  
        {
            cout << "Suture command:\n";
            point start_sut = inputpoint();
            point end_sut = inputpoint();
            if (suture(start_sut, end_sut, start, end))
                return 0;
            else
            {
                start_op = false;
            }
        }
        else 
        {
            cout << "Wrong command or impossible command\n";
        }
        if (command == "end")
            return 0;
    }
}