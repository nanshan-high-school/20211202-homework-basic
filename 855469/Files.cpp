#include <iostream>
using namespace std;
int main() {
  int N;
  cin >> N;
  int files[100];
  for(int i = 0; i < 100; i++){
      files[i]= -1;
    }
  for(int i = 0; i < N; i++){
    int file;
    cin >> file;
    files[file % 1000 / 10] = file;
  }
  for(int i = 0; i < 100; i++){
    int a = 0;
    if(files[i] > -1){
      a += 1;
    }
    if(a != 0){
      cout << i << " " << a << "\n";
      }
  }
}