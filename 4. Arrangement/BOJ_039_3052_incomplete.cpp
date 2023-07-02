#include <stdio.h>
//과제 안 내신 분..?

int main(){
	int j, k, temp, n, m;
	scanf("%d %d", &n, &m);
	int a[28] = {0};
	
	for (int i = 0; i < 28; i++){
		scanf("%d %d", &j, &k);
		temp = a[j - 1];
		a[j - 1] = a[k - 1];
		a[k - 1] = temp;
	}
		
	for (int g = 0; g < n; g++){
		printf("%d ", a[g]);	
	}
	
	return 0;
}
