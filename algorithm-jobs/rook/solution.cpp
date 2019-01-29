/*8*8 체스판의 상태가 주어졌을 때 막혀있지만 않으면 상,하,좌,우 방향으로 
한 번 움직일 수 있는 룩에게 킹이 잡힐 가능성이 있으면 1, 없으면 0을 출력하기
체스판에서 킹은 하나만 존재, 상대의 룩은 최대 2개까지 있을 수 있다.
1은 킹, 2는 상대의 룩, 3은 그 외 다른 기물들을 의미한다.*/
#include <iostream>
using namespace std;

int main()
{
	int array[8][8];
	int temp = 0;
	int result = 0;
	
	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 8; j++) {
			cin >> array[i][j];
		}
	}
	
	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 8; j++) {
			if (array[i][j] == 2) {
				for (int temp = j - 1; temp >= 0; temp--) {
					if (array[i][temp] == 0) {
						
					} else if (array[i][temp] == 1) {
						result = 1;
						break;
					} else if (array[i][temp] == 3) {
						break;
					}
				}
				
				for (int temp = i - 1; temp >= 0; temp--) {
					if (array[temp][j] == 0) {
						
					} else if (array[temp][j] == 1) {
						result = 1;
						break;
					} else if (array[temp][j] == 3) {
						break;
					}
				}			
				
				for (int temp = i + 1; temp < 10; temp++) {
					if (array[temp][j] == 0) {
						
					} else if (array[temp][j] == 1) {
						result = 1;
						break;
					} else if (array[temp][j] == 3) {
						break;
					}
				}
				
				for (int temp = j + 1; temp < 10; temp++) {
					if (array[i][temp] == 0) {
						
					} else if (array[i][temp] == 1) {
						result = 1;
						break;
					} else if (array[i][temp] == 3) {
						break;
					}
				}										
			}
		}
	}
	
	if (result == 1) {
		cout << result << endl;
	} else {
		cout << 0 << endl;
	}
	
	return 0;
}

