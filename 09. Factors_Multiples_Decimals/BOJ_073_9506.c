#include <stdio.h>
#include <string.h>

// 약수들의 합
// 약수를 구하면서 주어진 수가 완전수인지 판별하는 문제
int init(int, int arr[]);
int save_factors(int a, int sum, int arr[]);

int main() {
	while (1) {
		int n, k, sum = 0;
		
		scanf("%d", &n);
		
		if (n == -1) break;
		int factor[n];
		
		init(n, factor); // 배열을 매개변수로 활용 후 호출할 때는 뒤에 대괄호 x
		
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

int save_factors(int a, int sum, int arr[]) {
	
	int i = 1;
	
	for (int j = 0; j < a; j++) {
		
		while (i <= a) {
			if (a % i == 0) {
				arr[j] = i;
				i++;
				break;
			}
			
			i++;
			continue;
		}
		
		sum += arr[j];
	}

	return sum;
}