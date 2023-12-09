#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>

// 수 정렬하기
// 시간 복잡도가 O(n²)인 정렬 알고리즘으로 풀 수 있습니다. 예를 들면 삽입 정렬, 거품 정렬 등이 있습니다.


int main() {
	int n;
	scanf("%d", &n);
	
	int a[n];
	for (int i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}
	
	for (int i = 0; i < n - 1; i++) {
		for (int j = i; j >= 0; j--) {
			if (a[j] > a[j + 1]) {
				int temp;
				temp = a[j];
				a[j] = a[j + 1];
				a[j + 1] = temp;
			}
			
			else break;
		}
	}
	
	for (int i = 0; i < n; i++) {
		printf("%d\n", a[i]);
	}
}

