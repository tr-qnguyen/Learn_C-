/*#include <iomanip>
#include <iostream>
#include <stdio.h>
#include <limits>
#include <string>
#include <string.h>
using namespace std;
#define MAXN 100
struct Ngay {
    int d, m, y;
};
struct SinhVien {
    char MASV[10];
    char HoTen[MAXN];
    Ngay NamSinh;
    char GioiTinh;
    float DiemToan, DiemLy, DiemHoa, DTB;
};
void NhapNgay(Ngay& a) {
    cin >> a.d >> a.m >> a.y;
}

void Nhap(SinhVien& a) {
    cin.getline(a.MASV, MAXN);
    cin.getline(a.HoTen, MAXN);
    NhapNgay(a.NamSinh);
    cin >> a.GioiTinh;
    cin >> a.DiemToan >> a.DiemLy >> a.DiemHoa;
    a.DTB = (a.DiemToan + a.DiemLy + a.DiemHoa) / 3;
}

void Nhap(SinhVien*& a, int& n) {
    cin >> n;
    a = new SinhVien[MAXN];
    for (int i = 0; i < n; i++) {
        cin >> ws;
        Nhap(a[i]);
    }
}
void XuatNgay(Ngay a) {
    cout << a.d << "/" << a.m << "/" << a.y;
}

void Xuat(SinhVien a) {
    cout << a.MASV;    cout << "\t";
    cout << a.HoTen;    cout << "\t";
    XuatNgay(a.NamSinh);    cout << "\t";
    cout << a.GioiTinh;    cout << "\t";
    cout << a.DiemToan;    cout << "\t";
    cout << a.DiemLy;    cout << "\t";
    cout << a.DiemHoa;    cout << "\t";
    cout << setprecision(3) << a.DTB;
}
void Xuat(SinhVien* a, int n) {
    if (n == 0) {
        cout << "Empty List.";
    }
    for (int i = 0; i < n; i++) {
        Xuat(a[i]);
        cout << endl;
    }
}
int TimViTriChen(SinhVien* a, int n, SinhVien sv) {
    for (int i = 0; i < n; i++) {
        if (strcmp(sv.MASV, a[i].MASV) > 0) return i;
    }
    return n;
}

void ChenGiam(SinhVien* a, int& n, SinhVien sv) {
    int k = TimViTriChen(a, n, sv);
    for (int i = n; i > k; i--) {
        a[i] = a[i - 1];
    }
    a[k] = sv;
    n++;
}

int main() {
    SinhVien* A;
    int n;
    SinhVien sv;
    Nhap(sv);
    Nhap(A, n);
    ChenGiam(A, n, sv);
    Xuat(A, n);
    return 0;
}*/