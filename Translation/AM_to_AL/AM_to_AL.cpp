#include <fstream>
#include <iostream>
#include <vector>

using namespace std;

int main() {
    for (int i = 0; i < 10; i++) {
        ifstream fin(R"(C:\Users\sysoy\Articulation points and bridges\Tests\AM_test_few)"
                     + to_string(i + 1) + ".txt");
        ofstream fout(R"(C:\Users\sysoy\Articulation points and bridges\Tests\RL_test_few)"
                      + to_string(i + 1) + ".txt");
        vector<vector<int>> tops;
        int N, el, counter = 0;
        fin >> N;
        tops.resize(N);
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) {
                fin >> el;
                if (j < i && el == 1) {
                    tops[i].push_back(j);
                    counter++;
                }
            }
        }
        fout << N << " " << counter << endl;
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < tops[i].size(); j++) {
                fout << i + 1 << " " << tops[i][j] + 1 << endl;
            }
        }
    }
    for (int i = 0; i < 10; i++) {
        ifstream fin(R"(C:\Users\sysoy\Articulation points and bridges\Tests\AM_test_lot)"
                     + to_string(i + 1) + ".txt");
        ofstream fout(R"(C:\Users\sysoy\Articulation points and bridges\Tests\RL_test_lot)"
                      + to_string(i + 1) + ".txt");
        vector<vector<int>> tops;
        int N, el, counter = 0;
        fin >> N;
        tops.resize(N);
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) {
                fin >> el;
                if (j < i && el == 1) {
                    tops[i].push_back(j);
                    counter++;
                }
            }
        }
        fout << N << " " << counter << endl;
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < tops[i].size(); j++) {
                fout << i + 1 << " " << tops[i][j] + 1 << endl;
            }
        }
    }
    for (int i = 0; i < 10; i++) {
        ifstream fin(R"(C:\Users\sysoy\Articulation points and bridges\Tests\AM_test_medium)"
                     + to_string(i + 1) + ".txt");
        ofstream fout(R"(C:\Users\sysoy\Articulation points and bridges\Tests\RL_test_medium)"
                      + to_string(i + 1) + ".txt");
        vector<vector<int>> tops;
        int N, el, counter = 0;
        fin >> N;
        tops.resize(N);
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) {
                fin >> el;
                if (j < i && el == 1) {
                    tops[i].push_back(j);
                    counter++;
                }
            }
        }
        fout << N << " " << counter << endl;
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < tops[i].size(); j++) {
                fout << i + 1 << " " << tops[i][j] + 1 << endl;
            }
        }
    }
    return 0;
}