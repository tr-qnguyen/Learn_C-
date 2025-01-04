/*#include <iostream>
using namespace std;

void countFibonacci(int a, int b) {
    int fib1 = 0, fib2 = 1, fibn = 0;
    int count = 0;
    if (fib1 >= a && fib1 <= b) {
        count++;
    }

    if (fib2 >= a && fib2 <= b) {
        count++;
    }


    while (fibn <= b) {
        fibn = fib1 + fib2;
        if (fibn > b) {
            break;
        }
        if (fibn >= a && fibn <= b) {
            count++;
        }
        fib1 = fib2;
        fib2 = fibn;
    }

    cout << count;
}

int main() {
    int a, b;
    cin >> a >> b;
    countFibonacci(a, b);

    return 0;
}*/