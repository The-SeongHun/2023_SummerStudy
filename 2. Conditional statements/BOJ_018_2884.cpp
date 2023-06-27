#include <stdio.h>
// 알람시계

int main(){
	int h, m;
	scanf("%d %d", &h, &m);
	
	if (m - 45 < 0){
		h = h - 1;
		m = 60 + (m - 45);
		
		if (h < 0){
			h = h + 24;
		}
	}
	else {
		m = m - 45;
	}

	printf("%d %d\n", h, m);
	return 0;
}
