#include <stdio.h>
#include <string.h>
#include <math.h>

// 세 막대
// 가능한 한 둘레가 긴 삼각형을 만드는 문제

int main() {
	int a[3] = {0};
	int max = 0, s = 0;
	
	scanf("%d %d %d", &a[0], &a[1], &a[2]);
	
	for (int i = 0; i < 3; i++) {
		if (max < a[i]) max = a[i];
		s += a[i];
	}
	
	if (max >= s - max) printf("%d\n", 2 * (s - max) - 1);
	else printf("%d\n", s);

	
	return 0;
}