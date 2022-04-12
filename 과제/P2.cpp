#include <stdio.h>
#include <stdlib.h>

int main() {
	int A = 0;
	int B = 0;
	int max = 0;
	
	printf("숫자 A 입력: ");
	scanf("%d",&A);
	printf("숫자 B 입력: ");
	scanf("%d",&B);
	
	if(A > B) {
		max =A;
	} else if(B > A) {
		max = B;
	} else {
		printf("두 숫자는 같습니다.");
		exit(0); 
	}
	
	printf("큰 숫자는 %d입니다.", max);

	return 0; 
}
