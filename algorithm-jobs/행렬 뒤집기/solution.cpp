/*������ Ƚ�� N�� �־����� 10*10 ���簢�� ����� 2���� �迭 ���¿��� ��� ���ҵ��� 0�� ��
����, ���� ���� N��° ���� ���������*/
#include <iostream>
using namespace std;

int main() {

  //Please Enter Your Code Here
  int n;
  int array[10][10];
  
  cin >> n;
  
  for (int i = 0; i < 10; i++) {
    for (int j = 0; j < 10; j++) {
      array[i][j] = 0;
    }
  }
  
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < 10; j++) {
      if (j == i) {
        if (array[i][i] == 0) {
          array[i][i] = 1;
        } else {
          array[i][i] = 0;
        }
      } else {
        if (array[i][j] == 0) {
          array[i][j] = 1;
        } else {
          array[i][j] = 0;
        }
        
        if (array[j][i] == 0) {
          array[j][i] = 1;
        } else {
          array[j][i] = 0;
        }
      }
    }
  }
  
  
  for (int i = 0; i < 10; i++) {
    for (int j = 0; j < 10; j++) {
      cout << array[i][j] << " ";
    }
    cout << endl;
  }

  return 0;
}
