#include <stdio.h>
#include <string.h>
#include <math.h>

// 알고리즘 수업 - 알고리즘의 수행 시간 4
// n이 커질수록 n과 n²의 차이는 어마어마하게 벌어지기 때문에,

int main() {
	long long n;  //자료형 신경쓰기
	scanf("%lld", &n);
	printf("%lld\n", n * (n - 1) / 2);
	printf("2\n");
	
	return 0;
}