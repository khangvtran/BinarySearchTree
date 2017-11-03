/*
 * BSTTest.cpp
 *
 *  Created on: Nov 2, 2017
 *      Author: KVTran
 */



# include "BST.h"

int main()
{
	const int arraySize = 11;
	int dataArray[arraySize] = {15, 6, 3, 7, 2, 4, 13 ,9, 18,17, 20};
	BST<int> bst1;
	for (int i = 0; i < arraySize; i++) bst1.insert(dataArray[i]);

	bst1.inOrderPrint(cout);
	bst1.preOrderPrint(cout);
	bst1.postOrderPrint(cout);

	return 0;
}
