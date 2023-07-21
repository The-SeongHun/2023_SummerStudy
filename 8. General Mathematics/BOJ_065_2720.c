#include <stdio.h>
#include <string.h>
//#include <stdbool.h>
// #include <stdlib.h> //abs, labs
// #include <math.h> //abs, labs, fabs
// 세탁소 사장 동혁

int main() {
	int t;
	scanf ("%d", &t);
	
	for (int i = 0; i < t; i++) {
		int re;
		scanf("%d", &re);
		
		int quarter = re / 25;
		int dime = (re % 25) / 10;
		int nickel = (re - (25 * quarter) - (10 * dime)) / 5;
		int penny = re % 5;
		
		printf("%d %d %d %d\n", quarter, dime, nickel, penny);
	}
	
	return 0;
}

