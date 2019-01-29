/*두 개의 자연수를 입력받아 최대공약수와 최소공배수를 출력하기*/
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
