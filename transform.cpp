// --------------------
// Lorentz Transformation
// 
// Automatically calculate the results of lorentz transformation
// Copyright © 2019 Howard C.
// --------------------

#include <iostream>
#include <math.h>
#include <cmath>

using namespace std;

int main() {
      cout << "Please input x, β (where v = k * c), a, b (where t = a * 10 ^ b).\n";
      double x, beta, a, b;
      while (cin >> x >> beta >> a >> b) {
            try {
                  if (beta >= 1 || beta <= -1)
                        throw runtime_error("divided_by_zero");
                  double xStroke = (x - beta * 3 * a * pow(10, 8 + b)) / sqrt(1 - pow(beta, 2));
                  double tStroke = (a * pow(10, b) - beta * x / (3 * pow(10, 8))) / sqrt(1 - pow(beta, 2));
                  cout << "x' = " << xStroke << ", t' = " << tStroke << ".\n";
                  break;
            }
            catch (runtime_error e) {
                  cout << "Wrong input, please try again:\n";
                  continue;
            }
      }
      return 0;
}