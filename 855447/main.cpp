#include <iostream>
using namespace std;
int main() {
    int q;
    int a;
    cin >> q;
    cin >> a;
    int z[q];
    for (int i = 0; i < q; i++) { 
        cin >> z[i];    
    } 
    int z1[q];
    for (int k = 0; k < a; k++) {
        for (int j = 0; j < (q / 2); j++) {
            z1[j * 2] = z[j];
            z1[(j * 2) + 1] = z[j + (q / 2)];
        } 
        for (int l = 0; l < q; l++) {
            z[l] = z1[l];
        }
    }
    for (int m = 0; m < q; m++) {
        cout << z[m] << " ";
    }
}