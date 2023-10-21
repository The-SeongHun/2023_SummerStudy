#include <stdio.h>
#include <string.h>
#include <math.h>

// 소수
// 2부터 X-1까지 모두 나눠서 X가 소수인지 판별하는 문제 2
// 에라토스테네스의 체

int init(int a, int arr[]);
int count_factors(int a);

int main() {
	int m, n;
	
	scanf("%d\n%d", &m, &n);
	
	int num[n + 1];
	init(n, num);	
	
	//double std = pow(n, 0.5);
	int sum = 0, min = 0;
	
	for (int i = 1; i <= n; i++) {
		if (num[i] == 1) continue;
		
		if (count_factors(num[i]) == 2) {
			
			if (num[i] >= m) {
				
				min = num[i];
				break;
			}
		}
		
	}
	
	for (int i = 2; i <= n; i++) {
		if (num[i] == 1) continue;
		
		if (count_factors(num[i]) == 2) {
			
			for (int j = 2; i * j <= n; j++) {
				num[i * j] = 1;
			}
			
			if (num[i] >= m) {
				sum += num[i];
			}
		}
		
	}
	
	if (sum == 0) printf("-1\n");
	else printf("%d\n%d\n", sum, min);

	return 0;
}

int init(int a, int arr[]) { // 배열을 매개변수로 활용, 선언할 때는 arr[] 또는 *arr
	
	for (int i = 1; i <= a; i++){
		arr[i] = i;
	}
	
	return 0;
}

int count_factors(int a) {
	
	int count = 0;
	
	for (int i = 1; i <= a; i++) {
		if (a % i == 0) count++;
	}

	return count;
}
