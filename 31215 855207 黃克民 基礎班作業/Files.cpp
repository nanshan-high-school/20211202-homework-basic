#include <iostream>
#include <vector>
#include<map>
using namespace std;
int main() {
  int n = 0 ;
  cout << "請輸入檔案數:" ;
  cin >> n ;
  vector< int > files;
  vector< int > folders;
  map< int , int > Folders;
  for ( int i = 1 ; i <= n ; i++ ) {
    int input = 0 ;
    cout << "請輸入第" << i << "個檔案:" ;
    cin >> input ;
    files.push_back(input);
  }
  for ( int j = 1 ; j <= files.size() ; j++) {
    auto now = files[j-1] ;
    int theFile = now % 1000 / 10 ;
    auto iter = Folders.find(theFile) ;
    if ( iter != Folders.end() ) {
      Folders[theFile] = Folders[theFile] + 1 ;
    } else {
      Folders[theFile] = 1;
    }
  }
  for ( const auto & s : Folders ) {
    cout << s.first << " " <<  s.second << "\n" ;
  }
} 