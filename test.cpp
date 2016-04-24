#include<iostream>

using namespace std;

int sum(int num1, int num2){
  return num1 + num2;
}

int multByTwo(int n)
{
  return (n * 2);
}

int main(){
  int num, num2;
  cout << "Enter Number: ";
  cin >> num;
  num = multByTwo(num);
  num2 = sum(num, 5);
  cout << "Result: " << num << endl;
  cout << "Result2: " << num2 << endl;
  return 0;
}
