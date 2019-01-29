/*숫자를 입력 받아 이진수로 출력하기*/
#include <iostream>
using namespace std;

int main() {

  //Please Enter Your Code Here
  int n;
  int i = 0;
  int array[1000];
  
  cin >> n;
  
  while (n != 0) {
    array[i] = n % 2;
    n = n / 2;
    i++;
  }
  
  for (int j = i - 1; j >= 0; j--) {
   cout << array[j];
  }

  return 0;
}
