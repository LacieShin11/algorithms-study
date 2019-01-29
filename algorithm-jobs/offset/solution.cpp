/*5*5 2차원 배열이 주어질 때 어떤 원소가 상하좌우에 있는 원소보다 작을 때 해당 위치에
*을 표시하는 프로그램 작성하기.
경계선에 있는 수는 상하좌우 중 존재하는 원소만을 비교한다.*/
#include <iostream>
using namespace std;

int main() {

  //Please Enter Your Code Here
  int array[7][7];
  
  for (int i = 0; i < 7; i++) {
    array[0][i] = 10;
    array[6][i] = 10;
  }
  
  for (int i = 1; i < 6; i++) {
    array[i][0] = 10;
    array[i][6] = 10;
  }
  
  for (int i = 1; i < 6; i++) {
    for (int j = 1; j < 6; j++) {
      cin >> array[i][j];
    }
  }
  
  for (int i = 1; i < 6; i++) {
    for (int j = 1; j < 6; j++) {
      if (array[i - 1][j] > array[i][j] && array[i][j - 1] > array[i][j] && array[i + 1][j] > array[i][j] && array[i][j + 1] > array[i][j]) {
        cout << "*" << " ";
      } else {
        cout << array[i][j] << " ";
      }
    }
    cout << endl;
  }

  return 0;
}
