#include <iostream>
using namespace std;

int main() {
  int cardAmount;
  int shuffleTimes;
  cin >> cardAmount;
  cin >> shuffleTimes;
  int* cards = new int[cardAmount];
  
  for (int j = 0; j < cardAmount; j++) {
    cin >> cards[j];
  }

  for (int shuffle = 0; shuffle < shuffleTimes; shuffle++) {
    int index = 0;
    int* temp = new int[cardAmount];
    for (int i = 0; i < 2; i++) {
      for (int j = i; j < cardAmount; j += 2) {
        temp[j] = cards[index];
        index++;
      }
    }
    cards = temp;
  }

  for (int i = 0; i < cardAmount; i++) {
    cout << cards[i] << " ";
  }
}
