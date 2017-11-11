/*
 * BSTTest.cpp
 *
 *  Created on: Nov 2, 2017
 *      Author: Khang Vinh Tran, Tri Doan
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


	cout << " *************Test getSize and isEmpty **************" << endl << endl;
		cout << "Should print out size 11" << endl;
		cout << bst1.getSize() << endl;
		cout << "Should print out 'Not empty'" << endl;
		if (!bst1.isEmpty()) cout << "Not empty" << endl << endl;
		cout << "-Test with empty bst" << endl;
		BST<int> bst5;
		cout << "Should print out size 0" << endl;
		cout << bst5.getSize() << endl;
		cout << "Should print out 'empty'" << endl;
		if (!bst5.isEmpty()) cout << "empty" << endl;
		cout << endl;


	cout << "*************Test Minimum, Maximum, getRoot and getHeight **************"<< endl << endl;
		cout << "Should print out the minimum element" << endl;
		cout << bst1.minimum() << endl;
		cout << "Should print out the maximum element" << endl;
		cout << bst1.maximum() << endl;
		cout << "Should print out the element at the root" << endl;
		cout << bst1.getRoot() << endl;
		cout << "Should print out the height" << endl;
		cout << bst1.getHeight() << endl << endl;
		cout << "- Test all of the above with empty bst. When being stopped, comment out the code" << endl;
		//cout << bst5.minimum() << endl;
		//cout << bst5.maximum() << endl;
		//cout << bst5.getRoot() << endl;
		cout << "- Test getHeight() on empty bst. Should get -1 for the height of the NULL node" << endl;
		cout << bst5.getHeight() << endl << endl;

		cout << "*************Test CopyConstructor*************" << endl << endl;
		cout << "bst1 contains: ";
		bst1.inOrderPrint(cout);
		BST<int> bst2(bst1);
		cout << "bst2 contains: ";
		bst2.inOrderPrint(cout);
		cout << "- Test copyConstructor to empty bst. When being printed out. Should give 2 empty lines: " << endl;
		BST<int> bst3;
		BST<int> bst4(bst3);
		bst3.inOrderPrint(cout);
		bst4.inOrderPrint(cout);
		cout << endl;

	cout << "*************Test remove and deleteNode and InOrderPrint*************" << endl;
		bst2.inOrderPrint(cout);
		cout << "Remove the leaf node (number 2)" << endl;
		bst2.remove(2);
		bst2.inOrderPrint(cout);
		cout << "Remove the node with one left child (number 13)" << endl;
		bst2.remove(13);
		bst2.inOrderPrint(cout);
		cout << "Remove the node with only right child (number 7)" << endl;
		bst2.remove(7);
		bst2.inOrderPrint(cout);
		cout << "Remove the node with two child (number 18)" << endl;
		bst2.remove(18);
		bst2.inOrderPrint(cout);
		cout << "Remove the root (number 15)" << endl;
		bst2.remove(15);
		bst2.inOrderPrint(cout);
		cout << "Remove the node whose value does not exist in the bst. Should be stopped. Comment out the code" << endl;
		//bst2.remove(33);
		return 0;


	return 0;
}



/*
 - Insert 15, 6, 3, 7, 2, 4, 13 ,9, 18,17, 20 into the tree

************ Test Insert and Print ************
- Test inOrderPrint(), Should print 2 3 6 7 9 13 15 17 18 20:
2 3 4 6 7 9 13 15 17 18 20

- Test inOrderPrint(), Should print 15 6 3 2 4 7 13 19 18 17 20:
15 6 3 2 4 7 13 9 18 17 20

- Test inOrderPrint(), Should print 2 4 3 9 13 7 6 17 20  18 15:
2 4 3 9 13 7 6 17 20 18 15

************ Test Search ************
- Test whether 15 (root node) is in the tree. Should print 'Found':
Found

- Test whether 17 (leaf node) is in the tree. Should print 'Found':
Found

- Test whether 18 (neither root nor leaf node) is in the tree. Should print 'Found':
Found

- Test whether 8 is in the tree. Should print 'Not Found':
Not Found
 *************Test getSize and isEmpty **************

Should print out size 11
11
Should print out 'Not empty'
Not empty

-Test with empty bst
Should print out size 0
0
Should print out 'empty'

*************Test Minimum, Maximum, getRoot and getHeight **************

Should print out the minimum element
2
Should print out the maximum element
20
Should print out the element at the root
15
Should print out the height
4

- Test all of the above with empty bst. When being stopped, comment out the code
- Test getHeight() on empty bst. Should get -1 for the height of the NULL node
-1

*************Test CopyConstructor*************

bst1 contains: 2 3 4 6 7 9 13 15 17 18 20
bst2 contains: 2 3 4 6 7 9 13 15 17 18 20
- Test copyConstructor to empty bst. When being printed out. Should give 2 empty lines:



*************Test remove and deleteNode and InOrderPrint*************
2 3 4 6 7 9 13 15 17 18 20
Remove the leaf node (number 2)
3 4 6 7 9 13 15 17 18 20
Remove the node with one left child (number 13)
3 4 6 7 9 15 17 18 20
Remove the node with only right child (number 7)
3 4 6 9 15 17 18 20
Remove the node with two child (number 18)
3 4 6 9 15 17 20
Remove the root (number 15)
3 4 6 9 17 20
Remove the node whose value does not exist in the bst. Should be stopped. Comment out the code


 */
