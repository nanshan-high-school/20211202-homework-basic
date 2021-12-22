#include <iostream>
using namespace std;
int main() {
    int n;
    int a;
    cin >> n;
    cin >> a;
    int z[n];
    for (int i = 0; i < n; i++) { 
        cin >> z[i];    
    } 
    int z1[n];
    for (int k = 0; k < a; k++) {
        for (int j = 0; j < (n / 2); j++) {
            z1[j * 2] = z[j];
            z1[(j * 2) + 1] = z[j + (n / 2)];
        } 
        for (int l = 0; l < n; l++) {
            z[l] = z1[l];
        }
    }
    for (int m = 0; m < n; m++) {
        cout << z[m] << " ";
    }
}