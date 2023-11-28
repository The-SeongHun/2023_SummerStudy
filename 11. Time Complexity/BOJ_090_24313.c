#include <stdio.h>
#include <string.h>
#include <math.h>

// 알고리즘 수업 - 점근적 표기 1
// 시간 복잡도는 빅-O 표기법으로 표현할 수 있습니다. 정확한 정의보다는 "이 함수에 비례한다" 정도만 기억해도 무방합니다.

int main() {
	int a1, a0, c, n0;
	scanf("%d %d", &a1, &a0);
	scanf("%d", &c);
	scanf("%d", &n0);
	
	if (c - a1 == 0) {
		if (a0 > 0) printf("0\n");
		else printf("1\n");
	}
	else if (c - a1 > 0) {
		if (n0 >= a0 / (c - a1)) printf("1\n");
		else printf("0\n");
	}
	else  printf("0\n");
	
	
	return 0;
}
