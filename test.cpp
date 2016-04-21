#include<iostream>
int mult(int a, int b)
{
	unsigned int result = ~(a^b);
	return (result);
}

int main(){
  std::cout << mult(2,3) << std::endl;
  return 0;
}
