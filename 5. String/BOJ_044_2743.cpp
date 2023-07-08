#include <stdio.h>
//단어 길이 재기

int main(){
	char str[100] = {0};
	int l;
	scanf("%s", str);
	
	for (int i = 0; i < 100; i++){
		if (str[i] == 0) {
			l = i;
			break;
		}
	}
	printf("%d\n", l);
	
}
