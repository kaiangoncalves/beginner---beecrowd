#include <iostream>
#include <iomanip>

using namespace std;

int main(){

    double media, A, B, C;

    cin >> A;
    cin >> B;
    cin >> C;

    media = ((A*2)+(B*3)+(C*5)) / 10;

    cout << fixed << setprecision(1);
    cout << "MEDIA = " << media << "\n";

    return 0;
}