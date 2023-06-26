#include <stdio.h>

int main(){
	int h, m, t;
	scanf("%d %d", &h, &m);
	scanf("%d", &t);
	
	if (m + t >= 60){
		h = h + ((m + t) / 60);
		m = (m + t) % 60;
		
		if (h >= 24){
			h = h - 24;
		}
	}
	else {
		m = m + t;
	}

	printf("%d %d\n", h, m);
	return 0;
}
