/*ù° �ٺ��� �ټ�° �ٱ��� �����ǿ� ������ ���� ���� �� �����ٺ��� ���ʴ�� �� �ٿ�
�ټ� ���� �� ĭ�� ���̿� �ΰ� �־�����. ����° �ٺ��� ��° �ٱ��� ��ȸ�ڰ� �θ��� ����
���ʴ�� �־�����.(1���� 25 ������ ���� �� ���� ���ȴ�.) �� �� ��ȸ�ڰ�
�� ��° ���� �θ� �� ���� ��ġ�� �Ǵ����� ����Ѵ�.*/
#include <iostream>
using namespace std;

int main() {

  int array[5][5];
  int bingo[25];
  int count = 0;
  int sum = 0;
  bool leftCrossFlag = false;
  bool rightCrossFlag = false;
  int widthFlag[5] = {0, };
  int heightFlag[5] = {0, };
  
  for (int i = 0; i < 5; i++) {
    for (int j = 0; j < 5; j++) {
      cin >> array[i][j];
    }
  }
  
  for (int i = 0; i < 25; i++) {
    cin >> bingo[i];
  }
  
  for (int i = 0; i < 25; i++) {
    for (int j = 0; j < 5; j++) {
      for (int k = 0; k < 5; k++) {
        if (bingo[i] == array[j][k]) {
          array[j][k] = -1;
          break;
        }
      }
    }
    
    for (int j = 0; j < 5; j++) {
      for (int k = 0; k < 5; k++) {
        sum += array[j][k];
      }
      if (sum == -5 && widthFlag[j] == 0) {
        count++;
        widthFlag[j] = 1;
      }
      sum = 0;
      if (count == 3) {
        cout << i + 1;
        break;
      }
    }
    
    if (count == 3) {
      break;
    }
    
    for (int j = 0; j < 5; j++) {
      for (int k = 0; k < 5; k++) {
        sum += array[k][j];
      }
      if (sum == -5 && heightFlag[j] == 0) {
        count++;
        heightFlag[j] = 1;
      }
      sum = 0;
      if (count == 3) {
        cout << i + 1;
        break;
      }
    }
    
    if (count == 3) {
      break;
    }
    
    if (leftCrossFlag == false) {
      for (int j = 0; j < 5; j++) {
        sum += array[j][j];
      
        if (sum == -5) {
          count++;
          leftCrossFlag = true;
        }
      }
    }
    
    if (count == 3) {
      cout << i + 1;
      break;
    }    
    
    sum = 0;
    
    if (rightCrossFlag == false) {
      for (int j = 0, k = 4; j < 5; j++, k--) {
        sum += array[j][k];
      
        if (sum == -5) {
          count++;
          rightCrossFlag = true;
        }
      }
    }
    
    sum = 0;
    
    if (count == 3) {
      cout << i + 1;
      break;
    }    
  }

  return 0;
} 

