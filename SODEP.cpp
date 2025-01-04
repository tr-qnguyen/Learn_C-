/*#include<iostream>
#include<string>
using namespace std;

bool check_beautynumber(int n) {
    int total = 0;
    int original_n = n;
    while (n > 0) {
        total += n % 10;
        n /= 10;
    }
    int length_num = to_string(original_n).length();
    return (total % length_num == 0);
}

int location_beautynumber(int n) {
    int count = 0, current = 1;
    while (count < n) { 
        if (check_beautynumber(current)) {
            count++; 
        }
        current++; 
    }
    return current - 1; 
}

int main() {
    int n;
    cin >> n;
    int beautifulNumber = location_beautynumber(n);
    cout << beautifulNumber;
}*/