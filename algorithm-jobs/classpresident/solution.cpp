/*ù° �ٿ��� ���� �л���, ��° �ٺ��ʹ� 1�� �л����� ���ʴ�� �� �ٸ��� 1�г���� 5�г�
���� �� �ݿ� ���߾������� ��Ÿ���� 5���� ������ �� ĭ �ϳ��� ���̿� �ΰ� �־����� ��
���� ���� ���̾��� �л��� ���� �л��� �ӽù��������Ͽ� �� �л��� ��ȣ�� ����Ѵ�.
�ӽù����� �� �� �ִ� �л��� ���� ���� ��� �� �� ���� ���� ��ȣ�� ����Ѵ�.*/
#include <iostream>
using namespace std;

int main() {

  //Please Enter Your Code Here
  int n;
  
  cin >> n;
  
  int array[n][5];
  int count[1005][1005]={0};
  int result[n] = {0, };
  int max = 0;
  int maxIndex = 0;
  
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < 5; j++) {
      cin >> array[i][j];
    }
  }
  
  for (int i = 0; i < 5; i++) {
    for (int j = 0; j < n; j++) {
      for (int k = 0; k < n; k++) {
        if (j != k) {
          if (array[j][i] == array[k][i]) {
            count[j][k]++;
            count[k][j]++;
          }          
        }
      }
    }
  }
  
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      if (count[i][j] > 0) {
        result[i]++;
      }
    }
  }
  
  for (int i = 0; i < n; i++) {
    if (max < result[i]) {
      max = result[i];
      maxIndex = i;
    }
  }
  
  cout << maxIndex + 1;
  
  return 0;
}
