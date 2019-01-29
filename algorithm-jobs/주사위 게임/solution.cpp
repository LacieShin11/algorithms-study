/*1에서부터 6까지의 눈을 가진 3개의 주사위를 던져서 상금을 받는 게임.
첫째 줄에는 참여하는 사람 수, 그 다음 줄부터 N개의 줄에 사람들이 주사위를 던진 3개의 눈이
빈 칸을 사이에 두고 각각 주어진다.
첫째 줄에 가장 많은 상금을 받은 사람의 상금을 출력한다.
규칙 1 : 같은 눈이 3개가 나오면 10000원 + (같은 눈) * 1000원
규칙 2 : 같은 눈이 2개만 나오면 1000원 + (같은 눈) * 100원
규칙 3 : 모두 다른 눈이 나오면 (그 중 가장 큰 눈) * 100원*/
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

