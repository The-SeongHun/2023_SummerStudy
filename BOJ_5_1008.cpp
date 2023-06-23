#include <stdio.h>

int main(){
	int a, b;
	scanf("%d %d", &a, &b);

	printf("%.9f\n", (double)a / b); // a를 double형으로 변경, c언어 사칙연산 규칙에 의해 실수형 계산으로 넘어감. / '.9f'를 통해 소수점 9자리까지 출력
	return 0;
}