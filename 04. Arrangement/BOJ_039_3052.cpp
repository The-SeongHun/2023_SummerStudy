#include <stdio.h>
//나머지

int main(){
	int n, val, result;
	result = 0;
	val = 0;
	int a[10] = {0};
	int remain[10] = {0};
	
	for (int i = 0; i <= 9; i++){
		val = 0;
		scanf("%d", &a[i]);
		remain[i] = a[i] % 42;
		for (int j = 0; j < i; j++){
			if (remain[j] == remain[i]) val += 1;
		}
		if (val == 0){
			result++;
		}
	}
	printf("%d\n", result);
	
	return 0;
}
