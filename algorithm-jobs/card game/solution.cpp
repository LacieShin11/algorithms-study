/*첫 번째 줄에는 A가 제시한 카드의 숫자 10개가 라운드 순서대로 주어지고
두 번째 줄에는 B가 제시한 카드의 숫자 10개가 라운드 순서대로 주어졌을 때
게임의 승패가 결정되는 경우 승리한 사람을, 비기는 경우에는 D를 출력하기
각 라운드는 더 높은 숫자를 제시한 사람이 승리. 숫자가 같은 경우에는 비긴다.*/
#include <iostream>
using namespace std;

int main() {

  //Please Enter Your Code Here
  int a[10], b[10];
  int scoreA[10];
  int scoreB[10];
  int finalScoreA = 0;
  int finalScoreB = 0;
  
  for (int i = 0; i < 10; i++) {
    cin >> a[i];
  }
  
  for (int i = 0; i < 10; i++) {
    cin >> b[i];
  }
  
  for (int i = 0; i < 10; i++) {
    if (a[i] < b[i]) {
      scoreB[i] = 2;
      scoreA[i] = 0;
    } else if (a[i] > b[i]) {
      scoreA[i] = 2;
      scoreB[i] = 0;
    } else if (a[i] == b[i]) {
      scoreA[i] = 1;
      scoreB[i] = 1;
    }
  }
  
  for (int i = 0; i < 10; i++) {
    finalScoreA += scoreA[i];
    finalScoreB += scoreB[i];
  }
  
  if (finalScoreA > finalScoreB) {
    cout << "A";
  } else if (finalScoreB > finalScoreA) {
    cout << "B";
  } else if (finalScoreA == finalScoreB) {
    cout << "D";
  }

  return 0;
}
