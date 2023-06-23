#include <stdio.h>

int main(){
	char id[50]; // 50자 이하의 문자형 받기
	scanf("%s", id); // 배열은 & 필요 없음
	
	printf("%s??!\n", id); 

	return 0;
}