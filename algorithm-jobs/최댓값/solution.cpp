/*9개의 서로 다른 자연수가 주어질 때 이들 중 최댓값을 찾고
그 최댓값이 몇 번째 수인지 구하기*/
#include <iostream>
using namespace std;

int main() {

  //Please Enter Your Code Here
  int array[9];
  int max = 0;
  int maxIndex = -1;
  
  for (int i = 0; i < 9; i++) {
    cin >> array[i];
    
    if (array[i] > max) {
      max = array[i];
      maxIndex = i;
    }
  }
  
  cout << max << endl;
  cout << maxIndex + 1 << endl;
  
  

  return 0;
}
