/*N과 시작 숫자 S가 주어지면 숫자 피라미드를 만들기.
숫자는 왼쪽 위에서부터 지그재그 형태로 내려간다.*/
#include <iostream>
using namespace std;

int main() {

  //Please Enter Your Code Here
  int n, s;
  int column = 1;
  
  cin >> n >> s;
  
  int array[n][1000];
  
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < column; j++) {
      array[i][j] = s;
      s++;
      if (s > 9) {
        s = 1;
      }
    }
    column += 2;
  }
  
  column = 1;
  
  for (int i = 0; i < n; i++) {
    for (int j = n - i - 1; j > 0; j--) {
      cout << " ";
    }
  
    if (i % 2 != 0) {
      for (int j = 0; j < column; j++) {
        cout << array[i][j];
      }
    } else {
      for (int j = column - 1; j >= 0; j--) {
        cout << array[i][j];
      }
    }
    
    column += 2;
    
    cout << endl;
  }

  return 0;
}
