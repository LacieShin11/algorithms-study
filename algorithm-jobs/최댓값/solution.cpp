/*9���� ���� �ٸ� �ڿ����� �־��� �� �̵� �� �ִ��� ã��
�� �ִ��� �� ��° ������ ���ϱ�*/
#include <iostream>
using namespace std;

int main() {

  //Please Enter Your Code Here
  int array[9];
  int max = 0;
  int maxIndex = -1;
  
  for (int i = 0; i < 9; i++) {
    cin >> array[i];
    
    if (array[i] > max) {
      max = array[i];
      maxIndex = i;
    }
  }
  
  cout << max << endl;
  cout << maxIndex + 1 << endl;
  
  

  return 0;
}
