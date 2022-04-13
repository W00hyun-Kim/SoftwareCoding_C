#include <stdio.h>

int checkMonth(int year) {	
	if((year % 4 ==0 && year%100!=0)||(year%400==0)) {
		return 1;
	} 	
	return 0;
}

//������ �� �� ���ϱ� 
int get_day_of_month(int year, int month) {
	
	int day_of_month[13] = {0,31,28,31,30,31,30,31,31,30,31,30,31};
	day_of_month[2] = day_of_month[2]+checkMonth(year);
	
	return day_of_month[month];
}

//1���� ���� ���ϱ�
int get_day(int year, int month) {
	int past = 0;
	for(int i =1900; i<year; i++) {
		past = past + 365 + checkMonth(i);
	}
	for(int j=1; j<month; j++) {
		past = past + get_day_of_month(year,j);
	}
	return (past+1) %7;  //1:������, 2:ȭ����........6:�����, 7:�Ͽ��� 
} 

void printCal (int startDay, int endDay) {
//	printf("%d",startDay);
	printf(" �� �� ȭ �� �� �� �� \n");
	for(int i=0; i<startDay; i++) {
		printf("   ");
	}
	for(int day=1,line = startDay; day<=endDay; day++, line++) {
		printf(" %2d",day);
		if(line%7==6) {
			printf("\n");
		}
	}
	printf("\n\n");	
}


int main() {
	int year,month;

	while(true) {
		printf("�⵵ �Է�: ");
		scanf("%d",&year);
		if(year==0) {
			break;
		}
		printf("�� �Է� : ");
		scanf("%d",&month);
		printf("\n");
		int startDay = get_day(year,month);
		int endDay = get_day_of_month(year,month);
		printf("======%d�� %d��======\n",year,month);	
		printCal(startDay, endDay);
	}
	printf("�����մϴ�.");
	
}
