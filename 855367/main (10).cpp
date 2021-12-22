#include <iostream>
using namespace std;
int main() {
  int n;
  cin >> n;
  int a;
  cin >> a;
  int bef[30] = {0};
  int now[30] = {0};
  int i;
  int c;
  for( i = 0; i < n; i++){
    cin >> bef[i];
  }
  for(int c = 1; c <= a; c++){
      if((i - 1) == 0 && bef[i] < bef[i - 1]){
      now[i] += bef[i] + (bef[i-1] * 10 / 100);
    } else if (i == n-2 && bef[i] < bef[i + 1]) {
      now[i] += bef[i] + (bef[i + 1] * 10 / 100);
    } else if (bef[i] < bef[i - 1]){
      now[i] += bef[i]+(bef[i - 1] * 5 / 100);
    } else if (bef [i] < bef[i + 1]){
      now[i] += bef[i]+(bef[i + 1] * 5 / 100);
    } else {
      now[i] = bef[i];
    }
    bef[i] = now[i];
  }
  for(int c = 0; c < n; c++){
    cout << now[c];
  }
}
