#include <iostream>
using namespace std;

int main() {
  int N = 0;
  cout << "N:";
  cin >> N;

  int arr[100][N];
  for (int i = 0; i < 100; i++) {
    for (int j = 0; j < 1; j++) {
      arr[i][j] = -1;
    }
    for (int j = 1; j < N; j++) {
      arr[i][j] = 0;
    }
  }

  for (int i = 0; i < N; i++) {
    int S = 0;
    cout << "S" << i + 1 << "(6位數):";
    cin >> S;
    int num;
    num = (S % 1000) / 10;

    if (arr[num][0] == -1) {
      arr[num][0] = 1;
    } else {
      for (int j = 0; j < N; j++) {
        if (arr[num][j] == j + 1) {
          arr[num][j] = 0;
          arr[num][j + 1] = j + 2;
          break;
        }
      }
    }
  }

  for (int i = 0; i < 100; i++) {
    for (int j = 0; j < N;j++) {
      if (arr[i][j] > 0) {
        cout << i << " " << arr[i][j] << "\n";
      }
    }
  }
} 
