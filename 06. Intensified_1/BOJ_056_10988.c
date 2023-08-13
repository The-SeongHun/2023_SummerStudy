#include <stdio.h>
#include <string.h>
#include <stdbool.h>
//팰린드롬인지 확인하기 

int main() {
	char str[100];
	
	scanf("%s", str);
	
	int len = strlen(str);
	
	int result = 1;
	
	for (int i = 0; i < len; i++) {
		if (str[i] != str[len - 1 - i]) {
			result = 0;
			break;
		}
	}
	
	printf("%d\n", result);

	return 0;
}

