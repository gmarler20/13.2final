#include "stdafx.h"
#include <iostream>
#include <fstream>
#include <string>


using namespace std;
int main()
{
	fstream object;
	string filename;

	cout << "Enter a filename: ";
	cin >> filename;

	object.open(filename);

	if (object.fail())
	{
		cout << "Cannot open file" << endl;
		return 0;
	}

	int count = -1;  // My test output counted one extra character, so I set to -1. Not sure if this is what you want. 

	while (!object.eof())
	{
		object.get(); // Returns char
		count++;
	}
	
	object.clear();

	cout << "The number of characters is " << count << endl;

    return 0;
}

