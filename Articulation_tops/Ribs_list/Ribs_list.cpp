#include <iostream>
#include <vector>
#include <algorithm>
#include <set>

using namespace std;

struct Rib {
    int start, finish;
};

int M, N, order = 1;
vector<Rib> ribs;
vector<int> Num;
vector<int> Low;
Rib input;
set<int> output;

bool by_start_by_finish(Rib a, Rib b) {
    if (a.start == b.start) {
        return a.finish < b.finish;
    }
    return a.start < b.start;
}

bool by_start(Rib a, Rib b) {
    return a.start < b.start;
}

void dfs(int top, int parent) {
    Num[top] = order;
    Low[top] = Num[top];
    order++;
    int children = 0;
    auto begin = lower_bound(ribs.begin(), ribs.end(), Rib{top, 0}, by_start),
            end = upper_bound(ribs.begin(), ribs.end(), Rib{top, 0}, by_start);
    for (auto way = begin; way != end; way++) {
        int ending = (*way).finish;
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
    if (parent == -1 && children > 1) {
        output.insert(top+1);
    }
}

int main() {
    cin >> M >> N;
    ribs.resize(2 * N);
    Num.resize(M, 0);
    Low.resize(M, INT32_MAX);
    for (int i = 0; i < 2 * N; i += 2) {
        cin >> input.start >> input.finish;
        input.start--;
        input.finish--;
        ribs[i] = {input.start, input.finish};
        ribs[i + 1] = {input.finish, input.start};
    }
    sort(ribs.begin(), ribs.end(), by_start_by_finish);
    dfs(0, -1);
    cout << output.size() << endl;
    for (auto top : output) {
        cout << top << endl;
    }
    return 0;
}