#include <cstdio>
#include <iostream>
using  namespace std;



int main(){
  int j , n , h;
  cout << "檔案數量:";
  cin >> n ;
  
  int list [100]={0};
  for (int i = 1; i <= n ; i ++){
    do {
    cout << "資料號碼是";
    cin >> j ;

    if(j < 000000 or j > 999999){
      cout << "不在範圍內請重新輸入" << "\n";
    }
    
    }while(j < 000000 or j > 999999);
    //cout << i << "\n";
    j = j%1000;
    list [j/10] += 1;
    //cout << list [j/10] << "\n";
  }
  for (int i = 0 ; i <= 99 ; i ++){
    if( list [i] > 0){
      printf("NO." "%02d",i);
      cout  <<" 有"<< list [i] << "份\n";
    } 
  }
  
 
}