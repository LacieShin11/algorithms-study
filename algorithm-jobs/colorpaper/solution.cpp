/*�������� ����� ��Ÿ���� ���� N�� N���� �����̿� ���� �Է��� �� �����̸��� �� �پ�
���ʷ� �־��� ��(�����̴� ����, ���� �ִ� 101ĭ���� ������ ���� ���) �Է¿��� �־��� 
������ ���� N���� �����̸� ��鿡 ������ �� �� �����̰� ���̴� �κ��� ������ �� �ٿ�
�ϳ��� ������ ����Ѵ�. ������ �ʴ´ٸ� ���� 0�� ����Ѵ�.*/
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
