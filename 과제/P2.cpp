#include <stdio.h>
#include <stdlib.h>

int main() {
	int A = 0;
	int B = 0;
	int max = 0;
	
	printf("���� A �Է�: ");
	scanf("%d",&A);
	printf("���� B �Է�: ");
	scanf("%d",&B);
	
	if(A > B) {
		max =A;
	} else if(B > A) {
		max = B;
	} else {
		printf("�� ���ڴ� �����ϴ�.");
		exit(0); 
	}
	
	printf("ū ���ڴ� %d�Դϴ�.", max);

	return 0; 
}
