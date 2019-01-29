/*N*M의 2차원 배열이 주어지고, 주어진 2차원 배열의 [A][B]에는 어떠한 값이 있는지
2차원 배열을 활용하여 출력하기*/
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
