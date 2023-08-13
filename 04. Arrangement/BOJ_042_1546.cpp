#include <stdio.h>
//평균값

int main(){
	int n, max = 0;
	float sum, avg;
	sum = 0;
	scanf("%d", &n);
	int a[n] = {0};
	float b[n] = {0};

	for (int h = 0; h < n; h++){
		scanf("%d", &a[h]);
		if (a[h] > max) {
			max = a[h];
		}
	}	
	
	for (int i = 0; i < n; i++){
		b[i] = float(a[i])/float(max) * 100;
		sum += b[i];
	}
	
	avg = sum / n;
	
	printf("%f\n", avg);
}
