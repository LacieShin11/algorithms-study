/*�� �ڸ� �� �� �ϳ��� ������ �� �ڸ� ���� ������ �ڸ��� ��ġ�ϸ� ��Ʈ����ũ �� ������,
���ڰ� ������ �� �ڸ� ���� �ֱ� �ϳ� �ٸ� �ڸ��� ��ġ�ϸ� �� �� ������ ���� �߱� ����.
ù° �ٿ��� �����̰� �������� �� ���̳� ������ �ߴ����� ��Ÿ���� 1 �̻� 100 ������ 
�ڿ��� N, �̾����� N���� �ٿ��� �� �ٸ��� �����̰� ������ �� �ڸ� ���� ������ ���� 
��Ʈ����ũ ������ ��Ÿ���� ������ ���� ������ ��Ÿ���� ����, �̷��� �� �� ���� ������
�� ĭ�� ���̿� �ΰ� �־����� �� ù �ٿ� ������ �����ϰ� ���� ���ɼ��� �ִ� ���� 
�� ������ ����ϱ�*/
#include <iostream>
#include <vector>
 using namespace std;
  
 int main()
 {
     int numberOfQuestion;
     int questionNumber;
     int strike;
     int ball;
     int information[1000][5];
     int testNumber;
     int strikeCount = 0;
     int ballCount = 0;
     int result = 0;
     int resultCount = 0;
     int flagHundred = 0;
     int flagTen = 0;
     int flagOne = 0;
     
     cin >> numberOfQuestion;
     
     for (int i = 0; i < numberOfQuestion; i++) {
         cin >> questionNumber;
         cin >> strike;
         cin >> ball;
         
         information[i][0] = questionNumber / 100;
         information[i][1] = (questionNumber / 10) % 10;
         information[i][2] = questionNumber % 10;
         information[i][3] = strike;
         information[i][4] = ball;
     }
     
     for (int j = 123; j <= 987; j++) {
         resultCount = 0;
         if (j / 100 == (j / 10) % 10 || j / 100 == j % 10 || (j / 10) % 10 == j % 10 || (j / 10) % 10 == 0 || j % 10 == 0) {
         	
		 } else {
         for (int i = 0; i < numberOfQuestion; i++) {
             strikeCount = 0;
             ballCount = 0;
             flagHundred = 0;
             flagTen = 0;
             flagOne = 0;
             
             if (information[i][0] == j / 100) {
                 strikeCount++;
                 flagHundred = 1;
             }
             
             if (information[i][1] == (j / 10) % 10) {
                 strikeCount++;
                 flagTen = 1;
             }
             
             if (information[i][2] == j % 10) {
                 strikeCount++;
                 flagOne = 1;
             }
             
             if (flagHundred == 0) {
                 if (information[i][0] == j / 100 || information[i][0] == (j / 10) % 10 || information[i][0] == j % 10) {
                     ballCount++;
                 }
             }
             
             if (flagTen == 0) {
                 if (information[i][1] == j / 100 || information[i][1] == (j / 10) % 10 || information[i][1] == j % 10) {
                     ballCount++;
                 }
             }
             
             if (flagOne == 0) {
                 if (information[i][2] == j / 100 || information[i][2] == (j / 10) % 10 || information[i][2] == j % 10) {
                     ballCount++;
                 }
             }
             
             if (information[i][3] == strikeCount && information[i][4] == ballCount) {
                 resultCount++;
             }
         }
     
         if (numberOfQuestion == resultCount)
             result++;
         }
     }
     
     cout << result;
 }

