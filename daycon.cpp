#include<iostream>
#include<algorithm>
using namespace std;

int main() {
	int n, m;
	cin >> n >> m;
	int** M = new int*[n];
	for (int i = 0; i < n; i++) {
		M[i] = new int[m];
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> M[i][j];
		}
	}
	int index = 0;
	int* a = new int[n * m];

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			a[index++] = M[i][j];
		}
	}
	sort(a, a + (n * m));
	index = 0;
	for (int i = 0; i < (n * m); i++) {
		index++;
		if (index <= m) {
			cout << a[i] << " ";
		}
		else {
			cout << endl;
			cout << a[i] << " ";
			index = 1;
		}
	}

}