#include <iostream>
using namespace std;
int main() {
  int shops[30]={0};
  int people;
  cin >> people;
  for(int i = 0; people != 0; i++){
    shops[i] = people;
    cin >> people;
  }
  int N;
  cin >> N;
  for(int i = 0; i < N; i++){
    int delta_people[30]={0};
    for(int j = 0; shops[j] != 0; j++){
      if(j == 0 ){
        if(shops[0] >  shops[1]){
          delta_people[1] += shops[0] * 0.1;;
        }

      }else if(shops[j + 1] != 0){
        if(shops[j] >  shops[j - 1]){
          delta_people[j - 1] += shops[j] * 0.05;
        }

        if(shops[j] >  shops[j + 1]){
          delta_people[j + 1] += shops[j] * 0.05;
        }

      }else{
        if(shops[j] >  shops[j - 1]){
          delta_people[j - 1] += shops[j] * 0.1;
        }
      }
    
      for(int j = 0; shops[j] != 0; j++){
        shops[j] += delta_people[j];
      }
    } 
  } 
  for(int i = 0; shops[i] != 0; i++){
    cout << shops[i] << " ";
  }
}

