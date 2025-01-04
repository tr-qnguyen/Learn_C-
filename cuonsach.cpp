/*#include<iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int res = 0;
    int p = 1, k = 10,count = 1;

    while (p <= n) {
        int khoang = min(k - 1, n) - p + 1;
        res += count * khoang;
        p *= 10;
        k *= 10;
        count++;
    }

    cout << res;
    return 0;
}*/