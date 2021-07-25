#include "windows.h"
#include "psapi.h"
#include <vector>
#include <iostream>

//using namespace std;

int main() {
    std::vector <int> v(1000000000);
    PROCESS_MEMORY_COUNTERS_EX pmc;
    GetProcessMemoryInfo(GetCurrentProcess(), (PROCESS_MEMORY_COUNTERS *) &pmc, sizeof(pmc));
    SIZE_T virtualMemUsedByMe = pmc.PrivateUsage;
    SIZE_T physMemUsedByMe = pmc.WorkingSetSize;
    std::cout << virtualMemUsedByMe << " " << physMemUsedByMe << "\n";
}