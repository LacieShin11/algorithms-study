/*9*9 �����ǿ� ������ 81���� �ڿ����� �־��� �� �̵� �� �ִ��� ã�� �� �ִ���
�� �� �� ���� ��ġ�� ������ ���ϱ�*/
#include <iostream>
using namespace std;

int main() {

  //Please Enter Your Code Here
  int array[9][9];
  int max = 0;
  int maxRow = 0;
  int maxColumn = 0;
  
  for (int i = 0; i < 9; i++) {
    for (int j = 0; j < 9; j++) {
      cin >> array[i][j];
    }
  }
  
  for (int i = 0; i < 9; i++) {
    for (int j = 0; j < 9; j++) {
      if (array[i][j] > max) {
        max = array[i][j];
        maxRow = i + 1;
        maxColumn = j + 1;
      }
    }
  }
  
  cout << max << endl;
  cout << maxRow << " " << maxColumn << endl;

  return 0;
}