/*ù ��° �ٿ��� A�� ������ ī���� ���� 10���� ���� ������� �־�����
�� ��° �ٿ��� B�� ������ ī���� ���� 10���� ���� ������� �־����� ��
������ ���а� �����Ǵ� ��� �¸��� �����, ���� ��쿡�� D�� ����ϱ�
�� ����� �� ���� ���ڸ� ������ ����� �¸�. ���ڰ� ���� ��쿡�� ����.*/
#include <iostream>
using namespace std;

int main() {

  //Please Enter Your Code Here
  int a[10], b[10];
  int scoreA[10];
  int scoreB[10];
  int finalScoreA = 0;
  int finalScoreB = 0;
  
  for (int i = 0; i < 10; i++) {
    cin >> a[i];
  }
  
  for (int i = 0; i < 10; i++) {
    cin >> b[i];
  }
  
  for (int i = 0; i < 10; i++) {
    if (a[i] < b[i]) {
      scoreB[i] = 2;
      scoreA[i] = 0;
    } else if (a[i] > b[i]) {
      scoreA[i] = 2;
      scoreB[i] = 0;
    } else if (a[i] == b[i]) {
      scoreA[i] = 1;
      scoreB[i] = 1;
    }
  }
  
  for (int i = 0; i < 10; i++) {
    finalScoreA += scoreA[i];
    finalScoreB += scoreB[i];
  }
  
  if (finalScoreA > finalScoreB) {
    cout << "A";
  } else if (finalScoreB > finalScoreA) {
    cout << "B";
  } else if (finalScoreA == finalScoreB) {
    cout << "D";
  }

  return 0;
}
