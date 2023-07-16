#include <stdio.h>
#include <string.h>
#include <stdbool.h>
//크로아티아 알파벳 
//두세 문자가 한 글자로 묶일 수 있을 때 글자의 수를 세는 문제

int main() {
	char str[100];
	
	scanf("%s", str);
	
	int len = strlen(str);
	
	for (int i = 1; i < strlen(str) ; i++) {
		if (str[i] == '=') {
			if (i >= 2 && str[i - 1] == 'z' && str[i - 2] == 'd') len -= 2;
			else len--;
		}
		
		if (str[i] == '-') len--;
		if (str[i] == 'j' && (str[i - 1] == 'l' || str[i - 1] == 'n')) len--;
	}
	
	printf("%d\n", len);

	return 0;
}

