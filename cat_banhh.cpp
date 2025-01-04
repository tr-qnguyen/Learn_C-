/*#include <iostream>

int main() {
    int m, n, k;

    std::cout << "Nhập số hàng (m): ";
    std::cin >> m;
    std::cout << "Nhập số cột (n): ";
    std::cin >> n;
    std::cout << "Nhập số lần nhập tọa độ (k): ";
    std::cin >> k;
    int** mang_2d = new int* [m];
    for (int i = 0; i < m; i++) {
        mang_2d[i] = new int[n];
    }
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            mang_2d[i][j] = 0;
        }
    }

    for (int i = 0; i < k * 4; i++) {
        int x, y;
        std::cin >> x >> y;

        if (x >= 0 && x < m && y >= 0 && y < n) {
            if (mang_2d[x][y] == 0) {
                mang_2d[x][y] = 1;
            }
            else {
                mang_2d[x][y] = 0;
            }
        }
        else {
            std::cout << "Tọa độ không hợp lệ. Vui lòng nhập lại.\n";
            i--;
        }
    }

    

    return 0;
}*/