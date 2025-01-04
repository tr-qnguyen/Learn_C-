/*#include <iostream>
using namespace std;

int main() {
    long long a, b, k;
    cin >> a >> b >> k;

    long long* c = new long long[a];
    for (int i = 0; i < a; i++) {
        cin >> c[i];
    }

    long long max_sum = 0;
    int count = 0;

    for (int i = 0; i < a; i++) {
        long long  sum = 0;
        for (int j = i; j < a; j++) {
            sum += c[j];
            if (sum <= b && sum > max_sum) {
                max_sum = sum;
            }
            if (sum > b) break;
        }
    }

    for (int i = 0; i < a; i++) {
        long long sum = 0;
        for (int j = i; j < a; j++) {
            sum += c[j];
            if (sum == max_sum) {
                count++;
            }
            if (sum > max_sum) break;
        }
    }

    if (k == 1) {
        cout << max_sum << endl;
    }
    else if (k == 2) {
        cout << max_sum << endl;
        cout << count << endl;
    }

    delete[] c;
    return 0;
}*/