#include <iostream>
#include "report#03-5_SLinkedNode.h"
using namespace std;

SNode::SNode(const int& data) :
	data_(data), link_(nullptr) {
}

int SNode::getData() const {
	return data_;
}
