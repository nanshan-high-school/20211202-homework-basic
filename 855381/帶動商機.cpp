#include <cstdio>
#include <iostream>
using  namespace std;

int main(){
  int j , N=1 , d , h;
  int list [30]={1};
  int list2 [30]={1};
  for (int i = 1 ;  list [i-2]!=0; i ++){
    cout <<"第"<<i<< "家:";
    cin >> list [i-1] ;
    h +=1;
  }
  cout << "經過天數:";
  cin >> d ;
  for (int i = 0 ; i <=h-1; i ++){
    list2 [i] = list [i];
  }
  for (int i = 1 ; i <=d; i ++){
    if(h>3){
      if(list [0] > list [1] ){
        list2 [1]+=list [0] /10;
      }else{
        list2 [0]+=list [1] /20;
      }
      if(list [h-2] > list [h-3]){
        list2 [h-3]+=list [h-2] /10;
      }
    }else{
      if(list [0] > list [1] ){
        list2 [1]+=list [0] /10;
      }else{
        list2 [0]+=list [1] /10;
      }
    }
    for (int i = 1 ; i <=h-3; i ++){
      if(list [i] > list [i+1]){
        list2 [i+1]+=list [i] /20;
      }else if(i==h-3){
        list2 [i]+=0;
      }else {
        list2 [i]+=list [i+1] /20;
      }
    }
    for (int i = 0 ; i <=h-1; i ++){
      list [i] = list2 [i];
    }
  }
  for (int i = 0 ; i <=h-2; i ++){  
    cout << list2 [i]<<" ";
    } 
   
}