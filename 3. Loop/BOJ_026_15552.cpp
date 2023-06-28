#include <stdio.h>
//빠른 A+B : 입출력 방식에 따라 속도 달라짐

int main(){
	int t;
	scanf("%d", &t);
	
	for (int i = 1; i <= t; i++){
		int a, b;
		scanf("%d %d", &a, &b);
		printf("%d\n", a + b);
	}
	
	return 0;
}
