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
	
	printf("���ϴ� ������ �Է��ϼ��� : ");
	scanf("%d", &inputYear);
	
	for(int i =1; i<13 ; i ++) {
		if(i==1||i==3||i==5||i==6||i==8||i==10||i==12) {
			printf("%d�� : 31��\n",i);
		} else if(i==4||i==7||i==9||i==11) {
			printf("%d�� : 30��\n",i);
		} else {
			if(checkMonth(inputYear)==true) {
				printf("2�� : 29��\n");
			} else {
				printf("2�� ; 28��\n");
			}
		} 
	}	
	return 0;
}
