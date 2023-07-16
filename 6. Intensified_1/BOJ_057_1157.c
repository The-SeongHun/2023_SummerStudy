#include <stdio.h>
#include <string.h>
#include <stdbool.h>
//단어 공부 

int main() {
	char str[1000000];
	
	scanf("%s", str);
	
	int len = strlen(str);
	int count[32] = {0};
	int maxi = 0;
	int val = 0;
	
	for (int i = 0; i < 32; i++) {
		
		for (int j = 0; j < len; j++) {
			if (str[j] >= 97)  str[j] -= 32;
			
			if (str[j] == i + 65)  count[i]++;
		}
		
		if (count[i] >= count[maxi])  maxi = i;
	}
	
	for (int i = 0; i < 32; i++) {	// 뒤 알파벳이 먼저 나오는 경우 위의 for문과 합쳤을 때 오류 발생, for문을 분리하여 완전히 완성된 count 배열을 활용해야 함.
		if (count[i] == count[maxi])  val++;
	}
	
	if (val >= 2)  printf("?");
	else printf("%c\n", maxi + 65); 
	

	return 0;
}

