#include <stdio.h>
#include <string.h>
#include <math.h>

// 분해합
// 모든 경우를 시도하여 N의 생성자를 구하는 문제

int main() {
	int n;
	scanf("%d", &n);
	
	int result = 0;
	for (int i = n; i > 0; i--) {
		int a[7];
		a[0] = i / 1000000;
		a[1] = (i % 1000000) / 100000;
		a[2] = (i % 100000) / 10000;
		a[3] = (i % 10000) / 1000;
		a[4] = (i % 1000) / 100;
		a[5] = (i % 100) / 10;
		a[6] = i % 10;
		
		int sum = a[0] + a[1] + a[2] + a[3] + a[4] + a[5] + a[6];
		
		if (n == i + sum) result = i;
	}
	
	printf("%d\n", result);
	
	return 0;
}
