#include <stdio.h>
#include <string.h>
//숫자의 합

int main(){
	int n, sum;
	sum = 0;
	scanf("%d", &n);
	
	char str[n];
	scanf("%s", str);
	
	for (int i = 0; i < n; i++){
		sum += str[i] - '0';   // 문자 0을을 빼줌으로써 아스키코드와 실제 숫자와의 데이터 맞춤
	}
	printf("%d", sum);
	return 0;
}