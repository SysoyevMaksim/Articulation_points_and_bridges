#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<vector<int>> tops;
    int N, el, counter = 0;
    cin >> N;
    tops.resize(N);
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cin >> el;
            if (j < i && el == 1){
                tops[i].push_back(j);
                counter++;
            }
        }
    }
    cout << N << " " << counter << endl;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < tops[i].size(); j++) {
            cout << i+1 << " " << tops[i][j]+1 << endl;
        }
    }
    return 0;
}