#include "LinkedNode.h"

#ifndef __SLinkedList_H__
#define __SLinkedList_H__

class SLinkedList {
public:
	SLinkedList();
	~SLinkedList();
	void addRear(const int& e);
	void printLinkedList() const;
	int countNode() const;
	bool isEmpty() const;
	SNode* frontNode() const;
	SNode* rearNode() const;
	void removeFront();
private:
	SNode* head_;
	SNode* tail_;
	int count_;
};

#endif  
