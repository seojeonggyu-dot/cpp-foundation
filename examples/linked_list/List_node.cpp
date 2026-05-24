#include <iostream>
#include "SLinkedList(head).h"

using namespace std;

int main() {
	int num;
	SLinkedList sList = SLinkedList();

	while (true) {
		cout << "임의의 정수 입력(종료 : 0): ";
		cin >> num;
		if (num == 0)break;
		sList.addRear(num);
	}

	sList.printLinkedList();

	cout << "노드의 총 개수: " << sList.countNode() << endl;

	if (sList.isEmpty()) {
		cout << "입력된 데이터가 없습니다!!!\n" << endl;
	}
	else {
		cout << "첫번째 노드의 데이터: " << sList.frontNode()->getData() << endl;
		cout << "마지막 노드의 데이터: " << sList.rearNode()->getData() << endl;
	}
	cout << endl;

	return 0;
}