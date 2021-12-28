#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    
    int code1, pieces1, code2, pieces2;
    double valueunit1, valueunit2, result;

    cin >> code1 >> pieces1 >> valueunit1;
    cin >> code2 >> pieces2 >> valueunit2;

    result = ((pieces1*valueunit1) + (pieces2*valueunit2));

    cout << fixed << setprecision(2);
    cout << "VALOR A PAGAR: R$ " << result << "\n";


    return 0;
}