#include <stdio.h>
#include <string.h>
#include <math.h>

// 네 번째 점
// 직사각형을 완성하는 문제

int main() {
	int spot[4][2];
	
	for (int i = 0; i < 3; i++) {
		scanf("%d %d", &spot[i][0], &spot[i][1]);
	}
	
	for (int i = 0; i < 2; i++) {
		if (spot[0][i] == spot[1][i]) spot[3][i] = spot[2][i];
		else if (spot[0][i] == spot[2][i]) spot[3][i] = spot[1][i];
		else spot[3][i] = spot[0][i];
	}
	
	printf("%d %d\n", spot[3][0], spot[3][1]);
	
	return 0;
}