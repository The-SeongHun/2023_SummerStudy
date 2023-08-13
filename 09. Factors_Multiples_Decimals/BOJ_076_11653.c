#include <stdio.h>
#include <string.h>
#include <math.h>

// 소인수분해
// N을 소인수분해하는 문제

int main() {
	int n;
	scanf("%d", &n);
	
	if (n == 1) return 0;
	
	for (int i = 2; n != 1; i++) {
		if (n % i == 0) {
			printf("%d\n", i);
			n /= i;
			i = 1;
			continue;
		}
	}
	
	return 0;
}