#include <stdio.h>
//과제 안 내신 분..?

int main(){
	int val;
	int a[28] = {0};
	
	for (int h = 0; h < 28; h++){
		scanf("%d", &a[h]);
	}
		
	for (int i = 1; i <= 30; i++){		//i가 오름차순이므로 순서대로 출력해버리면 됨
		val = 0;
		for (int j = 0; j < 28; j++){
			if (i == a[j]) val++;
		}
		if (val == 0) printf("%d\n", i);
	}
	
	return 0;
}
