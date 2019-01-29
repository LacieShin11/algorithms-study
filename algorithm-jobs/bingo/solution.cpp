/*첫째 줄부터 다섯째 줄까지 빙고판에 쓰여진 수가 가장 위 가로줄부터 차례대로 한 줄에
다섯 개씩 빈 칸을 사이에 두고 주어진다. 여섯째 줄부터 열째 줄까지 사회자가 부르는 수가
차례대로 주어진다.(1에서 25 사이의 수가 한 번씩 사용된다.) 이 때 사회자가
몇 번째 수를 부른 후 빙고를 외치게 되는지를 출력한다.*/
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

