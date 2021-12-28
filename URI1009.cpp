#include <iostream>
#include <iomanip>

using namespace std;

int main(){

    string name;
    double salaryfixed, salary, sell;

    cin >> name;
    cin >> salaryfixed;
    cin >> sell;

    salary = (sell*15/100) + salaryfixed;

    cout << fixed << setprecision(2);
    cout << "TOTAL = R$ " << salary << "\n";


    return 0;
}