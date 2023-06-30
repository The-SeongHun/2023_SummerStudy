#include <stdio.h>
//최소, 최대

int main(){
	int n, max, min;
	max = -1000000;
	min = 1000000;
	scanf("%d", &n);
	int a[n]; // {0}으로 초기화하면 배열 크기 정해짐.
	
	
	for (int i = 0; i < n; i++){
		scanf("%d", &a[i]);
		if (a[i] > max) max = a[i];
		if (a[i] < min) min = a[i]; 
	}
	
	printf("%d %d\n", min, max);
	
	return 0;
}
