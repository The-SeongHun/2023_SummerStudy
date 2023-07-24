#include <stdio.h>
#include <string.h>
//#include <stdbool.h>
// #include <stdlib.h> //abs, labs
// #include <math.h> //abs, labs, fabs
// 진법 변환
// 반대 방향으로 진법을 변환하는 문제

int main() {
	char result[30] = {0}; // 2진법으로 1억이 28자리임
	int num, temp, b;
	
	scanf ("%d %d", &num, &b);
	int i = 0;
	
	while (num > 0) {
		
		
		result[i] = num % b;
		num = num / b;
		
		if (result[i] >= 10) result[i] += 55;
		else result[i] += 48;
		
		// printf("%d %c\n", i, result[i]);
		i++;
	}
	
	int len = strlen(result);
	// printf("%d\n", len);

	for (int i = 1; i <= len; i++) {
		printf("%c", result[len - i]);
	}
	
	return 0;
}

