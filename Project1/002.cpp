//002 ��ձ��ϱ�

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
		num = score[i];    // score ��ü�� double ����. 
		if (max > num) {
			max = max;
		}
		else
			max = score[i];  // �ִ밪 ���ϱ� 
	}

	for (int i = 0; i < N; i++) {
		num = score[i];
		change = num / max * 100;      //������ȯ 
		sum += change;               //���� ���� ���
	}
	avg= sum / N;                   // ���� ��� ���
	cout << avg << endl;
}