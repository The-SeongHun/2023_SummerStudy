#include <stdio.h>
//A+B - 4

int main(){
	int a, b;
	while (scanf("%d %d", &a, &b) != EOF){  // EOF : End of File, 윈도우에서는 Ctrl + z 로 강제실행
		printf("%d\n", a + b);
	}
	
	return 0;
}
