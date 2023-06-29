#include <stdio.h>
//X보다 작은 수

int main(){
	int n, x;
	int ea = 0;
	int a[10001]; // {0}으로 초기화하면 배열 크기 정해짐.
	scanf("%d %d", &n, &x);
	
	for (int i = 0; i < n; i++){
		scanf("%d", &a[i]);
		if (a[i] < x) printf("%d ", a[i]);
	}

	return 0;
}
