#include <stdio.h>
#include <stdbool.h>

bool checkMonth(int year) {
	bool check = true;		
	if((year % 4 ==0 && year%100!=0)||(year%400==0)) {
		check = true;
	} else {
		check = false;
	}		
	return check;
}

int main() {
	int inputYear = 0;
	
	printf("원하는 연도를 입력하세요 : ");
	scanf("%d", &inputYear);
	
	for(int i =1; i<13 ; i ++) {
		if(i==1||i==3||i==5||i==6||i==8||i==10||i==12) {
			printf("%d월 : 31일\n",i);
		} else if(i==4||i==7||i==9||i==11) {
			printf("%d월 : 30일\n",i);
		} else {
			if(checkMonth(inputYear)==true) {
				printf("2월 : 29일\n");
			} else {
				printf("2월 ; 28일\n");
			}
		} 
	}	
	return 0;
}
