#include <iostream>
#include <algorithm>

using namespace std;

void stuGrade(const double* arr, int* p, double& sum, double& avg, double& max) {
	sum = 0.0;
	max = 0.0;
	for (int i = 0; i < *p; i++) {
		sum += *(arr + i);
		if (*(arr + i) > max) {
			max = *(arr + i);
		}
	}
	avg = sum / *p;
}
int main() {
	// p에 동적 메모리 할당 후 학생 수를 입력받는다.
	int* p = new int;
	cout << "학생 수를 입력하세요: ";
	cin >> *p;

	// 학생 수만큼 동적 배열 할당
	double* arr = new double[*p];
	cout << *p << "명의 학생의 점수를 입력하세요: " << endl;
	for (int i = 0; i < *p; i++) {
		cout << "arr[" << i << "]: ";
		cin >> *(arr + i);
	}

	double sum, avg, max;
	stuGrade(arr, p, sum, avg, max);
	cout << "총점:" << sum << " 평균:" << avg << " 최고점:" << max << endl;

	// 동적 메모리 해제
	delete[] arr;
	delete p;

	return 0;
}