
#include "SearchableArray.h"


SearchableArray::SearchableArray()
{
	for (int i = 0; i < ARRAYSIZE; i++)
	{
		array[i] = 0;
	}
}

void SearchableArray::FillTheArray()
{
	for (int i = 0; i < ARRAYSIZE; i++)
	{
		array[i] = rand();
	}
}

int SearchableArray::SearchAt(int number)
{
	for (int i = 0; i < ARRAYSIZE; i++)
	{
		if (number == array[i])
		{			
			return i;
		}
	}

	return -1;
}

void SearchableArray::ShowTheArray()
{
	cout << "Here is the array: \n";
	for (int i = 0; i < ARRAYSIZE; i++)
	{
		cout << "      Num ";
		cout << i;
		cout << ": ";
		cout << array[i];
		cout << "\n";
	}
}