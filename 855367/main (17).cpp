#include <iostream>
using namespace std;
int main() {
  int a;
  int b;
  
  cin >> a;
  cin >> b;
  
  int bef[300] = {0};
  int now[300] = {0};
  for(int k = 0; k < a; k++){
    cin >> bef[k];    
  }
  
  for(int i = 1; i <= b; i++ ){
    int j = 0;
    for(int g = 0; g < a ; g+=2){
      now[g] =bef[j];
      now[g+1] = bef[j + a/2];
      j += 1;
    }
    for(int h = 0;h < a;h++ ){
      bef[h] = now[h];
    }
  }
  for(int e = 0;e < a; e++){
      cout << now[e];
  }
}

