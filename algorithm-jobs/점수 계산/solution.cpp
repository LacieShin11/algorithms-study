/*문제의 개수 n과 문제의 채점 결과를 0(틀린 경우) 혹은 1(맞은 경우)이 
빈 칸을 사이에 두고 주어졌을 때 총 점수를 계산하기
1번 문제와 앞의 문제에 대해서 답을 틀리다가 답이 맞는 처음 문제는 1점으로 계산,
연속으로 문제의 답이 맞는 경우 k번째 문제는 k점으로 계산*/
#include <iostream>
using namespace std;

int main() {

  //Please Enter Your Code Here
  int n;
  
  cin >> n;
  
  int result[n];
  int score[n];
  int finalScore = 0;
  
  
  for (int i = 0; i < n; i++) {
    cin >> result[i];
    
    if (result[i] == 0) {
      score[i] = 0;
    } else {
      if (i == 0) {
        score[0] = 1;
      } else {
        if (score[i - 1] > 0) {
          score[i] = score[i - 1] + 1;
        } else {
          score[i] = 1;
        }
      }
    }
  }
  
  for (int i = 0; i < n; i++) {
    finalScore += score[i];
  }
  
  cout << finalScore;

  return 0;
}
