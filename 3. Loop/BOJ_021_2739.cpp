#include <stdio.h>
//구구단

int main(){
	int a;
	scanf("%d %d %d", &a, &b, &c);
	
	if (a == b && b == c){
		printf("%d", 10000 + a * 1000);
	}
	else if (a == b || b == c) {
		printf("%d", 1000 + b * 100);
	}
	else if (a == c) {
		printf("%d", 1000 + a * 100);
	}
	else {
		if (a > b && a > c){
			printf("%d", a * 100);
		}
		else if (b > a && b > c){
			printf("%d", b * 100);
		}
		else {
			printf("%d", c * 100);
		}
	}

	printf("\n");
	return 0;
}
