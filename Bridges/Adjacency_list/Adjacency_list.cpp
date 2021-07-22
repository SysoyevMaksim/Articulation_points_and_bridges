#include <iostream>
#include <vector>
#include <algorithm>
#include <set>

using namespace std;

struct Rib {
    int start, finish;
};


int M, N, time = 1;
vector<vector<int>> tops;
vector<int> Num;
vector<int> Low;
Rib input;
auto comp = [](Rib a, Rib b) {
    if (a.start == b.start) return a.finish < b.finish;
    return a.start < b.start;
};
set<Rib, decltype(comp)> output(comp);

void dfs(int top, int parent) {
    Num[top] = time;
    Low[top] = Num[top];
    time++;
    for (auto ending : tops[top]) {
        if (ending == parent) continue;
        if (Num[ending] == 0) {
            dfs(ending, top);
            Low[top] = min(Low[top], Low[ending]);
            if (Low[ending] > Num[top]) {
                output.insert(Rib{top + 1, ending + 1});
            }
        } else {
            Low[top] = min(Low[top], Num[ending]);
        }
    }
}

int main() {
    cin >> M >> N;
    tops.resize(M);
    Num.resize(M, 0);
    Low.resize(M, INT32_MAX);
    for (int i = 0; i < N; ++i) {
        cin >> input.start >> input.finish;
        input.start--;
        input.finish--;
        tops[input.start].push_back(input.finish);
        tops[input.finish].push_back(input.start);
    }
    for (int i = 0; i < M; ++i) {
        sort(tops[i].begin(), tops[i].end());
    }
    dfs(0, -1);
    cout << output.size() << endl;
    for (auto top : output) {
        cout << top.start << " " << top.finish << endl;
    }
    return 0;
}