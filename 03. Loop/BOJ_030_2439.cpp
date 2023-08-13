#include <stdio.h>
//별 찍기 - 2

int main(){
	int n;
	scanf("%d", &n);
	
	for (int i = 1; i <= n; i++){
		for (int j = n - i; j >= 1; j--){
			printf(" ");
		}
		for (int j = 1; j <= i; j++){
			printf("*");
		}
		printf("\n");
	}
	
	return 0;
}
