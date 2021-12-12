#include <cstdio>
#include <iostream>
using  namespace std;

int main(){
  int j , N=1 , M , h=0;
  while (N%2 != 0 ){
    cout << "總卡牌數(偶數):";
    cin >> N ;
  }
  cout << "洗牌的次數";
  cin >> M ;
  int list [300]={0};
  int list2 [300]={0};
  for (int i = 1 ; i <= N ; i ++){
    cout <<"第"<<i<< "張卡牌編號:";
    cin >> list [i-1] ;
  }
  for (int i = 0 ; i <= M -1; i ++){
    h=0;
    j =N/2 ;
    for (int i = 0 ; i < N/2 ; i ++){
      list2 [h] = list [i];
      //cout << list2[h] ;
      list2 [h+1] = list [j];
      //cout << list2[h+1] ;
      j += 1;
      h +=2;
      }
      //cout << list [2];
    for (int i = 0 ; i <= N-1 ; i ++){
      list [i]=list2 [i];
      //cout << list [i];
    } 
  }
  for (int i = 0 ; i <= N-1 ; i ++){
    cout << list [i]<<" ";
  } 
}