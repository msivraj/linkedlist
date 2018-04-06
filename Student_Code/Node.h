/*
 * Node.h
 *
 *  Created on: Oct 22, 2016
 *      Author: msivraj
 */

#ifndef STUDENT_CODE_NODE_H_
#define STUDENT_CODE_NODE_H_

namespace std {
template<class T>
class Node {
private:
	T data;
	Node<T>* next;
	Node<T>* previous;

public:
	Node(T dataIn) {
		// TODO Auto-generated constructor stub
		data = dataIn;
		next = NULL;
		previous = NULL;
	}

	~Node() {
		// TODO Auto-generated destructor stub
	}

	Node<T>* getNext() {
		return next;
	}

	void setNext(Node<T>* nextIn) {
		next = nextIn;
	}

	Node<T>* getPrevious() {
		return previous;
	}

	void setPrevious(Node<T>* prevIn) {
		previous = prevIn;
	}

	T getValue() {
		return data;
	}


};

} /* namespace std */

#endif /* STUDENT_CODE_NODE_H_ */
