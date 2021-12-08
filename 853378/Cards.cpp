#include <iostream>
using namespace std;
int main() {
  int p1[300] = {0};
  int p2[300] = {0};
  int n, m;
  cin >> n;
  cin >> m;
  for (int i = 0;i < n;i++) {
    cin >> p1[i];
  }
    for (int j = 0;j < m;j++) {
      for (int i = 0;i < n;i++) {
        if (i%2 == 0) {
          p2[i] = p1[(i/2)];
        }else if (i%2 != 0) {
          p2[i] = p1[(n/2)+int((i/2))];

        }
      }
      for (int x = 0;x < n;x++) {
        p1[x] = p2[x];
      }
    }
    for (int i = 0;i < n;i++) {
      cout << p2[i] << " ";
    }
}