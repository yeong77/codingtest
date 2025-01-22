#include<iostream> //시간 복잡도 : 1초 이상. 

using namespace std;

long long S[1025][1025] = {};  //배열 초기화
long long A[1025][1025] = {};

int main() {

	int N = 0;
	int M = 0;
	int X1, X2, Y1, Y2;
	int sum = 0;

	cin >> N >> M;

	for (int i = 1; i <= N; i++) {
		for (int j = 1; j <= N; j++) {
			cin >> A[i][j];
			S[i][j] = S[i - 1][j] + S[i][j - 1] - S[i - 1][j - 1] + A[i][j];

		}
	}

	for (int i = 0; i < M; i++) {
		cin >> X1 >> Y1 >> X2 >> Y2;
		sum = S[X2][Y2] - S[X1 - 1][Y2] - S[X2][Y1 - 1] + S[X1 - 1][Y1 - 1];

		cout << sum << endl;

	}
	/*for (int i = 1; i <= N; i++) {
		for (int j = 1; j <= N; j++) {
			int tmp;
			cin >> tmp;
			S[i][j] = S[i][j - 1] + tmp;
		}
	}

	for (int i = 0; i < M; i++) {
		cin >> X1 >> Y1 >> X2 >> Y2;

		for (int j = X1; j <= X2; j++) {
			sum += S[j][Y2] - S[j][Y1 - 1];
		}
		cout << sum << endl;
		sum = 0;
	}*/ 
}