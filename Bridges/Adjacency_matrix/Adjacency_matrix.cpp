#include <iostream>
#include <fstream>
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
auto comp = [](Rib a, Rib b) {
    if (a.start == b.start) return a.finish < b.finish;
    return a.start < b.start;
};
set<Rib, decltype(comp)> output(comp);

void dfs(int top, int parent) {
    Num[top] = order;
    Low[top] = Num[top];
    order++;
    for (int ending = 0; ending < N; ending++) {
        if (matrix[top][ending] == 1) {
            if (ending == parent) continue;
            if (Num[ending] == 0) {
                dfs(ending, top);
                Low[top] = min(Low[top], Low[ending]);
                if (Low[ending] > Num[top]) {
                    output.insert({top+1, ending+1});
                }
            } else {
                Low[top] = min(Low[top], Num[ending]);
            }
        }
    }
}

int main(int argc, char **argv) {
    ifstream fin (argv[1]);
    fin >> N;
    matrix.resize(N, vector<int>(N));
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            fin >> matrix[i][j];
            if (matrix[i][j] == 1) {
                M++;
            }
        }
    }
    M /= 2;
    Num.resize(M, 0);
    Low.resize(M, INT32_MAX);
    for (int i = 0; i < M; ++i) {
        if (Num[i] == 0) {
            dfs(i, -1);
        }
    }
//    cout << output.size() << endl;
    for (auto top : output) {
//        cout << top.start << " " << top.finish << endl;
    }
    return 0;
}