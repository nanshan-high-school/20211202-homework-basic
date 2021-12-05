#include <iostream>

using namespace std;

int main() {
    string file;
    int amount, num;
    cin >> amount;
    int team[amount] = {-1};
    int time[amount] = {1};

    int in = 0;//位置
    for(int i = 0; i < amount; i++){
        cin >> file ;
        num = (int(file[3])-48)*10;
        num += (int(file[4])-48); //轉int(避免轉ASCII)

        bool repeat = false;
        
        for(int j = 0; j < amount; j++){
            if (num == team[j]){//有重複
                repeat = true;
                time[j]++;
                break;
            }
        }
        if (!repeat) {//沒有重複
            team[i] = num;
            time[i] = 1;            
        }
    }

    int temp;
    for (int i = 0; i < amount; i++) {
        for (int j = i+1; j < amount; j++) {
                //swap
                if (team[i] > team[j]) {
                    temp = team[i];
                    team[i] = team[j];
                    team[j] = temp;

                    temp = time[i];
                    time[i] = time[j];
                    time[j] = temp;           
                }
        }
    }
    for (int i = 0; i < amount; i++) {
        if (time[i] != 0) {
            cout << team[i] << " " << time[i] << endl;
        }
    }
} 