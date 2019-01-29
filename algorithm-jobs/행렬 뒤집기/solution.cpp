/*뒤집을 횟수 N이 주어지면 10*10 정사각형 모양의 2차원 배열 형태에서 모든 원소들이 0일 때
가로, 세로 각각 N번째 줄을 뒤집어나가기*/
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
