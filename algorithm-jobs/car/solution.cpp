/*첫 줄에는 날짜의 일의 자리 숫자가, 두 번째 줄에는 5대의 자동차 번호의 일의 자리 숫자가
주어졌을 때 10부제를 위반하는 차량의 대수를 출력하기
자동차 번호의 일의 자리 숫자와 날짜의 일의 자리 숫자가 일치하면 해당 자동차의
운행을 금지한다.*/
#include <iostream>
using namespace std;

int main() {

  //Please Enter Your Code Here
  int n;
  int array[5];
  int result = 0;
  
  cin >> n;
  
  for (int i = 0; i < 5; i++) {
    cin >> array[i];
    
    if (array[i] == n) {
      result++;
    }
  }
  
  cout << result;

  return 0;
}
