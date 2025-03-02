#include<iostream>
#include<algorithm>
#include<string>

using namespace std;

int main() {

	int N;
	int k;
	int num_a, num_c, num_g, num_t;
	char target1 = 'A';
	char target2 = 'C';
	char target3 = 'G';
	char target4 = 'T';
	int count1, count2, count3, count4;
	int result = 0;

	string dna;
	string pw;

	cin >> N >> k;
	cin >> dna;
	cin >> num_a >> num_c >> num_g >> num_t;

	pw.resize(k); // k 크기를 지정해줘야 오류가 나지 않음. 
	for (int i= 0; i < k; i++) {
		pw[i] = dna[i];
		
	}

	count1 = count(pw.begin(), pw.end(), target1);
	count2 = count(pw.begin(), pw.end(), target2);
	count3 = count(pw.begin(), pw.end(), target3);
	count4 = count(pw.begin(), pw.end(), target4);

	if (count1 >= num_a && count2 >= num_c && count3 >= num_g && count4 >= num_t) {
		result++;
	}

	for (int i = k; i < N; i++) {
		pw.erase(0, 1);
		pw.append(1, dna[i]);

		count1 = count(pw.begin(), pw.end(), target1);
		count2 = count(pw.begin(), pw.end(), target2);
		count3 = count(pw.begin(), pw.end(), target3);
		count4 = count(pw.begin(), pw.end(), target4);

		if (count1 >= num_a && count2 >= num_c && count3 >= num_g && count4 >= num_t) {
			result++;
		}

	}

	cout << result;

}