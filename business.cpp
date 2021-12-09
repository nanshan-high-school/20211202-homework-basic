#include <iostream>
#include <vector>
using namespace std;
int main(){
    int day;//天數
    vector<int> store;//可以直接加的array 
    
    int num;
    while (true) {
        cin >> num;//期待人數?
        if (num == 0) {
            break;
        }
        store.push_back(num);//vector加入
    } 

    cin >> day;
    vector<int> temp;//改商店
    for (int i = 0; i < day; i++) {
        for (int j = 0; j < store.size(); j++) {
            
        }
        

        //mid
        for (int j = 1; j < store.size()-1; j++) {
            if (store[j] < store[j-1]) {//
                temp[j] += store[j-1]*0.05;
            }
            if (store[j] < store[j+1]) {//+
                temp[j] += store[j+1]*0.05;
            }
        }
        if (store[0] < store[1]) {
            temp[0] += store[1]*0.1; 
        }
        if (store[store.size()-1] < store[store.size()-2]) {
            temp[store.size()-1] += store[store.size()-2]*0.1; // 
        }

        store = temp;
    }
    for (int i = 0; i < store.size(); i++) {
        cout << store[i] << " ";
    } 
}