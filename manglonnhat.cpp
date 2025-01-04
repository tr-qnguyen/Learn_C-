#include <iostream>
#include <algorithm>

/*using namespace std;

const int MAX_N = 1000; 
bool kiemtra(int c[], int len) {
    for (int i = 1; i < len; i++) {
        if (c[i] < c[i - 1]) {
            return false;
        }
    }
    return true;
}

int main() {
    int n, m;
    int a[MAX_N], b[MAX_N], d[MAX_N * 2];

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    cin >> m;
    for (int i = 0; i < m; i++) {
        cin >> b[i];
    }

    int max_sum = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            int d_len = 0;
            for (int k = i; k < n; k++) {
                d[d_len++] = a[k];
                for (int l = j; l < m; l++) {
                    d[d_len++] = b[l];
                    if (kiemtra(d, d_len)) {
                        max_sum = max(max_sum, d_len);
                    }
                }
                d_len = k - i + 1;
            }
        }
    }

    cout << max_sum << endl;
    return 0;
}*/