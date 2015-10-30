// pointers.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;
void reverser(char myString[])
{
	char* firstcharacter;
	char* lastcharacter;
	int stringSize=0;
	int firstSize = 0;
	//counter
	for (int i = 0; i < myString[i]; i++)
	{
		cout << myString[i];
		stringSize = i;
		cout << ": " << stringSize << endl;
	}
	firstcharacter = &myString[0];
	lastcharacter = &myString[stringSize];
	//flipper
	for (int i = 0; i < stringSize; i++)
	{
		char* originaladdress;
		//assigns the addresses to the pointers
		
		originaladdress = firstcharacter;

		//flips
		*firstcharacter = *lastcharacter;
		*lastcharacter = *originaladdress;

		//adjusts
		firstcharacter = &myString[stringSize--];
		lastcharacter = &myString[firstSize++];
		

		//displays value of the pointers
		cout << "firstcharacter: " << *firstcharacter << endl << "lastcharacter: " << *lastcharacter << endl;
		//displays address of pointers
		cout << "firstcharacter: " << &firstcharacter << endl << "lastcharacter: " << &lastcharacter << endl;
	}
}
int main()
{
	// declare a c-string to reverse
	char myString[] = "Hello world!";

	// call the reverser function
	reverser(myString);

	system("PAUSE");
	return 0;
}

