#include <iostream>
using namespace std;
int main() {
  int a;
  int b;
  
  cin >> a;
  cin >> b;
  
  int bef[300] = {0};
  int now[300] = {0};
  int c[300] = {0};
  int d[300] = {0};
  for(int k = 0; k < a; k++){
    cin >> bef[k];    
  }
  for(int j = 0; j < a / 2; j++){
    c[j] = bef[j];
  }
  for(int l = 0; l < a / 2; l++){
    d[l] = bef[l + 3];
  }
  for(int i = 1; i <= b; i++ ){
    for(int g = 0; g < a / 2; g++){
      now[g] = c[g]
    }
}

}
