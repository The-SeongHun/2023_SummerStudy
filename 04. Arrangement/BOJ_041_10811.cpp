#include <stdio.h>
//바구니 뒤집기

int main(){
	int n, m;
	scanf("%d %d", &n, &m);
	int a[n] = {0};
	
	for (int h = 0; h < n; h++){
		a[h] = h + 1;
	}
	
	for (int x = 0; x < m; x++){
		int i, j;
		scanf("%d %d", &i, &j);
		int avg = (i + j)/2;
		for (int y = i; y <= avg; y++){
			int temp = a[y - 1];
			a[y - 1] = a[j - 1];
			a[j - 1] = temp;
			j--;
		}
		
	}
	
	for (int z = 0; z < n; z++){
		printf("%d ", a[z]);
	}
	
	return 0;
}
