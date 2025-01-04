/*#include <iostream>
#include <string>

using namespace std;

int main() {
    string s;
    cin >> s;

    string a = "";
    string b = "";
    int pos = -1;

    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '=') {
            pos = i; 
            break; 
        }
    }

    if (pos == -1) {
        cout << "Dấu '=' không được tìm thấy." << endl;
        return 1;
    }

    a = s.substr(0, pos); 
    b = s.substr(pos + 1); 

    bool found = false;

    for (int i = 0; i < a.length(); i++) {
        for (int j = i + 1; j < a.length(); j++) {
            string c = a.substr(0, i + 1); 
            string d = a.substr(i + 1, j - i); 


            if (stoi(c) + stoi(d) == stoi(b)) {
                cout << c << " + " << d << " = " << b << endl;
                found = true;
                break;
            }
        }
        if (found) {
            break;
        }
    }

    if (!found) {
        cout << "Không tìm thấy cặp số nào thỏa mãn." << endl;
    }

    return 0;
}*/