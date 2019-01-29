/*컴퓨터마다 6자리의 고유번호를 매겼을 때 5자리에는 00000부터 99999까지의 수가, 6번째
자리에는 검증수가 들어간다. 검증수는 고유 번호의 처음 5자리에 들어가는 5개의 숫자를
각각 제곱한 수의 합을 10으로 나눈 나머지이다.
고유번호의 처음 5자리 숫자들이 빈칸을 사이에 두고 하나씩 주어졌을 때
첫째 줄에 검증수를 출력한다.*/
#include <iostream>
using namespace std;

int main() {

  //Please Enter Your Code Here
  int array[5];
  int n = 0;
  
  for (int i = 0; i < 5; i++) {
    cin >> array[i];
    n += (array[i] * array[i]);
  }
  
  cout << n % 10;

  return 0;
}
