/*
 * HashTest.cpp
 *
 *  Created on: Nov 7, 2017
 *      Author: $$$$$$$$$$$$$$$$$$$$
 */

#include "Book.h"
#include <iostream>
#include <iomanip>
#include <string>
#include "HashTable.h"

int main()
{
	HashTable hashObj;
	cout << "**********Test Hash**********" << endl;
	string key;
	getline(cin, key);
	hashObj.hash(key);
	//countBucket(index);
	return 0;
}
