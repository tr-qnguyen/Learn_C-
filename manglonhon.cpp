/*#include<iostream>
using namespace std;
int main() {
	int a, b,count= 0;
	cin >> a >> b;
	int* c = new int[a];
	for (int i = 0; i < a; i++) {
		cin >> c[i];
	}
	for (int i = 0; i < a; i++) {
		int sum = 0;
		for (int j = i; j < a; j++) {
			sum += c[j];
			if (sum > b) {
				count++;
			}
		}
	}
	cout << count;
}
*/