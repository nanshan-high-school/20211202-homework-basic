#include <iostream>
using namespace std;
int main() {
  int p1[30] = {0};
  int p2[30] = {0};
  int i = 1,a = 0,n = 0;
  while (i != 0) {
    cin >> i;
    if (i != 0) {
      p1[a] = i;
      a++;
    }
  }
  for (int i = 0;i <= a;i++) {
    p2[i] = p1[i];
  }
  cin >> n;
  for (int j = 0;j < n;j++) {
    for (int k = 0;k <= a-1;k++) {
      if (k == 0) {
        if (p1[0] > p1[1]) {
          p2[1] += int(p1[0]*0.1);
        }
        }else if(k == a-1) {
          if (p1[k] > p1[k-1]) {
            p2[k-1] += int(p1[k]*0.1);
          }
        }else {
          if (p1[k] > p1[k-1] && p1[k] > p1[k+1]) {
            p2[k-1] += int(p1[k]*0.05);
            p2[k+1] += int(p1[k]*0.05);
          }else if (p1[k] > p1[k-1]) {
            p2[k-1] += int(p1[k]*0.05);
          }else if (p1[k] > p1[k+1]) {
            p2[k+1]  += int(p1[k]*0.05);
          }
        }
      
      }
      for (int i = 0;i <= a-1;i++) {
      p1[i] = p2[i];
    }
    
    }
  
  for (int i = 0;i <= a-1;i++) {
    cout << p1[i] << " ";
}
}
