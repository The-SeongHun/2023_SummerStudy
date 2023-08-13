#include <stdio.h>
#include <string.h>
//문자열 반복

int main(){
	int t;
	scanf("%d", &t);
	for (int i = 0; i < t; i++){
		int n;
		char str[20];
		scanf("%d %s", &n, str);
		
		for (int j = 0; j < strlen(str); j++){
			for (int k = 0; k < n; k++){
				printf("%c", str[j]);
			}
		}
		printf("\n");
	}
	
	return 0;
}