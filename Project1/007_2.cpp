#include<iostream>
#include<vector>
#include<algorithm> //sort �Լ� �� �� �ʿ�

using namespace std;

int main() {

	int N;
	int M;
	int start=1;
	int count = 0;
	int sum = 0;

	cin >> N;
	cin >> M;
	int end = N;
	vector<int> A(N + 1, 0);

	for (int i = 1; i <= N; i++) {
		cin >> A[i];
	}

	sort(A.begin()+1, A.end()); //0�� ���ԵǱ� ������ +1 

	sum = A[1] + A[N];


	while (end > start) { //�ݴ�� �ϴ°� ����! 
		if (sum == M) {
			count++;
			start++;
			end--;
			sum = A[start] + A[end];
		}

		else if (sum > M) {
			end--;
			sum = A[start] + A[end];
		}

		else {
			start++;
			sum = A[start] + A[end];
		}
	}

	cout << count;

}