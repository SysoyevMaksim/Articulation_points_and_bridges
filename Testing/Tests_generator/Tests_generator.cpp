#include <fstream>
#include <vector>
#include <random>

using namespace std;

int main() {
    ofstream fout;
    random_device rd;
    mt19937 mersenne(rd());
    vector<vector<int>> matrix;
    for (int i = 0; i < 25; ++i) {
        fout.open(R"(C:\Users\sysoy\Articulation_points_and_bridges\Tests\AM_test_few)" + to_string(i+1) + ".txt");
        unsigned int tops = 400 + mersenne() % 500;
        matrix.assign(tops, vector<int>(tops, 0));
        for (unsigned int x = 1; x < tops; ++x) {
            for (unsigned int y = 0; y < x; ++y) {
                if (mersenne() % 30 == 0) {
                    matrix[y][x] = 1;
                    matrix[x][y] = 1;
                }
            }
        }
        for (unsigned int x = 0; x < tops; ++x) {
            for (unsigned int y = 0; y < tops; ++y) {
                fout << matrix[x][y] << " ";
            }
            fout << endl;
        }
        fout.close();
    }
    for (int i = 0; i < 25; ++i) {
        fout.open(R"(C:\Users\sysoy\Articulation_points_and_bridges\Tests\AM_test_lot)" + to_string(i+1) + ".txt");
        unsigned int tops = 400 + mersenne() % 500;
        matrix.assign(tops, vector<int>(tops, 0));
        for (unsigned int x = 1; x < tops; ++x) {
            for (unsigned int y = 0; y < x; ++y) {
                if (mersenne() % 4 != 0) {
                    matrix[y][x] = 1;
                    matrix[x][y] = 1;
                }
            }
        }
        for (unsigned int x = 0; x < tops; ++x) {
            for (unsigned int y = 0; y < tops; ++y) {
                fout << matrix[x][y] << " ";
            }
            fout << endl;
        }
        fout.close();
    }
    for (int i = 0; i < 25; ++i) {
        fout.open(R"(C:\Users\sysoy\Articulation_points_and_bridges\Tests\AM_test_medium)" + to_string(i+1) + ".txt");
        unsigned int tops = 400 + mersenne() % 500;
        matrix.assign(tops, vector<int>(tops, 0));
        for (unsigned int x = 1; x < tops; ++x) {
            for (unsigned int y = 0; y < x; ++y) {
                if (mersenne() % 14 == 0) {
                    matrix[y][x] = 1;
                    matrix[x][y] = 1;
                }
            }
        }
        for (unsigned int x = 0; x < tops; ++x) {
            for (unsigned int y = 0; y < tops; ++y) {
                fout << matrix[x][y] << " ";
            }
            fout << endl;
        }
        fout.close();
    }
}