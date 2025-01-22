#include<iostream>
#include<vector>

using namespace std;

int main() {

	int N, M;
	
	int count = 0;
	int remainder = 0;
	int H[1001] = {};

	cin >> N >> M;

	vector<int> A(N+1, 0); // N+1�� ������ ���� ��� N�� 3�̶�� �� ��, 0���� �迭 �ڸ��� ����µ� �׷��� �Ǹ�  0, 1, 2 �� 3�ڸ��� ����. 
	                       // �׷��� ������ ���� ������ �� 1���� ������ �Ϸ��� �ϸ� ������ ���� ���ڸ�. �׷��� +1�� �ϴ� ����. 
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