/*#include <iostream>

using namespace std;

bool isPrime(long long n) {
    if (n < 2) return false;
    for (long long i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

long long findNextPrime(long long n) {
    while (!isPrime(n)) {
        n++;
    }
    return n;
}

long long findSquareRoot(long long n) {
    long long left = 0, right = n;
    while (left <= right) {
        long long mid = left + (right - left) / 2;
        if (mid * mid == n) return mid;
        if (mid * mid < n) left = mid + 1;
        else right = mid - 1;
    }
    return left;
}

int main() {
    long long n;
    cin >> n;

    long long sqrtN = findSquareRoot(n);
    if (sqrtN * sqrtN < n) sqrtN++; 

    long long nextPrime = findNextPrime(sqrtN);
    long long result = nextPrime * nextPrime;

    cout << result << endl;

    return 0;
}*/