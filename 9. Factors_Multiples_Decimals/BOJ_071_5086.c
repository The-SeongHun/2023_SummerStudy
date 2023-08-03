#include <stdio.h>
#include <string.h>

// 배수와 약수
// 배수와 약수를 배우는 문제

int main() {
	int a, b;
	
	while (1) {
		scanf("%d %d", &a, &b);
		
		if (a == 0 && b == 0) break;
		if (a % b == 0) printf("multifle\n");
		else if (b % a == 0) printf("factor\n");
		else printf("neither\n");
		
	}
	
	return 0;
}

// #include <stdio.h>

// int main () {
//     int a, b;
//     while (1) {
//         scanf("%d %d", &a, &b);
//         if (a == 0 && b == 0) break;
//         if (b % a == 0) {
//             printf("factor\n");
//         } else if (a % b == 0) {
//             printf("multiple\n");
//         } else {
//             printf("neither\n");
//         }
//     }
//     return 0;
// }