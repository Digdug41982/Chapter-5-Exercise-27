// Chapter 5 Exercise 27.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    ifstream inputFile;
    int number;
    int year = 1910;

    inputFile.open("People-2.txt");

    if (!inputFile)
    {
        cout << "Error opening People-2.txt." << endl;
        return 1;
    }

    while (inputFile >> number && year <= 2010)
    {
        cout << year << " ";

        for (int count = 0; count < number / 1000; count++)
        {
            cout << "*";
        }

        cout << endl;

        year += 20;
    }

    inputFile.close();

    return 0;
}