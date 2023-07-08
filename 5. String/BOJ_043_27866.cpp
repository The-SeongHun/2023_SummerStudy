#include <stdio.h>
//문자와 문자열

int main(){
	char str[1000];
	int n;
	scanf("%s", str);
	scanf("%d", &n);
	
	printf("%c\n", str[n - 1]);
	
}
