/*�Է� ù° �ٿ��� ���潺 ������ �� ũ�� N(���� N*N ũ���� 2���� ����, N�� 6 �̻� 100
������ ¦��)�� �־����� ��° �ٿ��� ������ ��ġ�� ��ġ X, Y�� ������ ��Ÿ� R�� �־���
�� ������ ��Ÿ��� ��Ÿ���� ����ϱ�
�������κ��� Nĭ �������� N���� ǥ���Ѵ�.*/
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

