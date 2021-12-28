#include <iostream>
#include <iomanip>

using namespace std;

int main(){

    double A, B, C, TRIANGULO, CIRCULO, TRAPEZIO, QUADRADO, RETANGULO;

    cin >> A >> B >> C;

    TRIANGULO = (A * C) / 2;
    CIRCULO = 3.14159 * C * C;
    TRAPEZIO = ((A + B) * C) / 2;
    QUADRADO = B*B;
    RETANGULO = A * B;


    cout << fixed << setprecision(3);
    cout << "TRIANGULO: " << TRIANGULO << "\n";
    cout << "CIRCULO: " << CIRCULO << "\n";
    cout << "TRAPEZIO: " << TRAPEZIO << "\n";
    cout << "QUADRADO: " << QUADRADO << "\n";
    cout << "RETANGULO: " << RETANGULO << "\n";

    return 0;
}