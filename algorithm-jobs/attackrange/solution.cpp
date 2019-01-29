/*입력 첫째 줄에는 디펜스 게임의 맵 크기 N(맵은 N*N 크기의 2차원 형태, N은 6 이상 100
이하의 짝수)이 주어지고 둘째 줄에는 유닛이 설치될 위치 X, Y와 유닛의 사거리 R이 주어질
때 유닛의 사거리를 나타내어 출력하기
유닛으로부터 N칸 떨어지면 N으로 표시한다.*/
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int N;
	int X, Y, R;
	int distance = 0;
	
	cin >> N >> X >> Y >> R;
	
	int array[200][200] = {-1,};

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			array[i][j] = 0;
		}
	}
	
	int r = X - 1;
	int c = Y - 1;
	
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			distance = abs(r - i) + abs(c - j); 
			if (distance <= R) {
				array[i][j] = distance;
			}
		}
	}

	array[X - 1][Y - 1] = 1000;

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			if (array[i][j] == 1000) {
				cout << "x ";
			} else {
				cout << array[i][j] << " ";
			}
		}
		cout << endl;
	}
	
	return 0;
}

