#include <stdio.h>
#include <stdlib.h>

int main() {
	int A = 0;
	int B = 0;
	int C = 0;
	int D = 0;
	int E = 0;
	
	printf("���� A �Է�: ");
	scanf("%d", &A);
	printf("���� B �Է�: ");
	scanf("%d", &B);
	printf("���� C �Է�: ");
	scanf("%d", &C);
	printf("���� D �Է�: ");
	scanf("%d", &D);
	printf("���� E �Է�: ");
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
	printf("�ִ밪�� %d�Դϴ�.\n",max);
	printf("�������� %d�Դϴ�.",min);
			
	return 0;
}


