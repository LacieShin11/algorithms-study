/*ù° �ٿ� ������ ���� N�� �޾����� ��° �ٿ� ������ ��Ÿ���� N���� ���ڰ� �־����� ��
������ �����ϸ鼭 ���ڸ� ĥ�� �� ������ "YES", �ƴϸ� "NO"�� ����ϱ�
������ ���� ������ ������ �鿡 ĥ�ϸ� �� �ȴٴ� ���̴�.*/
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

