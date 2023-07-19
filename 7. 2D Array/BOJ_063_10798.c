#include <stdio.h>
#include <string.h>
#include <stdbool.h>
// 세로읽기
// 문자열의 배열을 다루는 문제

int main() {
	char a[5][15] = {'!'};
	
	for (int i = 0; i < 5; i++) {
		scanf("%s", a[i]);
	}
	
	for (int i = 0; i < 15; i++) {
		for (int j = 0; j < 5; j++) {
			if (a[j][i] == '!') break;
			printf("%c", a[j][i]);
		}
	}
	
	return 0;
}

