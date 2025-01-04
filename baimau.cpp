/*#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N;
    cin >> N;
    vector<int> dp(N + 1, 0);
    dp[0] = 1;

    for (int x = 1; x <= N; ++x) {
        for (int j = N; j >= x; --j) { 
            dp[j] += dp[j - x];
        }
        for (int i = 0; i <= N; i++) {
            cout << dp[i] << " ";
        }
        cout << endl;
    }


    cout << dp[N] << endl;

    return 0;
}
*/