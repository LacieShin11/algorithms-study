/*1�������� 6������ ���� ���� 3���� �ֻ����� ������ ����� �޴� ����.
ù° �ٿ��� �����ϴ� ��� ��, �� ���� �ٺ��� N���� �ٿ� ������� �ֻ����� ���� 3���� ����
�� ĭ�� ���̿� �ΰ� ���� �־�����.
ù° �ٿ� ���� ���� ����� ���� ����� ����� ����Ѵ�.
��Ģ 1 : ���� ���� 3���� ������ 10000�� + (���� ��) * 1000��
��Ģ 2 : ���� ���� 2���� ������ 1000�� + (���� ��) * 100��
��Ģ 3 : ��� �ٸ� ���� ������ (�� �� ���� ū ��) * 100��*/
#include <iostream>
using namespace std;

int main() {

  //Please Enter Your Code Here
  int n;
  
  cin >> n;
  
  int array[n][3];
  int score[n];
  int max = 0;
  
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < 3; j++) {
      cin >> array[i][j];
    }
  }
  
  for (int i = 0; i < n; i++) {
    if (array[i][0] == array[i][1] && array[i][1] == array[i][2]) {
      score[i] = 10000 + array[i][0] * 1000;
    } else if (array[i][0] == array[i][1] || array[i][1] == array[i][2] || array[i][0] == array[i][2]) {
      if (array[i][0] == array[i][1] || array[i][0] == array[i][2]) {
        score[i] = 1000 + array[i][0] * 100;
      } else if (array[i][1] == array[i][2]) {
        score[i] = 1000 + array[i][1] * 100;
      }
    } else {
      if (array[i][0] >= array[i][1] && array[i][0] >= array[i][2]) {
        score[i] = array[i][0] * 100;
      } else if (array[i][1] >= array[i][0] && array[i][1] >= array[i][2]) {
        score[i] = array[i][1] * 100;
      } else if (array[i][2] >= array[i][0] && array[i][2] >= array[i][1]) {
        score[i] = array[i][2] * 100;
      }
    }
    
    if (score[i] >= max) {
      max = score[i];
    }
  }
  
  cout << max;

  return 0;
} 

