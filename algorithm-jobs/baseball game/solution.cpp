/*세 자리 수 중 하나가 영수의 세 자리 수의 동일한 자리에 위치하면 스트라이크 한 번으로,
숫자가 영수의 세 자리 수에 있긴 하나 다른 자리에 위치하면 볼 한 번으로 세는 야구 게임.
첫째 줄에는 민혁이가 영수에게 몇 번이나 질문을 했는지를 나타내는 1 이상 100 이하의 
자연수 N, 이어지는 N개의 줄에는 각 줄마다 민혁이가 질문한 세 자리 수와 영수가 답한 
스트라이크 개수를 나타내는 정수와 볼의 개수를 나타내는 정수, 이렇게 총 세 개의 정수가
빈 칸을 사이에 두고 주어졌을 때 첫 줄에 영수가 생각하고 있을 가능성이 있는 답의 
총 개수를 출력하기*/
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

