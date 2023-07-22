#include <stdio.h>
#include <string.h>
//#include <stdbool.h>
// #include <stdlib.h> //abs, labs
// #include <math.h> //abs, labs, fabs
// 벌집
// 벌집이 형성되는 규칙에 따라 벌집의 위치를 구하는 문제

int main() {
	int n;
	scanf ("%d", &n);
	
	int num = n - 1;
	
	for (int i = 0; i < n; i++) {
		num -= 6 * i;
		if (num <= 0) {
			printf("%d\n", i + 1);
			break;
		}
	}
	
	return 0;
}

