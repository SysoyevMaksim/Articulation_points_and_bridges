#include <iostream>
#include <windows.h>                // for Windows APIs
#include <cmath>

using namespace std;

int main()
{
    LARGE_INTEGER frequency;        // ticks per second
    LARGE_INTEGER t1, t2;           // ticks
    double elapsedTime;

    // get ticks per second
    QueryPerformanceFrequency(&frequency);

    // start timer
    QueryPerformanceCounter(&t1);

    // do something
    for (unsigned long long i = 0; i < 6000000; ++i) {
        pow(UINT64_MAX, UINT64_MAX);
    }

    // stop timer
    QueryPerformanceCounter(&t2);

    // compute and print the elapsed time in millisec
    elapsedTime = (t2.QuadPart - t1.QuadPart) * 1000.0 / frequency.QuadPart;
    cout << elapsedTime << " ms.\n";

    return 0;
}