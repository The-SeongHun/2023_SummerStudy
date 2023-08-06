#include <stdio.h>
#include <string.h>

// 소수 찾기
// 2부터 X-1까지 모두 나눠서 X가 소수인지 판별하는 문제 1

int init(int, int arr[]);
int save_factors(int a, int sum, int arr[]);

int main() {
	while (1) {
		int n, k, sum = 0;
		
		scanf("%d", &n);
		
		int num[n];
		
		for (int i = 0; i < n; i++) {
			scanf("%d", num[i]);
		}
		
		for (int i = 0; i < n; i++) {
			init(num[i], factor); // 배열을 매개변수로 활용 후 호출할 때는 뒤에 대괄호 x	
		}
		
		
		sum = save_factors(n, sum, factor);
		
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

int init(int a, int arr[]) { // 배열을 매개변수로 활용, 선언할 때는 arr[] 또는 *arr
	
	for (int i = 0; i < a; i++){
		arr[i] = 0;
	}	
}

int count_factors(int a, int sum, int arr[]) {
	
	int count[a];
	
	for (int j = 0; j < a; j++) {
		int count = 0;
		
		for (int i = 0; i < num[j]; i++) {
			if (num[j] % i == 0) count++;
		}
		
		count[j] = count;
	}

	return count[];
}