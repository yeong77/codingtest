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
			if (start == N - 1 && end == N) { // sum이 M과 같은지 비교한 후 카운트 세고 while문 나가야 함. 
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
				sum = A[start] + A[end]; // end가 끝날 때도 그 전의 sum을 초기화 해줘야함. 
				
			}

			else {
				sum = sum - A[end];
				end++;
				sum = sum + A[end]; // sum에 합친 뒤에는 sum이 M과 같은지 판단해야 함. 
			}
		}


	}
	cout << count;
}