#include <stdio.h>
#include <string.h>
//단어 길이 재기
/*
int main(){
	char str[101] = {0};
	scanf("%s", str);
	
	for (int i = 0; i < 100; i++){
		if (str[i] == 0) {
			break;
		}
	}
	printf("%d\n", i);
	return 0;
}
*/

int main(){
	char str[101];
	scanf("%s", str);
	
	printf("%ld\n", strlen(str));
	return 0;
}