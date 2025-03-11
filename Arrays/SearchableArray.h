#include <iostream>
#include <cstdlib>
#pragma once
#define ARRAYSIZE 10
using namespace std;

class SearchableArray
{
	
public:
	int array[];

	SearchableArray();

	void FillTheArray();

	void ShowTheArray();

	int SearchAt(int number);
};

