#include <fstream>
#include <windows.h>

using namespace std;

int main() {
    LARGE_INTEGER frequency;
    LARGE_INTEGER t1, t2;
    double elapsedTime;

    QueryPerformanceFrequency(&frequency);


    //Articulation_tops tests
    for (int i = 0; i < 25; i++) {
        ofstream fout("Tops_AM_few.txt", ios::app);
        string program = R"(C:\Users\sysoy\Articulation_points_and_bridges\cmake-build-debug\Tops_AM.exe )";
        string test = R"(C:\Users\sysoy\Articulation_points_and_bridges\Tests\AM_tops_test_few)"
                      + to_string(i + 1) + ".txt";
        QueryPerformanceCounter(&t1);
        system(("start " + program.append(test)).c_str());
        QueryPerformanceCounter(&t2);
        elapsedTime = (t2.QuadPart - t1.QuadPart) * 1000.0 / frequency.QuadPart;
        fout << elapsedTime << "\n";
        fout.close();
    }

    for (int i = 0; i < 25; i++) {
        ofstream fout("Tops_AL_few.txt", ios::app);
        string program = R"(C:\Users\sysoy\Articulation_points_and_bridges\cmake-build-debug\Tops_AL.exe )";
        string test = R"(C:\Users\sysoy\Articulation_points_and_bridges\Tests\RL_tops_test_few)"
                      + to_string(i + 1) + ".txt";
        QueryPerformanceCounter(&t1);
        system(("start " + program.append(test)).c_str());
        QueryPerformanceCounter(&t2);
        elapsedTime = (t2.QuadPart - t1.QuadPart) * 1000.0 / frequency.QuadPart;
        fout << elapsedTime << "\n";
        fout.close();
    }

    for (int i = 0; i < 25; i++) {
        ofstream fout("Tops_RL_few.txt", ios::app);
        string program = R"(C:\Users\sysoy\Articulation_points_and_bridges\cmake-build-debug\Tops_RL.exe )";
        string test = R"(C:\Users\sysoy\Articulation_points_and_bridges\Tests\RL_tops_test_few)"
                      + to_string(i + 1) + ".txt";
        QueryPerformanceCounter(&t1);
        system(("start " + program.append(test)).c_str());
        QueryPerformanceCounter(&t2);
        elapsedTime = (t2.QuadPart - t1.QuadPart) * 1000.0 / frequency.QuadPart;
        fout << elapsedTime << "\n";
        fout.close();
    }

    for (int i = 0; i < 25; i++) {
        ofstream fout("Tops_AM_medium.txt", ios::app);
        string program = R"(C:\Users\sysoy\Articulation_points_and_bridges\cmake-build-debug\Tops_AM.exe )";
        string test = R"(C:\Users\sysoy\Articulation_points_and_bridges\Tests\AM_tops_test_medium)"
                      + to_string(i + 1) + ".txt";
        QueryPerformanceCounter(&t1);
        system(("start " + program.append(test)).c_str());
        QueryPerformanceCounter(&t2);
        elapsedTime = (t2.QuadPart - t1.QuadPart) * 1000.0 / frequency.QuadPart;
        fout << elapsedTime << "\n";
        fout.close();
    }

    for (int i = 0; i < 25; i++) {
        ofstream fout("Tops_AL_medium.txt", ios::app);
        string program = R"(C:\Users\sysoy\Articulation_points_and_bridges\cmake-build-debug\Tops_AL.exe )";
        string test = R"(C:\Users\sysoy\Articulation_points_and_bridges\Tests\RL_tops_test_medium)"
                      + to_string(i + 1) + ".txt";
        QueryPerformanceCounter(&t1);
        system(("start " + program.append(test)).c_str());
        QueryPerformanceCounter(&t2);
        elapsedTime = (t2.QuadPart - t1.QuadPart) * 1000.0 / frequency.QuadPart;
        fout << elapsedTime << "\n";
        fout.close();
    }

    for (int i = 0; i < 25; i++) {
        ofstream fout("Tops_RL_medium.txt", ios::app);
        string program = R"(C:\Users\sysoy\Articulation_points_and_bridges\cmake-build-debug\Tops_RL.exe )";
        string test = R"(C:\Users\sysoy\Articulation_points_and_bridges\Tests\RL_tops_test_medium)"
                      + to_string(i + 1) + ".txt";
        QueryPerformanceCounter(&t1);
        system(("start " + program.append(test)).c_str());
        QueryPerformanceCounter(&t2);
        elapsedTime = (t2.QuadPart - t1.QuadPart) * 1000.0 / frequency.QuadPart;
        fout << elapsedTime << "\n";
        fout.close();
    }

    for (int i = 0; i < 25; i++) {
        ofstream fout("Tops_AM_lot.txt", ios::app);
        string program = R"(C:\Users\sysoy\Articulation_points_and_bridges\cmake-build-debug\Tops_AM.exe )";
        string test = R"(C:\Users\sysoy\Articulation_points_and_bridges\Tests\AM_tops_test_lot)"
                      + to_string(i + 1) + ".txt";
        QueryPerformanceCounter(&t1);
        system(("start " + program.append(test)).c_str());
        QueryPerformanceCounter(&t2);
        elapsedTime = (t2.QuadPart - t1.QuadPart) * 1000.0 / frequency.QuadPart;
        fout << elapsedTime << "\n";
        fout.close();
    }

    for (int i = 0; i < 25; i++) {
        ofstream fout("Tops_AL_lot.txt", ios::app);
        string program = R"(C:\Users\sysoy\Articulation_points_and_bridges\cmake-build-debug\Tops_AL.exe )";
        string test = R"(C:\Users\sysoy\Articulation_points_and_bridges\Tests\RL_tops_test_lot)"
                      + to_string(i + 1) + ".txt";
        QueryPerformanceCounter(&t1);
        system(("start " + program.append(test)).c_str());
        QueryPerformanceCounter(&t2);
        elapsedTime = (t2.QuadPart - t1.QuadPart) * 1000.0 / frequency.QuadPart;
        fout << elapsedTime << "\n";
        fout.close();
    }

    for (int i = 0; i < 25; i++) {
        ofstream fout("Tops_RL_lot.txt", ios::app);
        string program = R"(C:\Users\sysoy\Articulation_points_and_bridges\cmake-build-debug\Tops_RL.exe )";
        string test = R"(C:\Users\sysoy\Articulation_points_and_bridges\Tests\RL_tops_test_lot)"
                      + to_string(i + 1) + ".txt";
        QueryPerformanceCounter(&t1);
        system(("start " + program.append(test)).c_str());
        QueryPerformanceCounter(&t2);
        elapsedTime = (t2.QuadPart - t1.QuadPart) * 1000.0 / frequency.QuadPart;
        fout << elapsedTime << "\n";
        fout.close();
    }


    //Components tests
    for (int i = 0; i < 25; i++) {
        ofstream fout("Components_AM_few.txt", ios::app);
        string program = R"(C:\Users\sysoy\Articulation_points_and_bridges\cmake-build-debug\Components_AM.exe )";
        string test = R"(C:\Users\sysoy\Articulation_points_and_bridges\Tests\AM_components_test_few)"
                      + to_string(i + 1) + ".txt";
        QueryPerformanceCounter(&t1);
        system(("start " + program.append(test)).c_str());
        QueryPerformanceCounter(&t2);
        elapsedTime = (t2.QuadPart - t1.QuadPart) * 1000.0 / frequency.QuadPart;
        fout << elapsedTime << "\n";
        fout.close();
    }

    for (int i = 0; i < 25; i++) {
        ofstream fout("Components_AL_few.txt", ios::app);
        string program = R"(C:\Users\sysoy\Articulation_points_and_bridges\cmake-build-debug\Components_AL.exe )";
        string test = R"(C:\Users\sysoy\Articulation_points_and_bridges\Tests\RL_components_test_few)"
                      + to_string(i + 1) + ".txt";
        QueryPerformanceCounter(&t1);
        system(("start " + program.append(test)).c_str());
        QueryPerformanceCounter(&t2);
        elapsedTime = (t2.QuadPart - t1.QuadPart) * 1000.0 / frequency.QuadPart;
        fout << elapsedTime << "\n";
        fout.close();
    }

    for (int i = 0; i < 25; i++) {
        ofstream fout("Components_RL_few.txt", ios::app);
        string program = R"(C:\Users\sysoy\Articulation_points_and_bridges\cmake-build-debug\Components_RL.exe )";
        string test = R"(C:\Users\sysoy\Articulation_points_and_bridges\Tests\RL_components_test_few)"
                      + to_string(i + 1) + ".txt";
        QueryPerformanceCounter(&t1);
        system(("start " + program.append(test)).c_str());
        QueryPerformanceCounter(&t2);
        elapsedTime = (t2.QuadPart - t1.QuadPart) * 1000.0 / frequency.QuadPart;
        fout << elapsedTime << "\n";
        fout.close();
    }

    for (int i = 0; i < 25; i++) {
        ofstream fout("Components_AM_medium.txt", ios::app);
        string program = R"(C:\Users\sysoy\Articulation_points_and_bridges\cmake-build-debug\Components_AM.exe )";
        string test = R"(C:\Users\sysoy\Articulation_points_and_bridges\Tests\AM_components_test_medium)"
                      + to_string(i + 1) + ".txt";
        QueryPerformanceCounter(&t1);
        system(("start " + program.append(test)).c_str());
        QueryPerformanceCounter(&t2);
        elapsedTime = (t2.QuadPart - t1.QuadPart) * 1000.0 / frequency.QuadPart;
        fout << elapsedTime << "\n";
        fout.close();
    }

    for (int i = 0; i < 25; i++) {
        ofstream fout("Components_AL_medium.txt", ios::app);
        string program = R"(C:\Users\sysoy\Articulation_points_and_bridges\cmake-build-debug\Components_AL.exe )";
        string test = R"(C:\Users\sysoy\Articulation_points_and_bridges\Tests\RL_components_test_medium)"
                      + to_string(i + 1) + ".txt";
        QueryPerformanceCounter(&t1);
        system(("start " + program.append(test)).c_str());
        QueryPerformanceCounter(&t2);
        elapsedTime = (t2.QuadPart - t1.QuadPart) * 1000.0 / frequency.QuadPart;
        fout << elapsedTime << "\n";
        fout.close();
    }

    for (int i = 0; i < 25; i++) {
        ofstream fout("Components_RL_medium.txt", ios::app);
        string program = R"(C:\Users\sysoy\Articulation_points_and_bridges\cmake-build-debug\Components_RL.exe )";
        string test = R"(C:\Users\sysoy\Articulation_points_and_bridges\Tests\RL_components_test_medium)"
                      + to_string(i + 1) + ".txt";
        QueryPerformanceCounter(&t1);
        system(("start " + program.append(test)).c_str());
        QueryPerformanceCounter(&t2);
        elapsedTime = (t2.QuadPart - t1.QuadPart) * 1000.0 / frequency.QuadPart;
        fout << elapsedTime << "\n";
        fout.close();
    }

    for (int i = 0; i < 25; i++) {
        ofstream fout("Components_AM_lot.txt", ios::app);
        string program = R"(C:\Users\sysoy\Articulation_points_and_bridges\cmake-build-debug\Components_AM.exe )";
        string test = R"(C:\Users\sysoy\Articulation_points_and_bridges\Tests\AM_components_test_lot)"
                      + to_string(i + 1) + ".txt";
        QueryPerformanceCounter(&t1);
        system(("start " + program.append(test)).c_str());
        QueryPerformanceCounter(&t2);
        elapsedTime = (t2.QuadPart - t1.QuadPart) * 1000.0 / frequency.QuadPart;
        fout << elapsedTime << "\n";
        fout.close();
    }

    for (int i = 0; i < 25; i++) {
        ofstream fout("Components_AL_lot.txt", ios::app);
        string program = R"(C:\Users\sysoy\Articulation_points_and_bridges\cmake-build-debug\Components_AL.exe )";
        string test = R"(C:\Users\sysoy\Articulation_points_and_bridges\Tests\RL_components_test_lot)"
                      + to_string(i + 1) + ".txt";
        QueryPerformanceCounter(&t1);
        system(("start " + program.append(test)).c_str());
        QueryPerformanceCounter(&t2);
        elapsedTime = (t2.QuadPart - t1.QuadPart) * 1000.0 / frequency.QuadPart;
        fout << elapsedTime << "\n";
        fout.close();
    }

    for (int i = 0; i < 25; i++) {
        ofstream fout("Components_RL_lot.txt", ios::app);
        string program = R"(C:\Users\sysoy\Articulation_points_and_bridges\cmake-build-debug\Components_RL.exe )";
        string test = R"(C:\Users\sysoy\Articulation_points_and_bridges\Tests\RL_components_test_lot)"
                      + to_string(i + 1) + ".txt";
        QueryPerformanceCounter(&t1);
        system(("start " + program.append(test)).c_str());
        QueryPerformanceCounter(&t2);
        elapsedTime = (t2.QuadPart - t1.QuadPart) * 1000.0 / frequency.QuadPart;
        fout << elapsedTime << "\n";
        fout.close();
    }

    //Bridges tests
    for (int i = 0; i < 25; i++) {
        ofstream fout("Bridges_AM_few.txt", ios::app);
        string program = R"(C:\Users\sysoy\Articulation_points_and_bridges\cmake-build-debug\Bridges_AM.exe )";
        string test = R"(C:\Users\sysoy\Articulation_points_and_bridges\Tests\AM_bridges_test_few)"
                      + to_string(i + 1) + ".txt";
        QueryPerformanceCounter(&t1);
        system(("start " + program.append(test)).c_str());
        QueryPerformanceCounter(&t2);
        elapsedTime = (t2.QuadPart - t1.QuadPart) * 1000.0 / frequency.QuadPart;
        fout << elapsedTime << "\n";
        fout.close();
    }

    for (int i = 0; i < 25; i++) {
        ofstream fout("Bridges_AL_few.txt", ios::app);
        string program = R"(C:\Users\sysoy\Articulation_points_and_bridges\cmake-build-debug\Bridges_AL.exe )";
        string test = R"(C:\Users\sysoy\Articulation_points_and_bridges\Tests\RL_bridges_test_few)"
                      + to_string(i + 1) + ".txt";
        QueryPerformanceCounter(&t1);
        system(("start " + program.append(test)).c_str());
        QueryPerformanceCounter(&t2);
        elapsedTime = (t2.QuadPart - t1.QuadPart) * 1000.0 / frequency.QuadPart;
        fout << elapsedTime << "\n";
        fout.close();
    }

    for (int i = 0; i < 25; i++) {
        ofstream fout("Bridges_RL_few.txt", ios::app);
        string program = R"(C:\Users\sysoy\Articulation_points_and_bridges\cmake-build-debug\Bridges_RL.exe )";
        string test = R"(C:\Users\sysoy\Articulation_points_and_bridges\Tests\RL_bridges_test_few)"
                      + to_string(i + 1) + ".txt";
        QueryPerformanceCounter(&t1);
        system(("start " + program.append(test)).c_str());
        QueryPerformanceCounter(&t2);
        elapsedTime = (t2.QuadPart - t1.QuadPart) * 1000.0 / frequency.QuadPart;
        fout << elapsedTime << "\n";
        fout.close();
    }

    for (int i = 0; i < 25; i++) {
        ofstream fout("Bridges_AM_medium.txt", ios::app);
        string program = R"(C:\Users\sysoy\Articulation_points_and_bridges\cmake-build-debug\Bridges_AM.exe )";
        string test = R"(C:\Users\sysoy\Articulation_points_and_bridges\Tests\AM_bridges_test_medium)"
                      + to_string(i + 1) + ".txt";
        QueryPerformanceCounter(&t1);
        system(("start " + program.append(test)).c_str());
        QueryPerformanceCounter(&t2);
        elapsedTime = (t2.QuadPart - t1.QuadPart) * 1000.0 / frequency.QuadPart;
        fout << elapsedTime << "\n";
        fout.close();
    }

    for (int i = 0; i < 25; i++) {
        ofstream fout("Bridges_AL_medium.txt", ios::app);
        string program = R"(C:\Users\sysoy\Articulation_points_and_bridges\cmake-build-debug\Bridges_AL.exe )";
        string test = R"(C:\Users\sysoy\Articulation_points_and_bridges\Tests\RL_bridges_test_medium)"
                      + to_string(i + 1) + ".txt";
        QueryPerformanceCounter(&t1);
        system(("start " + program.append(test)).c_str());
        QueryPerformanceCounter(&t2);
        elapsedTime = (t2.QuadPart - t1.QuadPart) * 1000.0 / frequency.QuadPart;
        fout << elapsedTime << "\n";
        fout.close();
    }

    for (int i = 0; i < 25; i++) {
        ofstream fout("Bridges_RL_medium.txt", ios::app);
        string program = R"(C:\Users\sysoy\Articulation_points_and_bridges\cmake-build-debug\Bridges_RL.exe )";
        string test = R"(C:\Users\sysoy\Articulation_points_and_bridges\Tests\RL_bridges_test_medium)"
                      + to_string(i + 1) + ".txt";
        QueryPerformanceCounter(&t1);
        system(("start " + program.append(test)).c_str());
        QueryPerformanceCounter(&t2);
        elapsedTime = (t2.QuadPart - t1.QuadPart) * 1000.0 / frequency.QuadPart;
        fout << elapsedTime << "\n";
        fout.close();
    }

    for (int i = 0; i < 25; i++) {
        ofstream fout("Bridges_AM_lot.txt", ios::app);
        string program = R"(C:\Users\sysoy\Articulation_points_and_bridges\cmake-build-debug\Bridges_AM.exe )";
        string test = R"(C:\Users\sysoy\Articulation_points_and_bridges\Tests\AM_bridges_test_lot)"
                      + to_string(i + 1) + ".txt";
        QueryPerformanceCounter(&t1);
        system(("start " + program.append(test)).c_str());
        QueryPerformanceCounter(&t2);
        elapsedTime = (t2.QuadPart - t1.QuadPart) * 1000.0 / frequency.QuadPart;
        fout << elapsedTime << "\n";
        fout.close();
    }

    for (int i = 0; i < 25; i++) {
        ofstream fout("Bridges_AL_lot.txt", ios::app);
        string program = R"(C:\Users\sysoy\Articulation_points_and_bridges\cmake-build-debug\Bridges_AL.exe )";
        string test = R"(C:\Users\sysoy\Articulation_points_and_bridges\Tests\RL_bridges_test_lot)"
                      + to_string(i + 1) + ".txt";
        QueryPerformanceCounter(&t1);
        system(("start " + program.append(test)).c_str());
        QueryPerformanceCounter(&t2);
        elapsedTime = (t2.QuadPart - t1.QuadPart) * 1000.0 / frequency.QuadPart;
        fout << elapsedTime << "\n";
        fout.close();
    }

    for (int i = 0; i < 25; i++) {
        ofstream fout("Bridges_RL_lot.txt", ios::app);
        string program = R"(C:\Users\sysoy\Articulation_points_and_bridges\cmake-build-debug\Bridges_RL.exe )";
        string test = R"(C:\Users\sysoy\Articulation_points_and_bridges\Tests\RL_bridges_test_lot)"
                      + to_string(i + 1) + ".txt";
        QueryPerformanceCounter(&t1);
        system(("start " + program.append(test)).c_str());
        QueryPerformanceCounter(&t2);
        elapsedTime = (t2.QuadPart - t1.QuadPart) * 1000.0 / frequency.QuadPart;
        fout << elapsedTime << "\n";
        fout.close();
    }
}