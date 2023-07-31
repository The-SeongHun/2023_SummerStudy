#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <stdlib.h> //abs, labs
#include <math.h> //abs, labs, fabs
// 색종이
// 2차원 배열을 활용하여 색종이로 평면을 덮는 문제

int main() {
	int n, x, y;
	scanf ("%d", &n);
	
	int s[100][100] = {0};
	
	int S = 0;
	
	for (int i = 0; i < n; i++) {
		scanf("%d %d", &x, &y);
		
		for (int j = 0; j < 10; j++) {
			for (int k = 0; k < 10; k++) {
				s[j + x - 1][k + y - 1] += 1;
			}
		}
		
		
	}
	
	for (int i = 0; i < 100; i++) {
		for (int j = 0; j < 100; j++) {
			if (s[i][j] != 0) S++;
		}
	}
	
	printf("%d\n", S);
	
	return 0;
}

