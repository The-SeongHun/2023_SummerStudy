#include <stdio.h>
#include <string.h>
#include <stdbool.h>
//다이얼 

int main() {
	int sec = 0;
	char num[15];
	
	scanf("%s", num);

	for (int i = 0; i < strlen(num); i++) {
		if (num[i] <= 79)  sec += (num[i] - 56)/3;
		else if (num[i] <= 83) sec += 8;
		else if (num[i] <= 86) sec += 9;
		else sec += 10;
	}
	 
	printf("%d\n", sec);

	return 0;
}
