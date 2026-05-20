#include <iostream>
#include <vector>
using namespace std;

// 점수를 입력받아 학생 성적 처리
// 총합, 평균, 최댓값 계산 -> 함수로 구현

void stuGrade(vector<double>& vArr, double& rSum, double& rAve, double& rMax) {
	if (vArr.empty()) return; // vArr 이 비어있으면 함수 종료  
	rMax = vArr.at(0); // 음수의 점수가 들어올 경우 0.0으로 초기화 하면 안되므로 0번째 요소로 초기화
	for (int i = 0;i < vArr.size();i++)
	{
		rSum += vArr[i];
		rMax = (rMax < vArr[i]) ? vArr[i] : rMax;
	}
	rAve = rSum / vArr.size();
}

int main() {
	vector<double> vArr;
	cout << "학생 점수를 입력하세요(종료: -1):" << endl;
	while (true) {
		double score;
		cout << "vArr[" << vArr.size() << "]: "; cin >> score;
		if (score == -1) break;
		vArr.push_back(score);
	}

	double rSum = 0.0, rAve = 0.0, rMax = 0.0;
	stuGrade(vArr, rSum, rAve, rMax);
	cout << "총합:" << rSum << ", 평균 : " << rAve << ", 최댓값: " << rMax << endl;
	
	return 0;
}