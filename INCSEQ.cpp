/*#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n), d(n, 1), pre(n, -1);

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int maxLength = 1, Index = 0;
    for (int i = 1; i < n; i++) {
        for (int j = 0; j < i; j++) {
            if (a[j] < a[i] && d[j] + 1 > d[i]) {
                d[i] = d[j] + 1;
                pre[i] = j;
            }
        }
        if (d[i] > maxLength) {
            maxLength = d[i];
            Index = i;
        }
    }

    vector<int> indice;
    for (int i = Index; i != -1; i = pre[i]) {
        indice.push_back(i + 1);
    }
    reverse(indice.begin(), indice.end());

    cout << maxLength << endl;
    for (int i : indice) {
        cout << "a[" << i << "] = " << a[i - 1] << endl;
    }

    return 0;
}
*/