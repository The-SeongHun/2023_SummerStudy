#include <stdio.h>
#include <string.h>
#include <math.h>

// 체스판 다시 칠하기
// 체스판을 만드는 모든 경우를 시도하여 최적의 방법을 찾는 문제

int main() {
	int n, m;
	scanf("%d %d", &n, &m);
	
	char bw[n][m];
	
	for (int i = 0; i < n; i++) {
		scanf("%s", bw[i]);
	}
	
	int size = (n - 7) * (m - 7);
	int a[size];
	int num = 0;
	
	for (int i = 0; i < n - 7; i++) {
		for (int j = 0; j < m - 7; j++) {
			int modify1 = 0, modify2 = 0;
			
			for (int k = i; k < i + 8; k++) {
				for (int l = j; l < j + 8; l++) {
					if ((k + l) % 2 == 0 && bw[k][l] == 'B') modify1++;
					else if ((k + l) % 2 == 0 && bw[k][l] == 'W') modify2++;
					else if ((k + l) % 2 == 1 && bw[k][l] == 'W') modify1++;
					else modify2++;
				}
			}
			if (modify1 > modify2) a[num] = modify2;
			else a[num] = modify1;
			num++;
		}
	}
	
	int min = 64;
	for (int i = 0; i < size; i++) {
		if (a[i] < min) min = a[i];
	}
	
	printf("%d\n", min);
	
	return 0;
}
