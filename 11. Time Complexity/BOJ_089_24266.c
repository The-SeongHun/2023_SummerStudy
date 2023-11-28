#include <stdio.h>
#include <string.h>
#include <math.h>

// 알고리즘 수업 - 알고리즘의 수행 시간 6
// 그 역할을 하는 것이 바로 시간 복잡도입니다.

int main() {
	long long n;  //자료형 신경쓰기
	scanf("%lld", &n);
	printf("%lld\n", n * (n - 1) * (n - 2) / 6 );
	printf("3\n");
	
	return 0;
}

//와 존나 어렵네