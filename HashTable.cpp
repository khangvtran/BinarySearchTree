/*
 * HashTable.cpp
 *
 *  Created on: Nov 7, 2017
 *      Author: $$$$$$$$$$$$$$$$$$$$
 */



#include <iostream>
#include <iomanip>
#include <string>
#include "HashTable.h"
#include "List.h"
#include <assert.h>
#include "Book.h"
using namespace std;

int HashTable::hash(string key) const
{
	int index, sum = 0;
	for (unsigned int i = 0; i < key.length(); i++)
	{
		sum += (int)key[i];
	}
	index = sum % 10;
	return index;
}

int HashTable::countBucket(int index) const
{
	Table = new Node[10];

	return 0;
}
//counts the number of Books at this index
//returns the count
//pre: 0<= index < SIZE

