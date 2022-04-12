#include <stdio.h>


int main () {
	int inputYear = 0;
	
	printf("원하는 년도를 입력하세요: ");
	scanf("%d", &inputYear); 
	
	if((inputYear % 4 ==0 && inputYear%100!=0)||(inputYear%400==0)) {
		printf("윤년 입니다.");
	} else {
		printf("윤년이 아닙니다.");
	}
		
	return 0;
}
