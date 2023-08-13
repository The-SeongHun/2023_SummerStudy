#include <stdio.h>
#include <string.h>

// 소수 찾기
// 2부터 X-1까지 모두 나눠서 X가 소수인지 판별하는 문제 1

int count_factors(int a);

int main() {
	
	int n;
	
	scanf("%d", &n);
	
	int num[n], count[n];
	
	for (int i = 0; i < n; i++) {
		scanf("%d", &num[i]);
		
		count[i] = count_factors(num[i]);
	}
	
	int result = 0;
	
	for (int i = 0; i < n; i++) {
		if (count[i] == 2) result++;
	}
	
	printf("%d\n", result);

	return 0;
}

int count_factors(int a) {
	
	int count = 0;
	
	for (int i = 1; i <= a; i++) {
		if (a % i == 0) count++;
	}

	return count;
}