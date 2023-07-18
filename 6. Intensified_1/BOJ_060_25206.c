#include <stdio.h>
#include <string.h>
#include <stdbool.h>
// 너의 평점은
// 열심히 문제를 푸시는 여러분은 A+입니다.

int main() {
	char name[50];
	float credit, score_sum = 0, credit_sum = 0;
	char score[3];
	float float_score;
	
	for (int i = 0; i < 20; i++) {
		scanf("%s %f %s", name, &credit, score);
		
		float_score = 69 - score[0];
		
		if (score[1] == '+') float_score += 0.5;
		
		else if (score[0] == 'P') {
			credit = 0;
			float_score = 0;
		}
		
		// if (score[0] == 'A') { //수정하기 장준일 말한 대로
		// 	if (score[1] == '+') float_score = 4.5;
		// 	else float_score = 4.0;
		// }
		// else if (score[0] == 'B') {
		// 	if (score[1] == '+') float_score = 3.5;
		// 	else float_score = 3.0;
		// }
		// else if (score[0] == 'C') {
		// 	if (score[1] == '+') float_score = 2.5;
		// 	else float_score = 2.0;
		// }
		// else if (score[0] == 'D') {
		// 	if (score[1] == '+') float_score = 1.5;
		// 	else float_score = 1.0;
		// }
		// else if (score[0] == 'P') credit = 0;
		
		credit_sum += credit;
		score_sum += float_score * credit;
		
		
	}
	printf("%f\n", score_sum/credit_sum);

	return 0;
}

