/*열의 개수 N, 행의 개수 M이 주어질 때 2차원 배열을 활용하여 자연수를 1부터 출력하기*/
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
