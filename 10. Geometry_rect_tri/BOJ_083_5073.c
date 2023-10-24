#include <stdio.h>
#include <string.h>
#include <math.h>

// 삼각형과 세 변
// 변의 길이를 보고 삼각형을 판별하고 분류하는 문제

int main() {
	while (1) {
		int a[3] = {0};
		int max = 0, s = 0;
		
		for (int i = 0; i < 3; i++) {
			scanf("%d", &a[i]);
			
			if (max < a[i]) max = a[i];
			s += a[i];
		}
		
		if (a[0] == 0) break;
		else if (max >= s - max) printf("Invalid");
		else if (a[0] == a[1] && a[1] == a[2]) printf("Equilateral");
		else if (a[0] == a[1] || a[1] == a[2] || a[0] == a[2]) printf("Isosceles");
		else printf("Scalene");
		
		printf("\n");
	}
	
	return 0;
}