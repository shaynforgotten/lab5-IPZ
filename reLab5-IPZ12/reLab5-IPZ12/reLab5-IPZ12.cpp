#include <iostream>
#include <cmath>
using namespace std;

int main() {
    //TASK 5.1 | VAariant - 11
    double S = 0;
    for (int k = 6; k <= 18; ++k) {
        S += (pow(k, 4) + 2) / (2 * pow(k, 2) - 1);
    }

    double f = 1;
    for (int n = 3; n <= 9; ++n) {
        f *= (n / ((n + 2.0) * (n + 5.0)));
    }

    cout << "Value of S: " << S << std::endl;
    cout << "Value of f: " << f << std::endl;

    //TASK 5.2 | Variant - 11 

    //int sum = 0;
    //int d = 1; 
    //int r = 0;
    //for (int i = 0; i < 100; i++)
    //{
    //    r = d % 2;
    //    if (r == 0) {
    //        sum += d;
    //    }
    //    d++;
    //}
    //cout << "Average arefmethic: " << sum / 50 << endl;
}
