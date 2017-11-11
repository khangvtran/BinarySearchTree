/*
 * HashTest.cpp
 *
 *  Created on: Nov 7, 2017
 *      Author: $$$$$$$$$$$$$$$$$$$$
 */

#include <iostream>
#include <iomanip>
#include <string>
#include "HashTable.h"

int main()
{
	HashTable hashObj;
	cout << "**********Test Hash**********" << endl;
	string key;
	cout << "PLease enter book title and author: ";
	getline(cin, key);
	cout << hashObj.hash(key);
	//countBucket(index);
	return 0;
}
