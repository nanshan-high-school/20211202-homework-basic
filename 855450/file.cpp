using namespace std;
int main() {
    int f[100] = {0};
    int a, num, file;
    cin >> a;
    for (int i = 0; i < a; i++){
        cin >> num;
        file = num / 10 % 100;
        f[file] += 1;
    }
    for (int j = 0; j < 100; j++) {
        if (f[j] != 0) {
            cout << j << " " << f[j] << "\n";
            }
    }
} 