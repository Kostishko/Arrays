

#include <cstdlib>
#include <iostream>
#include "SearchableArray.h"
using namespace std;




int main()
{
    srand(time(0));
    SearchableArray CurrentArray;
    CurrentArray.FillTheArray();

    char option = 'd';

    while (option != 'x')
    {
        cout << "Select an option.\n";
        cout << "         \"s\" Search the number \n";        
        cout << "         \"a\" Add a number \n";
        cout << "         \"r\" Remove at index\n";
        cout << "         \"f\" Fill the array with random numbers\n";
        cout << "         \"d\" delete all numbers\n";
        cout << "         \"c\" Check the array \n";
        cout << "         \"x\" Exit the program. \n";

        cin >> option;


        int foundIndex = -1;
        int newNumber = 0;
        int removeIndex = -1;

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
            case 'a':    
                cout << "Enter your number: ";
                cin >> newNumber;
                CurrentArray.PushNumber(newNumber);
                break;
            case 'r':
                cout << "Enter index to delete a number: ";
                cin >> removeIndex;
                CurrentArray.RemoveAt(removeIndex);
                break;
            case 'f':                
                CurrentArray.FillTheArray();
                break;
            case 'd':
                CurrentArray.ClearArray();
                break;
            case 'c':
                CurrentArray.ShowTheArray();
                break;
            case 'x':
                cout << "See you, Space Cowboy.\n";
                cout << "Press any button.";
                cin >> foundIndex;                
                break;
            default:
                cout << "Please, give an available command.\n";
                break;
        }

    }



}

