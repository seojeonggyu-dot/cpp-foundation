#ifndef __DNode_H__
#define __DNode_H__

// 클래스 설계: DNode class
// 노드: DNode(data, Llink, Rlink)
class DNode {
public:
	DNode(const int& data);
	int	getData(void) const;
private:
	int		data_;
	DNode* Llink_;
	DNode* Rlink_;
	friend class DLinkedList;
};

#endif