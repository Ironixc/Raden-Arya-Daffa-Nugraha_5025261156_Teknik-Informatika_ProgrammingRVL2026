#include <iostream>
#include <math.h>

using namespace std;

int main (){
    double L1 = 10, L2 = 5, theta1 = 30, theta2 = 10, X = 0, Y = 0;
    theta1 = theta1 * 3.14 / 180;
    theta2 = theta2 * 3.14 / 180;
    X = (L1 * cos(theta1)) + (L2 * cos(theta1 + theta2));
    Y = (L1 * sin(theta1)) + (L2 * sin(theta1 + theta2));
    cout <<"X: "<< X  << "\nY: "<< Y;
}