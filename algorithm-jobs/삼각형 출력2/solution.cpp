/*n층의 삼각형을 오른쪽 정렬으로 출력하기*/
#include <iostream>
using namespace std;

int main() {

  //Please Enter Your Code Here
  int n;
  
  cin >> n;
  
  for (int i = 0; i < n; i++) {
    for (int j = n - i; j > 1; j--) {
      cout << " ";
    }
    
    for (int j = i; j >= 0; j--) {
      cout << "*";
    }
    cout << endl;
  }

  return 0;
}
