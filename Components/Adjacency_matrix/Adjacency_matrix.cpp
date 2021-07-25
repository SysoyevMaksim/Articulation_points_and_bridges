#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
#include <stack>

using namespace std;

struct Rib {
    int start, finish;
};

int N, M = 0, order = 1;
vector<vector<int>> matrix;
vector<int> Num;
vector<int> Low;
stack<Rib> output;
Rib input;

void print_stack(int top) {
//    cout << "------------" << endl;
    while (!output.empty()) {
        Rib data = output.top();
//        cout << data.start + 1 << " : " << data.finish + 1 << endl;
        output.pop();
        if (data.start == top) return;
    }
}

void dfs(int top, int parent) {
    Num[top] = order;
    Low[top] = Num[top];
    order++;
    for (int ending = 0; ending < N; ending++) {
        if (matrix[top][ending] == 1) {
            if (Num[ending] == 0) {
                output.push({top, ending});
                dfs(ending, top);
                Low[top] = min(Low[top], Low[ending]);
                if (Low[ending] == Num[top]) {
                    print_stack(top);
                }
            } else {
                if (Num[top] > Num[ending] && ending != parent) {
                    output.push({top, ending});

                }
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
    return 0;
}