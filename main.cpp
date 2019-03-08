#include <iostream>

int times(double num1, double num2){
    return num1 * num2;
}

void print_mult(){
  std::cout << times(10, 5) << std::endl;
}

int main(){
  print_mult();
  return 0;
}

