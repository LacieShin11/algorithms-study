/*�� ���� �ڿ����� �Է¹޾� �ִ������� �ּҰ������ ����ϱ�*/
#include <iostream>
using namespace std;

int main() {

  //Please Enter Your Code Here
  int n, m;
  int gcd = 1;
  int lcm = 1;
  
  cin >> n >> m;
  
  for (int i = 2; i < n; i++) {
    if (n % i == 0 && m % i == 0) {
      gcd *= i;
      n /= i;
      m /= i;
    }
  }
  
  lcm = gcd * n * m;
  
  cout << gcd << endl;
  cout << lcm << endl;

  return 0;
}
