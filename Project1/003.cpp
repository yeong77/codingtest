//003

#include<iostream>

using namespace std;

int main() {
	int N=0, M=0;
	int nm[2];

	int A[100];
	int S[100];


	for (int i = 0; i < 2; i++) {
		cin >> nm[i];
	}

	N = nm[0];
	M = nm[1];

	int ij[100][2];

	for (int i = 0; i < N; i++) {
		cin >> A[i];
		//S[i] += A[i];
		if (i == 0) {
			S[i] = A[i];
		}
		else {
			S[i] = S[i-1] + A[i];  //이전의 합과 지금 값의 합. 
		}
	}

	for (int i = 0; i < M; i++) {
		for (int j = 0; j < 2; j++) {
			cin >> ij[i][j];
		}
	}

	for (int i = 0; i < M; i++) {
		if (ij[i][0] == 1) {
			cout << S[ij[i][1] -1] << endl ;
		}
		else if(ij[i][0] == ij[i][1]) {
			cout << A[ij[i][0] - 1] << endl;
		}
		else {
			cout << S[ij[i][1] - 1] - S[ij[i][0] - 2] << endl;
		}
	}
}