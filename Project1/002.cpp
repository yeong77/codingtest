//002 평균구하기

#include<iostream>
#include<vector>

using namespace std;

int main()
{
	int N = 0;
	
	double sum = 0;
	double change = 0;
	double avg = 0;
	double max = 0;
	double num = 0;

	cin >> N;

	vector<double> score(N);

	for (int i = 0; i < N; i++) { 
		cin >> score[i];
		num = score[i];    // score 자체가 double 값임. 
		if (max > num) {
			max = max;
		}
		else
			max = score[i];  // 최대값 구하기 
	}

	for (int i = 0; i < N; i++) {
		num = score[i];
		change = num / max * 100;      //점수변환 
		sum += change;               //점수 총합 계산
	}
	avg= sum / N;                   // 점수 평균 계산
	cout << avg << endl;
}