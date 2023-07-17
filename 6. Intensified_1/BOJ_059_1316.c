#include <stdio.h>
#include <string.h>
#include <stdbool.h>
//그룹 단어 체커
//조건에 맞는 문자열을 찾는 문제

int main() {
	int n;
	scanf("%d", &n);
	
	int result = 0;
	
	for(int h = 0; h < n; h++) {
		
		char str[100] = {0};
		scanf("%s", str);
		
		int len = strlen(str);
		int val1 = 0;
		int val2 = 0;
		
		int count[32] = {0};
		
		for (int i = 0; i < 32; i++) {
		
			for (int j = 0; j < len; j++) {
				if (str[j] == i + 97)  count[i]++;
			}
			
			if (count[i] != 0) val1++;
		}
		
		
		for (int i = 0; i < strlen(str) ; i++) {
			if (str[i] != str[i + 1]) val2++;
		}
		
		//printf("%d %d\n", val1, val2);
		
		if (val1 == val2) {
			result++;
		}
	}

	printf("%d\n", result);

	return 0;
}

