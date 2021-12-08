#include <iostream>
using namespace std;
int main() {
  int N, M;
  cin >> N; 
  cin >> M;
  int cards[N];
  
  for(int i = 0; i < N; i++){
    cin >> cards[i];
  }
  
  for(int i = 0; i < M; i++){
    int cards_0[N /2], cards_1[N / 2];
    
    for(int j = 0; j < N / 2; j++){
      cards_0[j] = cards[j]; 
    }
    for(int j = N / 2; j < N; j++){
      cards_1[j - (N / 2)] = cards[j];
    }
    
    for(int j = 0; j < N; j++){
      if(j % 2 == 0){
        cards[j] = cards_0[j / 2];
      }else{
        cards[j] = cards_1[j / 2];
      }
    }
  }
  
  for(int i = 0; i < N; i++){
    cout << cards[i] << " ";
  }
} 