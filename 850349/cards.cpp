#include <iostream>
using namespace std;
int main() {
    int N, M;
    cin >> N >> M;
    int c[N];
    for (int i = 0; i < N; i++) { 
        cin >> c[i];    
    } 
    int c_n[N];
    for (int k = 0; k < M; k++) {
        for (int j = 0; j < (N / 2); j++) {
            c_n[j * 2] = c[j];
            c_n[(j * 2) + 1] = c[j + (N / 2)];
        } 
        for (int l = 0; l < N; l++) {
            c[l] = c_n[l];
        }
    }
    for (int m = 0; m < N; m++) {
        cout << c[m] << " ";
    }
} 