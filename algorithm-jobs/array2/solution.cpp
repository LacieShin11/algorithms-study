/*N*M�� 2���� �迭�� �־�����, �־��� 2���� �迭�� [A][B]���� ��� ���� �ִ���
2���� �迭�� Ȱ���Ͽ� ����ϱ�*/
#include <iostream>
using namespace std;

int main() {

  //Please Enter Your Code Here
  int n, m, a, b;
  
  cin >> n >> m;
  
  int array[n][m];
  
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      cin >> array[i][j];
    }
  }
  
  cin >> a >> b;
  
  cout << array[a][b];

  return 0;
}
