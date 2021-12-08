#include <iostream>
using namespace std;

int main() {
int a;
cin >> a;
int q[99]={0};
  for (int i = 0 ; i < a ; i++){
    int b;
    cin >> b;    
    b /= 10;
    b %= 100;
    q[b] +=1;
  }
  for (int j = 0; j < 100; j++) {
    if (q[j] != 0) {
      cout << j << " " << q[j] << "\n";
    }
  }
}  