#include<iostream>

using namespace std;

int main(){
  int num;
  cout << "Enter Number: ";
  cin >> num;
  num = multByTwo(num);
  cout << "Result: " << num << endl;
  return 0;
}