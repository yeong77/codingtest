#include<iostream>
#include<vector>

using namespace std;

int main() {

	int N; 
	int M;
	int start = 1;
	int end = 2;
	int sum = 0; 
	int count = 0;
	
	cin >> N;
	cin >> M;
	vector<int> A(N + 3, 0);

	for (int i = 1; i <= N; i++) {
		cin >> A[i];
	}
	
	sum = A[1] + A[2];

	while (start < N) {
		if (sum == M) {
			count++;
			if (start == N - 1 && end == N) { // sum�� M�� ������ ���� �� ī��Ʈ ���� while�� ������ ��. 
				break;
			}

			start++;
			end = start + 1;
			sum = A[start] + A[end];
		}

		if (sum != M) {

			if (start == N - 1 && end == N) {
				break;
			}
		
			
			if (end == N) {
				start++;
				end = start + 1;
				sum = A[start] + A[end]; // end�� ���� ���� �� ���� sum�� �ʱ�ȭ �������. 
				
			}

			else {
				sum = sum - A[end];
				end++;
				sum = sum + A[end]; // sum�� ��ģ �ڿ��� sum�� M�� ������ �Ǵ��ؾ� ��. 
			}
		}


	}
	cout << count;
}