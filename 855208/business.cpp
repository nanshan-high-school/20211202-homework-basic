#include <iostream>
#include <math.h>
using namespace std;

int main() {
  int* visitPeople = new int[30];
  int* finalVisitPeople = new int[30];
  int passedDays = 1;

  int input;
  int i = 0;
  while (input != 0) {
    cin >> input;
    visitPeople[i] = input;
    finalVisitPeople[i] = input;
    i++;
  }
  cin >> passedDays;

  for (int i = 0; i < passedDays; i++) {
    for (int j = 0; j < 30; j++) {
      if (j - 1 < 0) {
        // left side
        if (visitPeople[j] > visitPeople[j + 1]) {
          finalVisitPeople[j + 1] += floor(visitPeople[j] * 0.1);
        }
      } else if (visitPeople[j + 1] == 0) {
        // right side
        if(visitPeople[j] > visitPeople[j - 1]) {
          finalVisitPeople[j - 1] += floor(visitPeople[j] * 0.1);
        }
        break;
      } else {
        // middle
        if (visitPeople[j] > visitPeople[j + 1]) {
          finalVisitPeople[j + 1] += floor(visitPeople[j] * 0.05);
        }
        if (visitPeople[j] > visitPeople[j - 1]) {
          finalVisitPeople[j - 1] += floor(visitPeople[j] * 0.05);
        }
      }
    }
    visitPeople = finalVisitPeople;
  }

  for (int i = 0; i < 30; i++) {
    if (finalVisitPeople[i] != 0) {
      cout << finalVisitPeople[i] << " ";
    } else {
      break;
    }
  }
}
