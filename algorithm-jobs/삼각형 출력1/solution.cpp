/*n���� �ﰢ���� ����ϱ�*/
#include <iostream>
using namespace std;

int main() {

  //Please Enter Your Code Here
  int n;
  
  cin >> n;
  
  for (int i = 0; i < n; i++) {
    for (int j = i; j >= 0; j--) {
      cout << "*";
    }
    cout << endl;
  }

  return 0;
}
