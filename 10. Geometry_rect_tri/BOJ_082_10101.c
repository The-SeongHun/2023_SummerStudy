#include <stdio.h>
#include <string.h>
#include <math.h>

// 삼각형 외우기
// 각도를 보고 삼각형을 판별하고 분류하는 문제

int main() {
	int a[3] = {0};
	
	for (int i = 0; i < 3; i++) {
		scanf("%d", &a[i]);
	}
	
	int s = a[0] + a[1] + a[2];
	
	if (s != 180) printf("Error");
	else if (a[0] == 60 && a[1] == 60) printf("Equilateral");
	else if (a[0] == a[1] || a[1] == a[2] || a[0] == a[2]) printf("Isosceles");
	else printf("Scalene");
	
	printf("\n");
	
	return 0;
}