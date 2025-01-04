/*#include<iostream>
#include <algorithm>
using namespace std;

int main() {
    int m, n;
    cin >> m >> n;
    int t;
    cin >> t;

    int** c = new int* [m];
    for (int i = 0; i < m; i++) {
        c[i] = new int[n];
    }

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> c[i][j];
        }
    }

    int totalSize = m * n;
    int* temp = new int[totalSize];
    int index = 0;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            temp[index++] = c[i][j];
        }
    }

    sort(temp, temp + totalSize);

    int count = 0;
    index = 0;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            c[i][j] = temp[index++];
        }
    }
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            while (t >= c[i][j]) {
                t -= c[i][j];
                count += c[i][j];
            }
        }
    }
    cout << count;
    return 0;
}*/
