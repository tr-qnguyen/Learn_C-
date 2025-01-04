/*#include<iostream>
using namespace std;
int main() {
	int n, p,a,b,r;
	cin >> n >> p;
	cin >> a >> b >> r;
	int c[3] = {a,b,a + b};
	for (int i = 0; i < 3; i++) {
		int count = 0;
		for (int j = i; j < 3; j++) {
			n = (n + c[i]) % p;
			count++;
		}
		if (n == r) {
			cout << count;
			break;
		}
	}
}*/