#include<iostream>

int sum(int num1, int num2){
  return num1 + num2;
}

int main(){
  std::cout << "Mult: " << mult(2,3) << std::endl;
  std::cout << "Sum: " << sum(3,4) << std::endl;
  return 0;
}