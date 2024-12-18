  #include <iostream>
  #include <cmath>

  double my_pow(double a, unsigned int b) {
    double result = 1.0;
    for (unsigned int i = 0; i < b; ++i) {
      result *= a;
    }
    return result;
  }

  int main() {
    std::cout << std::pow(3.0, 4) << std::endl;
    return 0;
  }