#include <stdio.h>
//A + B (3)

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
