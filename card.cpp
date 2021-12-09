#include <iostream>
using namespace std;
int main(){
    int amount, time;
    cin >> amount >> time;//牌總數 , 交換次數
    int card[amount];//牌
    for(int i = 0; i < amount; i ++){
        cin >> card[i];
    } 

    int forward[amount/2], backward[amount/2];//前面與後面(牌)
    for (int i = 0; i < time; i++) {//交換次數
        int temp = 0;//暫存
        //分割
        for (int j = 0; j < amount; j++) {
            if(j < amount/2) {
                forward[j] = card[j];
            } else {
                backward[temp] = card[j];
                temp++;
            }
        }

        temp = 0;
        //合併
        for (int j = 0; j < amount/2; j++) {
            card[temp] = forward[j];
            temp++;
            card[temp] = backward[j];
            temp++;
        }
    }

    for (int i = 0; i < amount; i++) {
        cout << card[i] << " ";
    }
}