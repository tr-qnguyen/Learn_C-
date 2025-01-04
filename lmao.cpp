/*#include<iostream>
using namespace std;
int main() {
	int n;
	cin >> n;
	int** N = new int* [n];
	for (int i = 0; i < n; i++) {
		N[i] = new int[4];
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < 4; j++) {
			cin >> N[i][j];
		}
	}
	int index = 1;
	for (int i = 1; i < n; i++) {
		if (N[i][0] <= N[0][0] && N[i][2] >= N[0][0] && N[i][1] <= N[0][3] && N[i][3] >= N[0][3]) {
			index++;
		}
	}
	cout << index;
};*/