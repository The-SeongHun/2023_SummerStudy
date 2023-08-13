#include <stdio.h>
//최댓값

int main(){
	int n, x, max;
	int a[9]; // {0}으로 초기화하면 배열 크기 정해짐.
	max = 0;
	
	for (int i = 0; i < 9; i++){
		scanf("%d", &a[i]);
		if (a[i] > max) {
			max = a[i];
			x = i + 1;
		}
	}
	
	printf("%d\n%d", max, x);
	
	return 0;
}
