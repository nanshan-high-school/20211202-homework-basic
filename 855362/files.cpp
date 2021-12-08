#include <iostream>
using namespace std;
int main() {
  int a = 0 , e = 0;
  cin >> a ; 
  int b [a];
  int c [a];
  for (int i = 0 ; i < a ; i++){
    b [i] = 0;
    c [i] = 0;
  }
  for (int i = 0 ; i < a ; i++){
    int d ;
    cin >> d ;
    d = (d/10)%100;
    for (int i = 0 ; i < a ; i++){
      if (b[i] != d && b[i]==0){
        b[i] = d;
        c[i] = c[i] +1 ;
        break ;
      }
      if (b[i] == d){
        c[i] = c[i] +1 ;
        break ;
      }
    }
  }
  for (int i = 0 ; i < a ; i++){
    if (b[i] == 0){
      break ;
    }
    cout << b[i]<<"組有"<<c[i]<<"筆資料"<<"\n";
  }
} 