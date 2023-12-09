#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>

// 설탕 배달
// 한때는 이 문제가 "기본 수학 1" 단계에 있었지만, 사실 브루트 포스로 푸는 게 더 쉽습니다.

int main() {
	int n;
	scanf("%d", &n);
	int result = -1;
	
	for (int i = n / 5; i >= 0; i--) {
		if ((n - 5 * i) % 3 == 0) {
			result = i + (n - 5 * i) / 3;
			break;
		}
	}
	
	printf("%d\n", result);
}

