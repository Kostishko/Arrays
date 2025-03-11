

#include <cstdlib>
#include <iostream>
#include "SearchableArray.h"
using namespace std;




int main()
{
    
    SearchableArray CurrentArray;
    CurrentArray.FillTheArray();

    char option = 'd';

    while (option != 'x')
    {
        cout << "Select an option.\n";
        cout << "         \"s\" Search the number \n";        
        cout << "         \"c\" Check the array \n";
        cout << "         \"x\" Exit the program. \n";

        cin >> option;


        int foundIndex = -1;

        switch (option)
        {
        case  's':
            cout << "Give me a number: ";
            int pushedNumber;
            cin >> pushedNumber;
            foundIndex = CurrentArray.SearchAt(pushedNumber);
            if (foundIndex != -1)
            {
                cout << "The numbers is at index ";
                cout << foundIndex;
                cout << ".\n";
            }
            else
            {
                cout << "There is no such a number in the array.\n";
            }
            break;    
        case 'c':
            CurrentArray.ShowTheArray();
            break;
        case 'x':
            cout << "See you, Space Cowboy.\n";
            cout << "Press any button.";
            cin;
            break;
        default:
            cout << "Please, give an available command.\n";
            break;
        }

    }



    srand(time(0));


}

