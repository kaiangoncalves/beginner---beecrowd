#include <iostream>
#include <iomanip>

using namespace std;

int main(){

    double media, A, B;

    cin >> A;
    cin >> B;

    media = ((A*3.5) + (B*7.5)) / 11;

    cout << fixed << setprecision(5);
    cout << "MEDIA = " << media << "\n";

    return 0;
}