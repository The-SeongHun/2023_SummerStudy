#include <stdio.h>
//공 바꾸기

int main(){
	int j, k, temp, n, m;
	scanf("%d %d", &n, &m);
	int a[n] = {0};
	
	for (int h = 0; h < n; h++){
		a[h] = h + 1;
	}
	
	for (int i = 0; i < m; i++){
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
