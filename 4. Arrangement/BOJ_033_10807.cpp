#include <stdio.h>
//개수 세기

int main(){
	int n, v;
	int ea = 0;
	int a[101]; // {0}으로 초기화하면 배열 크기 정해짐.
	scanf("%d", &n);
	
	for (int i = 0; i < n; i++){
		scanf("%d", &a[i]);
	}
	scanf("%d", &v);
	
	for (int j = 0; j < n; j++){
		if (a[j] == v) ea += 1;
	}
	
	printf("%d\n", ea);
	return 0;
}
