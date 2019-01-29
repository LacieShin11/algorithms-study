/*첫째 줄부터 열 번째 줄까지 한 줄에 하나씩 자연수가 주어졌을 때 첫째 줄에는 평균을,
둘째 줄에는 최빈값을 출력한다. 최빈값이 둘 이상일 경우 그 중 최솟값을 출력한다.*/
#include <iostream>
using namespace std;

int main() {

  //Please Enter Your Code Here
  int array[10];
  int average = 0;
  int number[10] = {0, };
  int mode[10] = {0, };
  int index = 0;
  int max = 0;
  int maxIndex = 0;
  
  for (int i = 0; i < 10; i++) {
    cin >> array[i];
  }
  
  for (int i = 0; i < 10; i++) {
    bool flag = true;
    for (int j = 0; j < 10; j++) {
      if (number[i] != array[j]) {
        flag = false;
      }
    }
    if (flag == false) {
      number[index] = array[i];
      index++;
      flag = true;
    }
  }
  
  for (int i = 0; i < index; i++) {
    for (int j = i + 1; j < index; j++) {
      if (number[i] > number[j]) {
        int temp = number[i];
        number[i] = number[j];
        number[j] = temp;
      }
    }
  }
  
  for (int i = 0; i < 10; i++) {
    for (int j = 0; j < 10; j++) {
      if (number[i] == array[j]) {
        mode[i]++;
      }
    }
  }
  
  for (int i = 0; i < 10; i++) {
    if (max < mode[i]) {
      max = mode[i];
      maxIndex = i;
    }
  }
  
/*  for (int i = 0; i < index; i++) {
    cout << number[i] << " ";
    cout << mode[i] << " ";
  }*/
  
  for (int i = 0; i < 10; i++) {
    average += number[i];
  }
  
  average /= 10;
  
  cout << average << endl;
  cout << number[maxIndex] << endl;

  return 0;
}
