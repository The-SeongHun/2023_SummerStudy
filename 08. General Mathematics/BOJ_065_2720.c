#include <stdio.h>
#include <string.h>
//#include <stdbool.h>
// #include <stdlib.h> //abs, labs
// #include <math.h> //abs, labs, fabs
// 중앙 이동 알고리즘
// 둘씩 반복해서 나눴을 때 점의 개수를 세는 문제

int main() {
	int n;
	scanf ("%d", &n);
	
	int num = 2;
	
	for (int i = 0; i < n; i++) {
		num = 2 * num - 1;
	}
	
	printf("%d\n", num * num);
	
	return 0;
}

