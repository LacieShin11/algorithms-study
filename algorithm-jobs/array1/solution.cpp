/*���� ���� N, ���� ���� M�� �־��� �� 2���� �迭�� Ȱ���Ͽ� �ڿ����� 1���� ����ϱ�*/
#include <iostream>
using namespace std;

int main() {

  //Please Enter Your Code Here
  int n, m;
  
  cin >> n >> m;
  
  int array[n][m];
  int number = 1;
  
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++, number++) {
      cout << number << " ";
    }
    cout << endl;
  }

  return 0;
}
