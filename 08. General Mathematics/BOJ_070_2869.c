#include <stdio.h>
#include <string.h>

// 달팽이는 올라가고 싶다
// 달팽이의 움직임을 계산하는 문제

int main() {
	int a, b, v, result;
	
	scanf ("%d %d %d", &a, &b, &v);
	
	if ((v - a) % (a - b) == 0) result = (v - a) / (a - b) + 1;
	else result = (v - a) / (a - b) + 2;
	
	printf ("%d", result);
	
	return 0;
}

// 노트에 계산해서 풂. x(a-b) >= v-a // result = x + 1
