#include <stdio.h>
#include <string.h>

// 달팽이는 올라가고 싶다
// 달팽이의 움직임을 계산하는 문제

int main() {
	int a, b, v;
	
	scanf ("%d %d %d", &a, &b, &v);
	int i = 0;
	
	v -= b;
	
	while (1) {
		v += b;
		v -= a;
		
		i++;
		
		if (v < 0) break;
	}
	
	printf ("%d", i);
	
	return 0;
}

