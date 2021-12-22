#include <iostream>
#include <stdio.h>
using namespace std;
int main() {
  int n=0; 
  int a;
  int bef[30] = {0};
  int now[30] = {0};
  int i = 0;
  int c;
  int r = 0;
  cin >> bef[0];
  now[0]=bef[0];
  while (bef[n] != 0)
  {
    n++;
    cin >> bef[n];
    now[n] = bef[n];
  }
  cin >> a;
  
  for(int c = 1; c <= a; c++)
  {
      for(i = 0; i < n; i++)
      {
        cout << i << "\n";
       
          {
             if (bef [i] < bef[i + 1])
             {
                if(i+1 == n-1)
                 now[i] +=  (bef[i+1] * 10 / 100);
                else
                 now[i] += (bef[i + 1] * 5 / 100);
             } 
             else
             {
               if(i == 0)
                  now[i+1] +=  (bef[i] * 10 / 100);
                else
                  now[i+1] += bef[i] * 5 / 100;
             }
          }
         
          for(int c = 0; c < n; c++)
          {
              cout << now[c] << " ";
          }
           cout << "\n";
      }
      for(i = 0; i < n; i++)
      {
         bef[i] = now[i];
      }
  }
  for(int c = 0; c < n; c++){
    cout << now[c] << " ";
    }

}