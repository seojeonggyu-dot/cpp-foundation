#include <iostream>
#include "SLinkedList(head).h"

using namespace std;

SLinkedList::SLinkedList() {
	head_ = nullptr;
	count_ = 0;
	tail_ = nullptr;
}
	
SLinkedList::~SLinkedList() {
	SNode* tNode = head_;
	while (tNode) {
		head_ = tNode->link_;
		delete tNode;
		tNode = head_;
	}
}

bool SLinkedList::isEmpty() const {
	return head_ == nullptr;
}

int SLinkedList::countNode() const {
	/*
	int count = 0;
	SNode* rNode = head_;
	while (rNode) {
		count++;
		rNode = rNode->link_;
	}
	return count;*/
	return count_;
}

SNode * SLinkedList::frontNode() const {
	return head_;
}

SNode * SLinkedList::rearNode() const {
	/*if (isEmpty()) return nullptr;
	SNode* rNode = head_;
	while(rNode->link_) {
		rNode = rNode->link_;
	}
	return rNode;
	*/
	return tail_;
}

void SLinkedList::addRear(const int & e) {
	SNode* newNode = new SNode(e);
	if (isEmpty()) {
		head_ = newNode;
	}
	else {/*
		SNode* rNode = rearNode();
		rNode->link_ = newNode;*/
		tail_->link_ = newNode;
	}
	tail_ = newNode;
	count_++;
}

void SLinkedList::removeFront() {
	if (isEmpty()) return;
	SNode* old = head_;
	head_ = old->link_;
	if (head_ == nullptr) {
		tail_ = nullptr;
	}
	delete old;
	count_--;
}

void SLinkedList::printLinkedList() const {
	if (isEmpty()) {
				cout << "입력된 데이터가 없습니다!!!\n" << endl;
				return;
	}
	SNode* tNode = head_;
	while (tNode) {
		cout << tNode->data_ << " ->>";
		tNode = tNode->link_;
	}
	cout << " NULL\n" << endl;
}