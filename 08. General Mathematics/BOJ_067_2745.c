#include <stdio.h>
#include <string.h>
//#include <stdbool.h>
// #include <stdlib.h> //abs, labs
// #include <math.h> //abs, labs, fabs
// 진법 변환
// 진법에 대해 배우는 문제

int main() {
	char num[30]; // 2진법으로 1억이 28자리임
	int b, result;
	
	scanf ("%s %d", num, &b);
	
	if (num[0] >= 65) result = num[0] - 55;
	else result = num[0] - 48;
	// printf("%d\n", result);
	
	int len = strlen(num);
	
	for (int i = 1; i < len; i++) {
		if (num[i] >= 65) num[i] -= 55;
		else num[i] -= 48;
		
		result = (result * b) + num[i];
		// printf("%d\n", result);
	}
	
	printf("%d\n", result);
	return 0;
}

