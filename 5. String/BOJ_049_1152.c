#include <stdio.h>
#include <string.h>
//문자열 반복

int main(){
	int count = 1;
	char str[1000000];
	scanf("%[^\n]s", str); // 엔터 누르기 전까지 입력 받을 수 있음
	
	for (int i = 1; i < strlen(str); i++){
		if (str[i] == 32) count++;
	}
	if (str[strlen(str) - 1] == 32) count--;
	
	printf("%d\n", count);
	return 0;
}