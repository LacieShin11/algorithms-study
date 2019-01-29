/*첫째 줄에는 반의 학생수, 둘째 줄부터는 1번 학생부터 차례대로 각 줄마다 1학년부터 5학년
까지 몇 반에 속했었는지를 나타내는 5개의 정수가 빈 칸 하나를 사이에 두고 주어졌을 때
가장 같은 반이었던 학생이 많은 학생을 임시반장으로하여 그 학생의 번호를 출력한다.
임시반장이 될 수 있는 학생이 여러 명인 경우 그 중 가장 작은 번호만 출력한다.*/
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
