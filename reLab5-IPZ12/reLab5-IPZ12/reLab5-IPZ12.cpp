#include <iostream>
#include <cmath>
using namespace std;

int main() {
    //TASK 5.1 | Vaariant - 11
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

    int sum = 0;
    int d = 1; 
    int r = 0;
    for (int i = 0; i < 100; i++)
    {
        r = d % 2;
       if (r == 0) {
           sum += d;
       }
        d++;
    }
    cout << "Average arefmethic: " << sum / 50 << endl;

    //TASK 5.3 | Variant - 11

    double x1 = -13.5;
    double dx = 1.25;
    double y = 0;

    
    double x_prev = x1;

    
    for (int j = 6; j <= 25; j++) {
        double xj = 2 * x_prev + dx;      
        double xj2 = 2 * xj + dx;         
        y += pow(xj2 - xj, 2);           
        x_prev = xj;                      
    }

   cout << "Result sum: " << y << endl;
}
