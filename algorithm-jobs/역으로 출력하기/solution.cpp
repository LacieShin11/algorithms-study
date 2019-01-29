/*정수를 입력받아 입력 받은 수를 거꾸로 출력하기*/
#include <iostream>
using namespace std;

int main() {

  //Please Enter Your Code Here
  int n;
  
  cin >> n;
  
  int array[n];
  
  for (int i = 0; i < n; i++) {
    cin >> array[i];
  }
  
  for (int i = n - 1; i >= 0; i--) {
    cout << array[i] << " ";
  }

  return 0;
}
