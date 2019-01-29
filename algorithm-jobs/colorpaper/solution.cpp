/*색종이의 장수를 나타내는 정수 N과 N장의 색종이에 관한 입력이 각 색송이마다 한 줄씩
차례로 주어질 때(색종이는 가로, 세로 최대 101칸으로 구성된 격자 모양) 입력에서 주어진 
순서에 따라 N장의 색종이를 평면에 놓았을 때 각 색종이가 보이는 부분의 면적을 한 줄에
하나씩 정수로 출력한다. 보이지 않는다면 정수 0을 출력한다.*/
#include <iostream>
using namespace std;

int main() {
  //Please Enter Your Code Here

  int array[101][101];
  int n;

  cin >> n;

  int x[n] = {0, };
  int y[n] = {0, };
  int width[n] = {0, };
  int height[n] = {0, }; 
  int result[n] = {0, };

  for (int i = 0; i < n; i++) {
    cin >> x[i] >> y[i] >> width[i] >> height[i];    
  }
  
  for (int i = 0; i < 101; i++) {
    for (int j = 0; j < 101; j++) {
      array[i][j] = -1;
    }
  }

  for (int i = 0; i < n; i++) {
    int pointX = x[i];
    int pointY = y[i];
    for (int j = 0; j < height[i]; j++) {
      for (int k = 0; k < width[i]; k++) {
        array[pointX][pointY] = i;
        pointX++;
      }
      pointX = x[i];
      pointY++;
    }
  }
  
  for (int i = 0; i < 101; i++) {
    for (int j = 0; j < 101; j++) {
      result[array[i][j]]++;
    }
  }

  for (int i = 0; i < n; i++) {
    cout << result[i] << endl;
  }

  return 0;
}
