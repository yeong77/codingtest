#include<iostream>

using namespace std;

int S, P;
int result;
int checknum;

string DNA;
int myarr[4];
int checkarr[4];

//�Լ� ���� ����
void Add(char c);  
void Remove(char c);

int main() {

	cin >> S >> P;
	cin >> DNA;

	for (int i = 0; i < 4; i++) {
		cin >> checkarr[i];

		if (checkarr[i] == 0) {
			checknum++; //0�ϰ��, �� ���� �ְų� ���ų� �����ϴ� ���̱� ����. 
		}
	}

	for (int i = 0; i < P; i++) {
		Add(DNA[i]); // myarr�� P������ŭ �߰�. 
	}

	if (checknum == 4) { // ù ���ڿ��� ��ȿ�� ���ڿ����� ī��Ʈ. 
		result++;
	}

	for (int i = P; i < S; i++) { // �����̵� ������ 
		Add(DNA[i]);
		Remove(DNA[i - P]);

		if (checknum == 4) {
			result++;
		}
	}

	cout << result;
	
}

void Add(char c) {
	switch (c)
	{
	case 'A':
		myarr[0]++;
		if (myarr[0] == checkarr[0]) {
			checknum++;
		}
		break;
	case 'C':
		myarr[1]++;
		if (myarr[1] == checkarr[1]) {
			checknum++;
		}
		break;
	case 'G':
		myarr[2]++;
		if (myarr[2] == checkarr[2]) {
			checknum++;
		}
		break;
	case 'T':
		myarr[3]++;
		if (myarr[3] == checkarr[3]) {
			checknum++;
		}
		break;
	}
}

void Remove(char c) {
	switch (c)
	{
	case 'A':
		if (myarr[0] == checkarr[0]) {
			checknum--;
		}
		myarr[0]--;
		break;
	
	case 'C':
		if (myarr[1] == checkarr[1]) {
			checknum--;
		}
		myarr[1]--;
		break;
	
	case 'G':
		if (myarr[2] == checkarr[2]) {
			checknum--;
		}
		myarr[2]--;
		break;

	case 'T':
		if (myarr[3] == checkarr[3]) {
			checknum--;
		}
		myarr[3]--;
		break;
	}
}




