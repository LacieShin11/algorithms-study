/*8*8 ü������ ���°� �־����� �� ���������� ������ ��,��,��,�� �������� 
�� �� ������ �� �ִ� �迡�� ŷ�� ���� ���ɼ��� ������ 1, ������ 0�� ����ϱ�
ü���ǿ��� ŷ�� �ϳ��� ����, ����� ���� �ִ� 2������ ���� �� �ִ�.
1�� ŷ, 2�� ����� ��, 3�� �� �� �ٸ� �⹰���� �ǹ��Ѵ�.*/
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

