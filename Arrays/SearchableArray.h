#include <iostream>
#include <cstdlib>
#pragma once
#define ARRAYSIZE 10
using namespace std;

class SearchableArray
{
protected:
	int array[ARRAYSIZE];
	int tail;
public:

	SearchableArray();

	void virtual PushNumber(int number);

	void virtual RemoveAt(int index);

	void virtual ClearArray();		

	void virtual FillTheArray();

	void virtual ShowTheArray();

	int virtual SearchAt(int number);
};

