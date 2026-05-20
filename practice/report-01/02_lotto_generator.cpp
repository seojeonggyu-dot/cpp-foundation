#include <iostream>

using namespace std;

// 학생 성적 처리
// 성적을 입력할 학생 수 만큼 메모리를 할당하여 성적을 입력받는다.
// 입력받은 점수의 총합과 평균 그리고 최댓값을 구한다.
// 단 총점과 평균 그리고 최댓값을 구하는 하나의 함수 작성

void stuGrade(const double* pArr, int num, double& rSum, double& rAve, double& rMax) {
	for (int j = 0;j < num;j++) {
		rSum += pArr[j];
		if(pArr[j] > rMax) {
			rMax = pArr[j];
		}
	}
	rAve = rSum / num;

}

int main() {
	int num;
	cout << "학생 수를 입력하세요 : ";
	cin >> num;
	double *pArr = new double[num]; // 학생 수만큼 동적할당
	
	for (int i = 0;i < num;i++) {
		cin >> pArr[i];
	}

	double rSum = 0, rAve, rMax = pArr[0];
	stuGrade(pArr, num, rSum, rAve, rMax);
	cout << endl << "##### 성적 결과 출력 #####" << endl;

	cout << "학생수 : " << num << endl;
	cout << "총  점 : " << rSum << endl;
	cout << "평  균 : " << rAve << endl;
	cout << "최댓값 : " << rMax << endl;

	delete[] pArr; // 동적 메모리 해제
}