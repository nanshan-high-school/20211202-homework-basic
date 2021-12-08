#include <iostream>
using namespace std ;
int main() {
    int files [100] = {0} ;
    int a , num , file ;
    cin >> a ;
    for (int i = 0; i < a; i++){
        cin >> num ;
        file = num / 10 % 100 ;
        files [file] += 1 ;
    }
    for (int j = 0 ; j < 100 ; j++ ) {
        if (files [j] != 0) {
            cout << j << " " << files [j] << "\n" ;
            }
    }
} 