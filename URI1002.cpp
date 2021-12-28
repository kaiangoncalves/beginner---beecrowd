#include <iostream>

using namespace std;

int main(){
    double raio, n = 3.14159, area;

    cin >> raio;

    area = n * raio * raio;

    std::cout.precision(4);
    std::cout << std::fixed << "A=" << area;


}