/*ù �ٿ��� ��¥�� ���� �ڸ� ���ڰ�, �� ��° �ٿ��� 5���� �ڵ��� ��ȣ�� ���� �ڸ� ���ڰ�
�־����� �� 10������ �����ϴ� ������ ����� ����ϱ�
�ڵ��� ��ȣ�� ���� �ڸ� ���ڿ� ��¥�� ���� �ڸ� ���ڰ� ��ġ�ϸ� �ش� �ڵ�����
������ �����Ѵ�.*/
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
