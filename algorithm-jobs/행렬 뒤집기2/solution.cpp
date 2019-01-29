/*10*10 크기 맵의 상태와 뒤집을 횟수 N이 주어지면
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
      cin >> array[i][j];
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
