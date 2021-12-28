#include <iostream>
#include <iomanip>

using namespace std;

int main(){

    double pi = 3.14159, raio, resultado;

    cin >> raio;

    resultado = (4.0/3) * pi * raio * raio * raio;


    cout << fixed << setprecision(3);
    cout << "VOLUME = " << resultado << "\n";

    return 0;
}