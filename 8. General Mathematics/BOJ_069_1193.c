#include <stdio.h>
#include <string.h>
//#include <stdbool.h>
// #include <stdlib.h> //abs, labs
// #include <math.h> //abs, labs, fabs
// 분수찾기
// 분수의 순서에서 규칙을 찾는 문제

int main() {
	int X;
	
	scanf ("%d", &X);
	int i = 0;
	
	while (X > 0) {
		i++;
		X -= i;
	}
	
	X += i;
	i--;
	
	if (i % 2 == 1) printf("%d/%d\n", X, i - X + 2);
	else printf("%d/%d\n", i - X + 2, X);
	
	
	return 0;
}

