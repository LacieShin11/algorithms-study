/*첫째 줄에 색깔의 개수 N이 줏어지고 둘째 줄에 색깔을 나타내는 N개의 숫자가 주어졌을 때
조건을 만족하면서 상자를 칠할 수 있으면 "YES", 아니면 "NO"를 출력하기
조건은 같은 색깔을 인접한 면에 칠하면 안 된다는 것이다.*/
#include <iostream>
using namespace std;

int main() {

  //Please Enter Your Code Here
  int n;
  
  cin >> n;
  
  int array[n];
  int count[1000];
  int result = 0;
  
  for (int i = 0; i < n; i++) {
    cin >> array[i];
  }
  
  for (int i = 0; i < 1000; i++) {
    count[i] = 0;
  }
  
  for (int i = 0; i < n; i++) {
    count[array[i]]++;
  }
  
  for (int i = 0; i < 1000; i++) {
    if (count[i] == 1) {
      result++;
    } else if (count[i] >= 2) {
      result += 2;
    }
    
    if (result >= 6) {
      break;
    }
  }
  
  if (result >= 6) {
    cout << "YES";
  } else {
    cout << "NO";
  }

  return 0;
} 

