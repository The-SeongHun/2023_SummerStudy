#include <stdio.h>
#include <string.h>

// 약수들의 합
// 약수를 구하면서 주어진 수가 완전수인지 판별하는 문제

int main() {
	while (1) {
		int n, k, sum = 0;
		
		scanf("%d", &n);
		if (n == -1) break;
		
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
			
			sum += factor[j];
		}
		
		if (n == sum - n) {
			printf("%d = %d ", n, factor[0]);
			
			for (int i = 1; ; i++) {
				if (factor[i] == n) break;
				
				printf("+ %d ", factor[i]);
			}
			printf("\n");
		}
		
		else printf("%d is NOT perfect.\n", n);
	}
	
	
	return 0;
}
