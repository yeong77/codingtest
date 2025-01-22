#include<iostream>
#include<vector>

using namespace std;

int main() {

	int N, M;
	
	int count = 0;
	int remainder = 0;
	int H[1001] = {};

	cin >> N >> M;

	vector<int> A(N+1, 0); // N+1인 이유는 예를 들어 N이 3이라고 할 때, 0부터 배열 자리를 만드는데 그렇게 되면  0, 1, 2 이 3자리만 만듦. 
	                       // 그런데 실제로 값을 저장할 때 1부터 저장을 하려고 하면 마지막 값이 모자름. 그래서 +1을 하는 것임. 
	vector<int> S(N+1, 0);



	for (int i = 1; i <= N; i++) {
		cin >> A[i];
		S[i] = S[i - 1] + A[i];
	}

	for (int i = 1; i <= N; i++) {
		remainder = S[i] % M;
		if (remainder == 0) {
			count += 1;
		}
		H[remainder] += 1;
	}

	for (int i = 0; i < M; i++) {
		count += (H[i] * (H[i] - 1)) / 2;

	}

	cout << count << endl;
		//	for (int k = 1; k <= N; k++) {
		//		for (int i = k; i <= N; i++) {
		//			if (((S[i] - S[k - 1]) % M) == 0) {
		//				count += 1;
		//			}
		//		}
		//	}
		//
		//	cout << count << endl;
		//}
	}