#include <stdio.h>
//나머지

int main(){
	int n, x, max;
	x = 0;
	int a[10] = {0};
	
	for (int i = 0; i < 9; i++){
		scanf("%d", &a[i]);
		if (a[i] > max) {
			max = a[i];
			x++;
		}
	}
	
	printf("%d\n%d", max, x);
	
	return 0;
}
