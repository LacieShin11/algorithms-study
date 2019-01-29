/*N이 주어질 때 다음과 같은 프로그램 작성하기
EX) N = 3
1 2 4
3 5
6*/
#include <iostream>
using namespace std;

int main() {

  //Please Enter Your Code Here
  int n;
  
  cin >> n;
  
  int column = n;
  int plusv = 1;
  int plush = 2;
  int number = 1;
  int firstNumber = 1;
  int array[n][n];
  
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < column; j++) {
      if (i == 0 && j == 0) {
        array[0][0] = 1;
      } else if (i == 0) {
        number += plusv;
        array[i][j] = number;
        plusv++;
      } else {
        array[i][j] = number;
        plusv++;
        number += plusv;
      }
    }
    firstNumber += plush;
    plush++;
    number = firstNumber;
    plusv = i + 1;
    column--;
  }
  
  column = n;
  
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < column; j++) {
      cout << array[i][j] << " ";
    }
    column--;
    cout << endl;
  }

  return 0;
}
