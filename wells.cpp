/*#include <iostream>

using namespace std;

int main() {
    int M, N, K;
    cin >> M >> N;
    cin >> K;

    int farm[100][100] = { 0 };

    for (int i = 0; i < K; i++) {
        int well_x, well_y;
        cin >> well_x >> well_y;

        well_x--; 
        well_y--; 

        for (int x = max(0, well_x - 2); x <= min(M - 1, well_x + 2); x++) {
            for (int y = max(0, well_y - 2); y <= min(N - 1, well_y + 2); y++) {
                farm[x][y] = 1; 
            }
        }
    }

    int count = 0;
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N; j++) {
            if (farm[i][j] == 0) {
                count++;
            }
        }
    }

    cout << count;

    return 0;
}*/
