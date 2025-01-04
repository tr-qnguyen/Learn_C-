/*#include<iostream>
#include<set>
#include<vector>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    vector<int> A(a), B(b);
    for (int i = 0; i < a; i++) {
        cin >> A[i];
    }
    for (int i = 0; i < b; i++) {
        cin >> B[i];
    }

    set<int> newA(A.begin(), A.end());
    int count = 0;

    for (int num : B) {
        if (newA.count(num)) {
            count++;
        }
    }

    cout << count; 
}*/