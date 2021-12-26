#include <iostream>
#include <vector>
using namespace std;
int main() {
  int n , m , input , size ;
  vector< int > cards;
  vector< int > newCards;
  cout << "請輸入共有幾筆測試資料及洗牌次數(請用空格隔開):" ;
  cin >> n ;
  cin >> m ;
  cout << "請輸入卡牌:" ;
  for ( int a = 1 ; a <= n ; a++ ) {
    cin >> input ;
    cards.push_back(input);
  }
  if ( cards.size() % 2 == 1 ) {
    size = cards.size() / 2 + 1;
  } else {
    size = cards.size() / 2 ;
  }
  for ( int i = 0 ; i < m ; i++ ) {
    for ( int b = 0 ; b < size ; b++ ) {
      newCards.push_back( cards[ b ] );
      newCards.push_back( cards[ size + b ] );
    }
    cards = newCards ;
    newCards = {} ;
  }
  for ( int c = 0 ; c < cards.size() ; c++ ) {
    cout << cards[c] << " ";
  }
}