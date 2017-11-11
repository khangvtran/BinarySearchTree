/*
 * HashTable.cpp
 *
 *  Created on: Nov 7, 2017
 *      Author: $$$$$$$$$$$$$$$$$$$$
 */



#include "Book.h"
#include <iostream>
#include <iomanip>
#include <string>
#include "HashTable.h"
using namespace std;

int HashTable::hash(string key) const
{
	int index, sum = 0;
	for (int i = 0; i < key.length(); i++)
	{
		sum += (int)key[i];
	}
	index = sum % 10;
	return index;
}
/*
int countBucket(int index) const
{
	assert(0 <= index < 10);
	int count = 0;
	Table[index];
	count  = list1.getSize();
	return count;
}*/
//counts the number of Books at this index
//returns the count
//pre: 0<= index < SIZE

