#include <iostream>
using namespace std;
int main() {
  int n, file;
  int files[100] = {0};
  int num[100] = {0};
  cin >> n;
  for (int i = 0;i < n;i++) {
    cin >> file;
    files[i] = int((file % 1000)/10);
  }
  for (int i = 0;i < n;i++) {
    num[files[i]] += 1; 

  }
  for (int i = 0;i < 100;i++) {
    if (num[i] != 0) {
      cout << i << " " << num[i] << "\n";
    }
  }
}
 
