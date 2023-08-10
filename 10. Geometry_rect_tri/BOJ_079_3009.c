#include <stdio.h>
#include <string.h>
#include <math.h>

// 네 번째 점
// 직사각형을 완성하는 문제

int main() {
	int x, y, w, h, min_d;
	scanf("%d %d %d %d", &x, &y, &w, &h);
	
	if (x > y) min_d = y;
	else min_d = x;
	
	if (min_d > w - x) min_d = w - x;
	
	if (min_d > h - y) min_d = h - y;
	
	printf("%d\n", min_d);
	
	return 0;
}