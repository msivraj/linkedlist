#include "Factory.h"
#include "Linkedlist.h"
// You may put your #include statements Here

using namespace std;

/*
    You will MODIFY THIS DOCUMENT.
 */
//=======================================================================================
/*
	getLinkedListInt()

	Creates and returns an object whose class extends LinkedListInterface.
	This should be an object of a class you have created.

	Example: If you made a class called "LinkedList", you might say, "return new LinkedList<int>();".
*/
LinkedListInterface<int>* Factory::getLinkedListInt() {
	return new Linkedlist<int>();
}

/*
	getLinkedListString()

	Creates and returns an object whose class extends LinkedListInterface.
	This should be an object of a class you have created.

	Example: If you made a class called "LinkedList", you might say, "return new LinkedList<string>();".
*/
LinkedListInterface<string>* Factory::getLinkedListString() {
	return new Linkedlist<string>();
}
//=======================================================================================
/*int main() {
	Linkedlist<int>* myList = new Linkedlist<int>();
	//myList->insertTail("g");
	myList->insertHead(8);
	myList->insertTail(17);
	myList->remove(44);

	myList->remove(4);
	myList->remove(28);

	myList->insertAfter(33, 1);
	myList->insertTail(4);
	myList->insertTail(12);
	myList->insertTail(6);
	myList->insertTail(5);
	myList->insertTail(7);

	myList->insertTail(14);
	myList->insertTail(11);
	myList->insertTail(9);
	myList->insertTail(0);
	myList->insertTail(2);

	myList->insertTail(18);
//	myList->at(0);
	cout << myList->size();
	myList->clear();
	cout << myList->size();

	//myList->remove(16);


	myList->printList();



	return 0;
 }*/
