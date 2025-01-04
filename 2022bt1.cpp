/*#include<iostream>
using namespace std;
int main() {
	int n;
	cin >> n;
	int* a = new int[n];
	int* d = new int[n];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	d[0] = a[0];
	for (int i = 1; i < n; i++) {
		d[i] = a[i] * (i + 1) - a[i - 1] * (i);
	}
	for (int i = 1; i < n; i++) {
		int c = 0;
		for (int j = 0; j <= i; j++) {
			c += d[j];
		}
		a[i] = c / (i + 1); 
	}
	for (int i = 0; i < n; i++)
		cout << d[i] << " ";
}
*/