#include <iostream>
#include <iomanip>

using namespace std;

int main(){

    int number, hourswork;
    double valuehour, salary;

    cin >> number;
    cin >> hourswork;
    cin >> valuehour;

    salary = hourswork*valuehour;

    cout << "NUMBER = " << number << "\n";
    cout << fixed << setprecision(2);
    cout << "SALARY = U$ " << salary << "\n";

    return 0;
}