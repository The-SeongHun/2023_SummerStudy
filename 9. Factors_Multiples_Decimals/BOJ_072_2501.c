#include <stdio.h>
#include <string.h>

// 약수 구하기
// 주어진 수의 약수를 구하는 문제

int main() {
	int n, k;
	
	scanf("%d %d", &n, &k);
	
	int factor[n];
	
	for (int i = 0; i < n; i++){
		factor[i] = 0;
	}	
	
	int i = 1;
	
	for (int j = 0; j < n; j++) {
		
		while (i <= n) {
			if (n % i == 0) {
				factor[j] = i;
				i++;
				break;
			}
			
			i++;
			continue;
		}
		
	}
	
	printf("%d\n", factor[k - 1]);
	
	return 0;
}
