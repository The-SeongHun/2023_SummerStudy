#include <stdio.h>
#include <string.h>
#include <math.h>

// 블랙잭
// 세 장의 카드를 고르는 모든 경우를 고려하는 문제

int main() {
	int n, m;
	scanf("%d %d", &n, &m);
	int a[n];
	for (int i = 0; i < n; i++) scanf("%d", &a[i]);
	
	int optimum = 0;
	for (int i = 0; i < n - 2; i++) {
		for (int j = i + 1; j < n - 1; j++) {
			for (int k = j + 1; k < n; k++) {
				if (a[i] + a[j] + a[k] > optimum && a[i] + a[j] + a[k] <= m) {
					optimum = a[i] + a[j] + a[k];
				}
			}
		}
	}
	
	printf("%d", optimum);
	
	return 0;
}
