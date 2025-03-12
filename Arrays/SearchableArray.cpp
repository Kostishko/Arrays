
#include "SearchableArray.h"


SearchableArray::SearchableArray()
{
	tail = 0;	
	for (int i = 0; i < ARRAYSIZE; i++)
	{
		array[i] = 0;
	}
}

void SearchableArray::PushNumber(int number)
{
	if (tail < ARRAYSIZE)
	{
		array[tail] = number;
	}
	tail++;
}

void SearchableArray::RemoveAt(int index)
{
	tail--;
	for (int i = index; i < tail; i++)
	{
		array[i] = array[i++];
	}
	array[tail] = 0;
}

void SearchableArray::FillTheArray()
{
	
	for (int i = 0; i < ARRAYSIZE; i++)
	{
		PushNumber(rand());		
	}
}

void SearchableArray::ClearArray()
{
	for (int i = 0; i < ARRAYSIZE; i++)
	{
		RemoveAt(0);
		if (tail == 0)
			break;
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