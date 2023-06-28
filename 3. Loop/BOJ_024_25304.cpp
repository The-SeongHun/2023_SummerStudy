#include <stdio.h>
//영수증

int main(){
	int total, n;
	int sum = 0;
	scanf("%d", &total);
	scanf("%d", &n);
	
	for (int i = 1; i <= n; i++){
		int price, ea;
		scanf("%d %d", &price, &ea);
		sum += price * ea;
	}
	
	if (total == sum) printf("Yes\n");
	else printf("No");
	
	return 0;
}
