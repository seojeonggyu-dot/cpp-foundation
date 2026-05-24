#pragma once
#include "report#03-6_LinkedNode.h"		// DNode

#ifndef __DLinkedList_H__
#define __DLinkedList_H__

// 이중 연결 리스트: DLinkedList(head)
class DLinkedList {
public:
	DLinkedList(void);							// 생성자
	~DLinkedList(void);							// 소멸자: 전체 노드 삭제
	bool	isEmpty(void) const;				// 빈 리스트 여부 판단
	int	countNode(void) const;					// 탐색: 노드의 총 개수(count_)
	DNode* frontNode(void) const;				// 탐색: 첫 번째 노드(head_)
	DNode* rearNode(void) const;				// 탐색: 맨 마지막 노드(tail_)
	void	addRear(const int& e);				// 삽입: 맨 마지막 노드(tail_)
	void	removeFront(void);					// 삭제: 첫 번째 노드(head)
	void	printLinkedList(void) const;		// 출력: 리스트 전체 노드의 데이터(역방향)
	void	printRevLinkedList(void) const;		// 출력: 리스트 전체 노드의 데이터(역방향)
private:
	DNode* head_;		// 첫 번째 노드
	DNode* tail_;			// 맨 마지막 노드
	int		count_;			// 노드의 총 개수
};

#endif