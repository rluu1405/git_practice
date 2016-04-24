#include<iostream>

using namespace std;

int multByTwo(int n)
{
	return (n * 2);
}

int main(){
  int num;
  cout << "Enter Number: ";
  cin >> num;
  num = multByTwo(num);
  cout << "Result: " << num << endl;
  return 0;
}
