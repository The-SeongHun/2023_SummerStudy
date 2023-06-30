#include <stdio.h>
//최댓값

int main(){
	int j, k, l, n, m;
	scanf("%d %d", &n, &m);
	int a[n] = {0}; // {0}으로 초기화하면 배열 크기 정해짐.
	
	for (int i = 0; i < m; i++){
		scanf("%d %d %d", &j, &k, &l);
		for (int h = j - 1; h < k; h++){
			a[h] = l;
		}
	}
	for (int g = 0; g < n; g++){
		printf("%d ", a[g]);	
	}
	
	return 0;
}
