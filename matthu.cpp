/*#include <iostream>
using namespace std;

int main() {
    int m, a, b, c, d;
    cin >> m >> a >> b >> c >> d;
    int x = 0, y = 0;
    int steps = 0;
    while (x < m && y < m) {
        if (a + b < m || c + d < m) {
            break;
        }
        if (a + b == m) {
            x += a + b;
            steps += 2;
        }
        if (a + b > m) {
            if (a == m) {
                steps++;
                x += a;
            }
            else if (b == m) {
                steps++;
                x += b;
            }
            else
                break;
        }
        if (c + d == m) {
            y += c + d;
            steps += 2;
        }
        if (c + d > m) {
            if (c == m) {
                steps++;
                y += c;
            }
            else if (d == m) {
                steps++;
                y += d;
            }
            else
                break;
        }

        if (x + y == m * 2) {
            cout << steps;
        }
        else {
            cout << x << y << endl;
        }
    }
}*/