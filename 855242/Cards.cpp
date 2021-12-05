#include <iostream>
using namespace std;

int main() {
  int N = 0, M = 0;
  cout << "N(請輸入偶數):";
  cin >> N;
  cout << "M:";
  cin >> M;

  int num;
  int arr0[N];
  for (int i = 0; i < N; i++) {
    cout << "X" << i + 1 << ":";
    cin >> num;
    arr0[i] = num;
  }

  int arr1[N];
  for (int i = 0; i < N; i++) {
    arr1[i] = 0;
  }

  for (int i = 0; i < M; i++) {
    int hal = N / 2;
    for (int j = 0; j < hal; j++) {
      arr1[2 * j] = arr0[j];
      arr1[(2 * j) + 1] = arr0[hal + j];
    }

    for (int j = 0; j < N; j++) {
      arr0[j] = arr1[j];
    }
  }

  for (int i = 0; i < N; i++) {
    cout << arr0[i] << " ";
  }
}
