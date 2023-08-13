#include <stdio.h>
#include <string.h>
#include <stdbool.h>
// 최댓값
// 최댓값을 2차원에서 찾는 문제

int main() {
	int a[9][9];
	int max_x = 0, max_y = 0;
	int max_num = 0;
	
	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9; j++) {
			scanf("%d", &a[i][j]);
			
			if (a[i][j] > max_num) {
				max_num = a[i][j];
				max_x = i;
				max_y = j;
			}
		}
	}
	
	printf("%d\n", max_num);
	printf("%d %d\n", max_x + 1, max_y + 1);
	return 0;
}

