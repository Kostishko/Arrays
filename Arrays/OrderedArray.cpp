#include "OrderedArray.h"



OrderedArray::OrderedArray()
{
	tail = 0;
	for (int i = 0; i < ARRAYSIZE; i++)
	{
		array[i] = 0;
	}
}

void OrderedArray::PushNumber(int number)
{
	if (tail >= ARRAYSIZE) {
		std::cout << "Array is full! Cannot insert." << std::endl;
		return;
	}

	int i;
	for (i = tail - 1; i >= 0 && array[i] > number; i--) {
		array[i + 1] = array[i];
	}
	array[i + 1] = number;
	tail++;
}

void OrderedArray::RemoveAt(int index)
{
	if (index < 0 || index >= tail) {
		std::cout << "Invalid index!" << std::endl;
		return;
	}

	for (int i = index; i < tail - 1; i++) {
		array[i] = array[i + 1];
	}
	tail--;
}

void OrderedArray::FillTheArray()
{

	for (int i = 0; i < ARRAYSIZE; i++)
	{
		PushNumber(rand());
	}
} 


int OrderedArray::SearchAt(int number)
{
	int midIndex = tail / 2;
	int topIndex = tail;
	int lowIndex = 0;
	bool founded = false;
	while (!founded)
	{
		if (array[midIndex] == number)
		{
			founded = true;
			break;
		}

		if (array[midIndex] > number)
		{
			topIndex = midIndex;
			midIndex =lowIndex + ( topIndex - lowIndex)/ 2;
		}
		else
		{
			lowIndex = midIndex;
			midIndex = lowIndex + (topIndex - lowIndex) / 2;

		}
	}
	return midIndex;
}
