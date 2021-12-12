#include <iostream>
using namespace std;

int main() {
  int ClassCount;
  cin >> ClassCount;
  int folder[100] = { 0 };

  for (int i = 0; i < ClassCount; i++) {
    int ClassNumber;
    cin >> ClassNumber;    
    ClassNumber = (ClassNumber % 1000) / 10;
    folder[ClassNumber]++;
  }

  for (int i = 0; i < 100; i++) {
    if (folder[i] != 0) {
      cout << i << " " << folder[i] << endl;
    }
  }
}
