/*지뢰찾기 게임. 첫째 줄에 게임의 맵의 크기를 나타내는 정수 N과 M, 둘째 줄에 플레이어가
클릭한 지점의 위치 X와 Y, 셋째 줄부터 N줄에 걸처 N*M 게임 맵의 상태가 주어질 때(지뢰가
없는 지점은 0, 있는 지점은 1) 클릭된 지점 주변에 있는 지뢰의 개수를 출력한다.
클릭된 지점이 지뢰가 있는 지점이면 game over를 출력한다.*/
#include <iostream>
using namespace std;

int main() {

  //Please Enter Your Code Here
  int n, m, x, y;
  int result = 0;
  
  cin >> n >> m >> x >> y;
  
  int array[n][m];
  
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      cin >> array[i][j];
    }
  }
  
  if (array[x - 1][y - 1] == 1) {
    cout << "game over" << endl;
  } else {
    if (array[x - 2][y - 2] == 1) {
      result++;
    }
    if (array[x - 2][y - 1] == 1) {
      result++;
    }
    if (array[x - 2][y] == 1) {
      result++;
    }
    if (array[x - 1][y - 2] == 1) {
      result++;
    } 
    if (array[x - 1][y] == 1) {
      result++;
    } 
    if (array[x][y - 2] == 1) {
      result++;
    } 
    if (array[x][y - 1] == 1) {
      result++;
    } 
    if (array[x][y] == 1) {
      result++;
    }
    
    cout << result << endl;
  }

  return 0;
}
