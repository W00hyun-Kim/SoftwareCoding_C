#include <stdio.h>
#include <stdlib.h>

int main() {
	int A = 0;
	int B = 0;
	int C = 0;
	int D = 0;
	int E = 0;
	
	printf("숫자 A 입력: ");
	scanf("%d", &A);
	printf("숫자 B 입력: ");
	scanf("%d", &B);
	printf("숫자 C 입력: ");
	scanf("%d", &C);
	printf("숫자 D 입력: ");
	scanf("%d", &D);
	printf("숫자 E 입력: ");
	scanf("%d", &E);
	
	int numbers[5] = {A,B,C,D,E};
	int max = numbers[0];
	int min = numbers[0];
	
	for(int i =1; i<5 ; i++) {
		if(max<numbers[i]) {
			max = numbers[i];
		} 
		if(min>numbers[i]) {
			min = numbers[i];
		}
	}	
	printf("최대값은 %d입니다.\n",max);
	printf("최저값은 %d입니다.",min);
			
	return 0;
}


