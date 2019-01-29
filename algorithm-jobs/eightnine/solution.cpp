/*0과 8로 이루어져 있는 N*M타일이 주어질 때 숫자들을 좌우로 뒤집*/
#include <iostream>
using namespace std;

int main() {

  //Please Enter Your Code Here
  int n, m;
  
  cin >> n >> m;
  
  int array[n][m];
  
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      cin >> array[i][j];
    }
  }
  
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m / 2; j++) {
      int temp = array[i][j];
      array[i][j] = array[i][m - 1 - j];
      array[i][m - 1 - j] = temp;
    }
  }
  
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      cout << array[i][j] << " ";
    }
    cout << endl;
  }
  return 0;
}
