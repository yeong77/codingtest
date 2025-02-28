#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main() {

	int N;
	int i = 1;
	int j = 2;
	int now = 3;
	int sum = 0;
	int cnt = 0;
	
	cin >> N;
	vector<int> A(N + 1, 0);

	for (int i = 1; i <= N; i++) {
		cin >> A[i];
	}

	sort(A.begin() + 1, A.end());

	sum = A[1] + A[2];

	while (now <= N) {
		if (sum == A[now]) {
			cnt++;
			now++;
			i = 1; 
			j = now - 1;
			sum = A[i] + A[j];
		}

		else if (sum > A[now]) {
			j--;
			sum = A[i] + A[j];
		}

		else {
			i++;
			sum = A[i] + A[j];
		}
	}

	cout << cnt;
}

