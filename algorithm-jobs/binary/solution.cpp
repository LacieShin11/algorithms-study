/*���ڸ� �Է� �޾� �������� ����ϱ�*/
#include <iostream>
using namespace std;

int main() {

  //Please Enter Your Code Here
  int n;
  int i = 0;
  int array[1000];
  
  cin >> n;
  
  while (n != 0) {
    array[i] = n % 2;
    n = n / 2;
    i++;
  }
  
  for (int j = i - 1; j >= 0; j--) {
   cout << array[j];
  }

  return 0;
}
