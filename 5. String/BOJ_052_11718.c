#include <stdio.h>
#include <string.h>
#include <stdbool.h>
//그대로 출력하기 

int main() {

	char c; // 공백 포함해서 받기 위해 char 단위로

	while(scanf("%c", &c) != EOF) {
		printf("%c", c);
	}

	return 0;
}

