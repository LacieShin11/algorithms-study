/*����ã�� ����. ù° �ٿ� ������ ���� ũ�⸦ ��Ÿ���� ���� N�� M, ��° �ٿ� �÷��̾
Ŭ���� ������ ��ġ X�� Y, ��° �ٺ��� N�ٿ� ��ó N*M ���� ���� ���°� �־��� ��(���ڰ�
���� ������ 0, �ִ� ������ 1) Ŭ���� ���� �ֺ��� �ִ� ������ ������ ����Ѵ�.
Ŭ���� ������ ���ڰ� �ִ� �����̸� game over�� ����Ѵ�.*/
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
