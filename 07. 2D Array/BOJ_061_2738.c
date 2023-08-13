#include <stdio.h>
#include <string.h>
#include <stdbool.h>
// 행렬 덧셈
// 행렬을 2차원 배열로 만들어 더하는 문제

int main() {
	int n, m;
	scanf("%d %d", &n, &m);
	
	int a[n][m], b[n][m];
	
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			scanf("%d", &a[i][j]);
		}
	}
	
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			scanf("%d", &b[i][j]);
		}
	}
	
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			printf("%d ", a[i][j] + b[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}

