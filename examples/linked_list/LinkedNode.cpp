#include <iostream>
#include "LinkedNode.h"
using namespace std;

SNode::SNode(const int &data):
	data_(data), link_(nullptr) {}

int SNode::getData() const {
	return data_;
}

// 클래스 설계: DNode(data, Llink, Rlink)
DNode::DNode(const int& data) :
	data_(data), Llink_(nullptr), Rlink_(nullptr) {
}

// 노드의 데이터 반환
int	DNode::getData(void) const {
	return data_;
}