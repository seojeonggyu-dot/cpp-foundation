#ifndef __SNode_H__
#define __SNode_H__

class SNode {
public:
	SNode(const int& data);
	int getData() const;
private:
	int data_;
	SNode* link_;
	friend class SLinkedList;

};

#endif
