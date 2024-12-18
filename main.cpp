  #include <iostream>
  #include <cmath> // для std::pow

  double my_pow(double a, int b) {
    if (b >= 0) {
        double result = 1.0;
        for (int i = 0; i < b; ++i) {
            result *= a;
        }
        return result;
    } else {
        return 1.0 / my_pow(a, -b); 
    }
  }

  int main() {
    std::cout << my_pow(3.0, 4) << std::endl;
    std::cout << my_pow(3.0, -4) << std::endl;
    std::cout << std::pow(3.0, 4) << std::endl;
    return 0;
  }