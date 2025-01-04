/*#include<iostream>
using namespace std;
int main() {
	string s;
	cin >> s;
	int i = 0, j = s.length() - 1;
	string palidrome_front = "";
	string palidrome_back = "";
	int original_j = 0;
	while (i < j) {
		if (s[i] == s[j] && i != j) {
			palidrome_front += s[i];
			palidrome_back = s[i] + palidrome_back;
			i++;
			j--;
		}

		else if (s[i] != s[j]) {
			j--;
			original_j = j;
			if (i == j) {
				j = original_j;
				i++;
			}
		}
	}
	cout << palidrome_front + palidrome_back;
	return 0;
}*/