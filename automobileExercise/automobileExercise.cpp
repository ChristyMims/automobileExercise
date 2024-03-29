// automobileExercise.cpp : Defines the entry point for the console application.
// Christy Mims
// February 1, 2018
// CSC 101
// Chapter 2 exercise 11 automobile
// This program calculates how for an automobile can go without fueling.

#include "stdafx.h"
#include <iostream>

using namespace std;


int main()
{
	// declare and initialize variables
	int capacity = 0;
	int milesPerGallon = 0;
	int distance = 0;

	// prompt the user to input capacity and miles per gallon

	cout << "This program will compute how many miles an automobile can go "
		<< "without refueling. " << endl;
	cout << "Enter the tank capacity in gallons." << endl;
	cin >> capacity;

	cout << "Enter the miles per gallon." << endl;
	cin >> milesPerGallon;

	// calculate distance
	distance = capacity * milesPerGallon;

	// output results
	cout << "The automobile can travel " << distance << " miles without refueling." << endl;


	// pause the output in the debugger
	cout << "Press Enter to continue " << endl;
	cin.get();
	cin.get();

    return 0;
}

