/*#include <iostream>
using namespace std;
bool chiahet(int i,int k) {
    for (int j = k; j >= 2; j--) {
        while (i > 0) {
            if (i % j == 0) {
                i = i / j;
            }
            else {
                break;
            }
        }
    }
    if (i == 1) {
        return true;
    }
    else
        return false;
    
}
int main() {
    int k, a, b,count = 0;
    cin >> k >> a >> b;
    for (int i = a; i <= b; i++) {
        if (chiahet(i,k)) {
            count += 1;
        }

    }
    cout << count;
}*/