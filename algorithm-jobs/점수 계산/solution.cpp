/*������ ���� n�� ������ ä�� ����� 0(Ʋ�� ���) Ȥ�� 1(���� ���)�� 
�� ĭ�� ���̿� �ΰ� �־����� �� �� ������ ����ϱ�
1�� ������ ���� ������ ���ؼ� ���� Ʋ���ٰ� ���� �´� ó�� ������ 1������ ���,
�������� ������ ���� �´� ��� k��° ������ k������ ���*/
#include <iostream>
using namespace std;

int main() {

  //Please Enter Your Code Here
  int n;
  
  cin >> n;
  
  int result[n];
  int score[n];
  int finalScore = 0;
  
  
  for (int i = 0; i < n; i++) {
    cin >> result[i];
    
    if (result[i] == 0) {
      score[i] = 0;
    } else {
      if (i == 0) {
        score[0] = 1;
      } else {
        if (score[i - 1] > 0) {
          score[i] = score[i - 1] + 1;
        } else {
          score[i] = 1;
        }
      }
    }
  }
  
  for (int i = 0; i < n; i++) {
    finalScore += score[i];
  }
  
  cout << finalScore;

  return 0;
}
