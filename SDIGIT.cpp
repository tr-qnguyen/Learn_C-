/*#include <iostream>
#include <cmath>
using namespace std;

bool isprime(int a) {
    if (a < 2) return false;
    for (int i = 2; i <= sqrt(a); i++) {
        if (a % i == 0) {
            return false;
        }
    }
    return true;
}

int tachso(int n) {
    int sum = 0;
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int checkprime(int x) {
    int count = 0;
    int c = pow(10, x);
    for (int i = 2; i < c; i++) {
        if (isprime(tachso(i)))
            count++;
    }
    return count;
}

int main() {
    int k;
    cin >> k; 
    int* a = new int[k];
    int* b = new int[k];

    for (int i = 0; i < k; i++) {
        cin >> a[i] >> b[i];
    }

    for (int i = 0; i < k; i++) {
        int sum = 0;
        if (a[i] >= b[i]) {
            sum = checkprime(a[i]);
        }
        else {
            sum = checkprime(b[i]);
        }
        cout << sum << endl; 
    }

    delete[] a; 
    delete[] b; 
}*/