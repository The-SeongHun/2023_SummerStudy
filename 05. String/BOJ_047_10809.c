#include <stdio.h>
#include <string.h>
//알파벳 찾기

int main(){
	char s[100];
	scanf("%s", s);
	
	for (int i = 97; i <= 122; i++){
		int result = -1;
		for (int j = 0; j < strlen(s); j++){
			if ((int)s[j] == i){
				result = j;
				break;
			}
		}
		printf("%d ", result);
	}
	return 0;
}