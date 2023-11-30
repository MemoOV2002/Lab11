//include headers and libraries
#include <iostream>
#include <string>
#include "Library.h"

using namespace std;

//implement constructor by setting values of books to empty string
Library::Library()
{
    for(int i = 0; i < 10; i++)
    {
        books[i] = "";
    }
}

//implement addBook
//check if books already exists in Library, add to first avaliable space if not
bool Library::addBook(string bookName)
{
    //check if book already exists
    for (int i = 0; i < 10; i++)
    {
        //if book is found
        if (books[i] == bookName)
        {
            return false;
        }
    }
    //if book is not found
    for (int i = 0; i < 10; i++)
    {
        //if book is not found
        if (books[i] == "")
        {
            //add book to first avaliable space
            books[i] = bookName;
            return true;
        }
    }
    return false;
}

//implement removeBook
//removes the bookname from Library by setting the corresponding string to ""
//returns false if the library does not have the given book

bool Library::removeBook(string bookName)
{
    //find book
    for (int i = 0; i < 10; i++)
    {
        //if book is found
        if (books[i] == bookName)
        {
            //remove book
            books[i] = "";
            return true;
        }
    }
    return false;
}

//implement print as a void function to print the book names
void Library::print()
{
    //print book names
    for (int i = 0; i < 10; i++)
    {
        cout << books[i] << endl;
    }
}