//(세 자리 수) × (세 자리 수)
#include <stdio.h>

int main(){
	int A, B;
	scanf("%d", &A); 
	scanf("%d", &B); 

	int b1, b2, b3;
	
	b1 = B/ 100;
	b2 = (B % 100) / 10;
	b3 = B % 10;

	
	printf("%d\n", A * b3); 
	printf("%d\n", A * b2);
	printf("%d\n", A * b1);
	printf("%d\n", A * B);

	return 0;
}