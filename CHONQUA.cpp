/*#include<iostream>
using namespace std;

int main() {
	int c;
	cin >> c;
	string result = "";
	while (c > 0) {
		if (c % 2 == 1) {
			result = "A" + result;
		}
		else {
			result = "O" + result;
		}
		c /= 2;
	}
	while (result.length() < 5) {
		result = "O" + result;
	} 
	for (int i = 0; i < result.length(); i++) {
		cout << result[i] << " ";
	}
}*/