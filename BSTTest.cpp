/*
 * BSTTest.cpp
 *
 *  Created on: Nov 2, 2017
 *      Author: KVTran
 */



# include "BST.h"

int main()
{
	cout << "- Insert 15, 6, 3, 7, 2, 4, 13 ,9, 18,17, 20 into the tree" << endl << endl;
	const int arraySize = 11;
	int dataArray[arraySize] = {15, 6, 3, 7, 2, 4, 13 ,9, 18,17, 20};
	BST<int> bst1;
	for (int i = 0; i < arraySize; i++) bst1.insert(dataArray[i]);
	cout << "************ Test Insert and Print ************" << endl;
	cout << "- Test inOrderPrint(), Should print 2 3 6 7 9 13 15 17 18 20: " << endl;
	bst1.inOrderPrint(cout);
	cout << endl << "- Test inOrderPrint(), Should print 15 6 3 2 4 7 13 19 18 17 20: " << endl;
	bst1.preOrderPrint(cout);
	cout << endl << "- Test inOrderPrint(), Should print 2 4 3 9 13 7 6 17 20  18 15: " << endl;
	bst1.postOrderPrint(cout);

	cout << endl << "************ Test Search ************" << endl;
	cout << "- Test whether 15 (root node) is in the tree. Should print 'Found':" << endl;
	if (bst1.search(15)) cout << "Found" << endl;
	cout << endl << "- Test whether 17 (leaf node) is in the tree. Should print 'Found':" << endl;
	if (bst1.search(17)) cout << "Found" << endl;
	cout << endl << "- Test whether 18 (neither root nor leaf node) is in the tree. Should print 'Found':" << endl;
	if (bst1.search(18)) cout << "Found" << endl;
	cout << endl << "- Test whether 8 is in the tree. Should print 'Not Found':" << endl;
	if (!bst1.search(8)) cout << "Not Found" << endl;

	cout << "**********************" << endl;
	cout << bst1.getSize() << endl;   // test getSize()
	if (!bst1.isEmpty()) cout << "Not empty" << endl;  // test isEmpty()
	cout << bst1.minimum() << endl; // test maximum
	cout << bst1.maximum() << endl; // test minimum
	cout << bst1.getRoot() << endl; // test getRoot
	cout << bst1.getHeight() << endl; // test getHeight()

	bst1.inOrderPrint(cout);      // test copy constructor
	BST<int> bst2(bst1);
	bst2.inOrderPrint(cout);
	cout << bst2.getRoot() << endl;

	cout << "********************" << endl;  // test deleteNode
	//bst1.remove(20);
	//bst1.inOrderPrint(cout);
	//bst1.remove(13);
	//bst1.inOrderPrint(cout);
	//bst1.remove(7);
	//bst1.inOrderPrint(cout);
	bst1.remove(15);
	bst1.inOrderPrint(cout);


	return 0;
}
