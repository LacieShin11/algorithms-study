/*9���� ���� �ٸ� �ڿ����� �־��� �� �̵� �� �� ��° �ּڰ��� ã��
�� �� ��° �ּڰ��� �� ��° ������ ���ϱ�*/
#include <iostream>
using namespace std;

int main() {

  //Please Enter Your Code Here
  int array[9];
  int min = 10000000;
  int minIndex = -1;
  int secondMin = 10000000;
  int secondMinIndex = -1;
  
  for (int i = 0; i < 9; i++) {
    cin >> array[i];
    
    if (array[i] < min) {
      min = array[i];
      minIndex = i;
    }
  }
  
  for (int i = 0; i < 9; i++) {
    if (i == minIndex) {
    } else {
      if (array[i] < secondMin) {
        secondMin = array[i];
        secondMinIndex = i;
      }
    }
  }
  
  cout << secondMin << endl;
  cout << secondMinIndex + 1 << endl;

  return 0;
}
