//include headers and libraries
#include <iostream>
#include <string>
#include "Library.h"

using namespace std;


int main(){
    Library library;
    string book;
    string command;
    
    //ask for commands and execute
    //commands are a, r, p, q
    while (command != "q")
    {
        cin >> command;
        if (command == "a")
        {
            cin >> book;
            if (library.addBook(book))
            {
                cout << "Book added" << endl;
            }
            else
            {
                cout << "Book already exists or library is full" << endl;
            }
        }
        else if (command == "r")
        {
            cin >> book;
            if (library.removeBook(book))
            {
                cout << "Book removed" << endl;
            }
            else
            {
                cout << "Book does not exist" << endl;
            }
        }
        else if (command == "p")
        {
            library.print();
        }
    }
    
    return 0;

}
