#include<iostream>
#include<vector>

using namespace std;

int main() {
	

	int M = 0;
	int start = 1;
	int end = 1;
	int sum = 1;
	int count = 0;


	cin >> M;
	vector<int> A(M + 2, 0);

	for (int i = 1; i <= M; i++) {
		A[i] = i;
	}

	while (1) {
		
			if (sum < M) {
				end++;
				sum += A[end];
				
			}

			else if (sum == M) {
				end++;
				sum += A[end];
				count++;
				if (start == M) {
					break;
				}
			}

			else if (sum > M) {
				sum -= A[start];
				start++;

			}
		}


	cout << count << endl;

}