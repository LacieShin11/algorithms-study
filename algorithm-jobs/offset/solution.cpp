/*5*5 2���� �迭�� �־��� �� � ���Ұ� �����¿쿡 �ִ� ���Һ��� ���� �� �ش� ��ġ��
*�� ǥ���ϴ� ���α׷� �ۼ��ϱ�.
��輱�� �ִ� ���� �����¿� �� �����ϴ� ���Ҹ��� ���Ѵ�.*/
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
