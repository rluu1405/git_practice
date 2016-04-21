#include<iostream>
int sum(int num1, int num2){
  if(num1 & num2) return 99999;
  std::cout << "num1 beofre: " << num1 << std::endl;
  num1 <<= 3;
  std::cout << "num1 after: " << (int)num1 << std::endl;
  return num1 | num2;
}

int mult(int a, int b)
{
	return (a*b);
}

int main(){
  std::cout << "Mult: " << mult(2,3) << std::endl;
  std::cout << "Sum: " << sum(0b01,0b00010) << std::endl;
  return 0;
}
