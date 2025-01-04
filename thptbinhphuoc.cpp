/*#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void tongcot(int N ,int M, vector<vector<int>>& h,int &currentmax,int & index) {
    for (int i = 0; i < N; i++) {
        int sum = 0;
        for (int j = 0; j < N; j++) {
            sum += h[i][j];
        }
        if (currentmax <= sum) {
            currentmax = sum;
            index = i;
        }
    }
}
void hammoi()
void tongdong(int N, int M, vector<vector<int>>& h, int& currentmax1, int& index1) {
    for (int i = 0; i < N; i++) {
        int sum = 0;
        for (int j = 0; j < N; j++) {
            sum += h[j][i];
        }
        if (currentmax1 <= sum) {
            currentmax1 = sum;
            index1 = i;
        }
    }
}
int lonnhat(int N,int M,vector<vector<int>>& h) {
    int tong = 0;
    for (int i = 0; i < 3; i++) {
        int maxcot = 0, indexcot, maxdong = 0, indexdong;
        //cout << "tongcot" << " " << i << endl;
        tongcot(N, M, h, maxcot, indexcot);
        //cout << "tongdong" << " " << i << endl;
        tongdong(N, M, h, maxdong, indexdong);
        if (maxdong >= maxcot) {
            tong+= maxdong;
            cout << "dong " << indexdong << endl;
            for (int j = 0; j < N; j++) {
                h[j][indexdong] = 0;
            }
        }
        else {
            tong += maxcot;
            cout << "cot " << indexcot << endl;
            for (int j = 0; j < M; j++) {
                h[indexcot][j] = 0;
            }
        }
    }
    return tong;
}
int main() {
    int N, M, Q;
    cin >> N >> M >> Q;
    vector<vector<int>> h;
    for (int i = 0; i < N; i++) {
        vector<int> row;
        for (int j = 0; j < N; j++) {
            row.push_back(0);
        }
        h.push_back(row);
    }
    cout << "---------" << endl;
    int R, C, pow;
    for (int t = 0; t < M; t++) {
        cin >> R >> C >> pow;
        h[R-1][C-1] = pow;

    }
    
    cout << "----" << endl;
    int tram, newpow;
    int* t = new int[M+1];
    for (int i = 0; i < Q; i++) {
        cin >> tram >> newpow;
        t[tram] = newpow;
    }
    cout << lonnhat(N, M, a);

    for (int i = 0; i < Q; i++) {
        a = h
    }
}*/