/*#include<iostream>
#include<algorithm>
using namespace std;
int main() {
	int a, b;
	cin >> a >> b;
	int* A = new int[a];
	int* B = new int[b];
	for (int i = 0; i < a; i++) {
		cin >> A[i];
	}
	for (int i = 0; i < b; i++) {
		cin >> B[i];
	}
	sort(B, B + b);
	for (int i = 0; i < a; i++) {
		for (int j = 0; j < b; j++) {
			if (A[i] >= B[j]) {
				A[i] += B[j];
			}
		}
		cout << A[i] << " ";
	}
}*/