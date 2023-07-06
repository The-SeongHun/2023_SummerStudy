#include <stdio.h>
//바구니 뒤집기

int main(){
	int n, max;
	float sum, avg;
	sum = 0;
	scanf("%d", &n);
	int a[n] = {0};
	float b[n] = {0};

	for (int h = 0; h < n; h++){
		scanf("%d", &a[h]);
	}
	
	// max 찾는 코드만 완성하면 됨!
	
	for (int i = 0; i < n; i++){
		b[i] = float(a[i])/float(max) * 100;
		sum += b[i];
	}
	
	avg = sum / n;
	
	printf("%f\n", avg);
}
