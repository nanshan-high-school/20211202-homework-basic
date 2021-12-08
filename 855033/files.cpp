#include <iostream>
using namespace std;

int main() {
    int files[100] {0};
    int n;
    int file;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> file;
        file = (file / 10) % 100;
        files[file] ++;
    }
    for (int j = 0; j < 100; j++) {
        if (files[j] > 0) {
            cout << j << " " << files[j] << "\n";   
        }
    }
} 