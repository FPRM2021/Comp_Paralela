#include <iostream>
#include <vector>
#include <random>
#include <chrono>
#include <stdlib.h>


using namespace std;
#define MAX 50000

int main()
{

    //había problemas con el stack, por lo que es mejor hacerlo dinámico
    vector<vector<double>> A(MAX, vector<double>(MAX, 0));
    vector<double> x(MAX, 0), y(MAX, 0);

    auto t_start = std::chrono::high_resolution_clock::now();

    for (int i = 0; i < MAX; ++i) {
        for (int j = 0; j < MAX; ++j) {
            y[i] += A[i][j] * x[j];
        }
    }

    auto t_end = std::chrono::high_resolution_clock::now();
    double elapsed_time_ms = std::chrono::duration<double, std::milli>(t_end - t_start).count();
    std::cout << "Primer Loop (ms): " << elapsed_time_ms << "\n";
    
    t_start = std::chrono::high_resolution_clock::now();

    for (int j = 0; j < MAX; ++j) {
        for (int i = 0; i < MAX; ++i) {
            y[i] += A[i][j] * x[j];
        }
    }
    t_end = std::chrono::high_resolution_clock::now();
    elapsed_time_ms = std::chrono::duration<double, std::milli>(t_end - t_start).count();
    std::cout << "Segundo Loop (ms): " << elapsed_time_ms << "\n";

    return 0;
}