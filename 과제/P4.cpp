#include <stdio.h>


int main () {
	int inputYear = 0;
	
	printf("���ϴ� �⵵�� �Է��ϼ���: ");
	scanf("%d", &inputYear); 
	
	if((inputYear % 4 ==0 && inputYear%100!=0)||(inputYear%400==0)) {
		printf("���� �Դϴ�.");
	} else {
		printf("������ �ƴմϴ�.");
	}
		
	return 0;
}
