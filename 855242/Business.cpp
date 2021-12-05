#include <iostream>
using namespace std;

int main() {
  int S = -1;
  int arr[30][5] = {0};
  int lim = 30;
  int las = 0;
  for (int i = 0; i < lim; i++) {
    cin >> S;
    if (S == 0) {
      break;
    }
    arr[i][0] = S;
    las ++;
  }

  int N = 0;
  cout << "N:";
  cin >> N;

  for (int i = 0; i < N; i++) {
    for (int j = 1; j < las; j = j + 2) {
      if (arr[j][0] > arr[j - 1][0]) {
        if (j + 1 == las) {
          arr[j - 1][1] = arr[j][0] * 0.1;
        } else {
          arr[j - 1][2] = arr[j][0] * 0.05;
        }
      }

      if (arr[j][0] < arr[j - 1][0]) {
        if (j - 1 == 0) {
          arr[j][4] = arr[j - 1][0] * 0.1;
        } else {
          arr[j][3] = arr[j - 1][0] * 0.05;
        }
      }

      if (arr[j][0] > arr[j + 1][0]) {
        arr[j + 1][3] = arr[j][0] * 0.05;
      }

      if (arr[j][0] < arr[j + 1][0]) {
        if (j + 2 == las) {
          arr[j][1] = arr[j + 1][0] * 0.1;
        } else {
          arr[j][2] = arr[j + 1][0] * 0.05;
        }
      }
    }

    for (int j = 0; j < las; j++) {
      for (int k = 1; k < 5; k++) {
        if (arr[j][k] != 0) {
          arr[j][0] += arr[j][k];
        }
      }
    }
    
    for (int j = 0; j < las; j++) {
      for (int k = 1; k < 5; k++) {
        arr[j][k] = 0;
      }
    }
  }

  for (int i = 0; i < las; i++) {
    cout << arr[i][0] << " ";
  }
}
