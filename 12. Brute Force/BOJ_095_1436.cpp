#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdbool.h>

// // 영화감독 숌
// // N번째 종말의 수가 나올 때까지 차례대로 시도하는 문제

bool judge (int a);

int main() {
	int n;
	scanf("%d", &n);
	
	int m = 0, i = 666, result = 0;
	while (m != n) {
		if (judge(i) == true) {
			m++;
			result = i;
		}
		
		i++;
	}
	
	printf("%d\n", result);
}


bool judge (int a) {
	char aa[8] = {0};
	sprintf(aa, "%d", a);
	for (int i = 0; i < strlen(aa) - 2; i++) {
		if (aa[i] == '6' && aa[i + 1] == '6' && aa[i + 2] == '6') {
			return true;
		}
	}
	
	return false;	
}


// int main() {
// 	int a;
// 	scanf("%d", &a);
// 	char mid = (char)a + '0';
// 	printf("%d", mid - '0');
// 	char aa[10] = {mid};
// 	printf("%c", aa[0]);
// 	a = aa[0];
// 	printf("%d", a - '0');
// }


// bool judge (int a) {
// 	int aa[];
// 	int b = a;
// 	int sqof10 = 10;
// 	int cipher = 0;
	
// 	while (b / sqof10 >= 1) {
// 		sqof10 *= 10;
// 		cipher += 1;
// 	}
	
// 	while
	
// 	return false;	
// }
