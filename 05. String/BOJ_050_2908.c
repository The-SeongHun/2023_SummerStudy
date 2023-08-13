#include <stdio.h>
#include <string.h>
#include <stdbool.h>
//상수 

int main() {

	char a[3], b[3];
	
	scanf("%s %s", a, b);

	bool val;

	for (int i = 2; i >= 0; i--) {
		if (a[i] > b[i]) {
			val = true;
			break;
		}
		else if (a[i] < b[i]) {
			val = false;
			break;
		}
	}

	for (int i = 2; i >= 0; i--) {
		if (val) printf("%c", a[i]);
		else printf("%c", b[i]);
	}

	 

	return 0;
}