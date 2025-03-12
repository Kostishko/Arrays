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
	if (tail < ARRAYSIZE)
	{
		array[tail] = number;
	}
	tail++;
}

void OrderedArray::RemoveAt(int index)
{
	tail--;
	for (int i = index; i < tail; i++)
	{
		array[i] = array[i++];
	}
	array[tail] = 0;
}

void OrderedArray::FillTheArray()
{

} 

void OrderedArray::ShowTheArray()
{

}

int OrderedArray::SearchAt(int number)
{
	return 0;
}
