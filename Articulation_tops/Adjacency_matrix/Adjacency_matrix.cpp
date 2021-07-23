#include <iostream>
#include <vector>
#include <algorithm>
#include <set>

using namespace std;

struct Rib {
    int start, finish;
};

int N, M = 0, order = 1;
vector<vector<int>> matrix;
vector<int> Num;
vector<int> Low;
Rib input;
set<int> output;

void dfs(int top, int parent) {
    Num[top] = order;
    Low[top] = Num[top];
    order++;
    int children = 0;
    for (int ending = 0; ending < N; ending++) {
        if (matrix[top][ending] == 1) {
            if (Num[ending] == 0) {
                dfs(ending, top);
                Low[top] = min(Low[top], Low[ending]);
                if (Low[ending] == Num[top] && parent != -1) {
                    output.insert(top+1);
                }
                ++children;
            } else {
                Low[top] = min(Low[top], Num[ending]);
            }
        }
    }
    if (parent == -1 && children > 1) {
        output.insert(top+1);
    }
}

int main() {
    cin >> N;
    matrix.resize(N, vector<int>(N));
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            cin >> matrix[i][j];
            if (matrix[i][j] == 1) {
                M++;
            }
        }
    }
    M /= 2;
    Num.resize(M, 0);
    Low.resize(M, INT32_MAX);
    dfs(0, -1);
    cout << output.size() << endl;
    for (auto top : output) {
        cout << top << endl;
    }
    return 0;
}