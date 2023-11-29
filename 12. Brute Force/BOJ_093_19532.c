#include <stdio.h>
#include <string.h>
#include <math.h>

// 수학은 비대면강의입니다
// 모든 x와 모든 y를 시도하여 해를 구하는 문제

int main() {
	int a, b, c, d, e, f;
	scanf("%d %d %d %d %d %d", &a, &b, &c, &d, &e, &f);
	
	int x = 0, y = 0;
	for (int i = -999; i <= 999; i++) {
		for (int j = -999; j <= 999; j++) {
			if (a * i + b * j == c) {
				if (d * i + e * j == f){
					x = i;
					y = j;
					break;
				}
			}
		}
	}
	
	printf("%d %d\n", x, y);
	
	return 0;
}
