#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <stdlib.h> //abs, labs
#include <math.h> //abs, labs, fabs
// 색종이
// 2차원 배열을 활용하여 색종이로 평면을 덮는 문제

int main() {
	int n;
	scanf ("%d", &n);
	
	int S = 100 * n;
	
	int a[n][2];
	
	for (int i = 0; i < n; i++) {
		scanf("%d %d", &a[i][0], &a[i][1]);
	}
	
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (abs(a[i][0] - a[j][0]) < 10 && abs(a[i][1] - a[j][1]) < 10 && (a[i][1] - a[j][1]) != 0) {
				int x = 10 - abs(a[i][0] - a[j][0]);
				int y = 10 - abs(a[i][1] - a[j][1]);
				
				int duplication = x * y;
				
				S -= duplication / 2;
			}
		}
	}
	
	printf("%d", S);
	return 0;
}

