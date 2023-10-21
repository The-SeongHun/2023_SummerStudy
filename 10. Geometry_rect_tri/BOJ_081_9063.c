#include <stdio.h>
#include <string.h>
#include <math.h>

// 대지
// 옥구슬을 모두 포함하는 직사각형을 찾는 문제

int main() {
	int n = 0;
	scanf("%d", &n);

	int max_x = -100000, max_y = -100000;
	int min_x = 100000, min_y = 100000;
	int a[n], b[n];
	
	for (int i = 0; i < n; i++) {
		scanf("%d %d", &a[i], &b[i]);
		
		if (max_x < a[i]) max_x = a[i];
		if (max_y < b[i]) max_y = b[i];
		if (min_x > a[i]) min_x = a[i];
		if (min_y > b[i]) min_y = b[i];
	}
	int s = (max_x - min_x) * (max_y - min_y);
	
	printf("%d\n", s);	



	
	return 0;
}