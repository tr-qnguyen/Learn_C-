/*#include<iostream>
#include<vector>
using namespace std;
int main() {
	int a;
	cin >> a;
	int** m = new int*[3];
	for (int i = 0; i < 3; i++) {
		m[i] = new int[a];
	}
	int min_ = 9;
	vector<int> n;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < a; j++) {
			cin >> m[i][j];
		}
	}
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < a; j++) {
			min_ = min(min_, m[i][j]);
		}
		n.push_back(min_);
	}
	for (int i = 0; i < n.size(); i++) {

	}
}*/