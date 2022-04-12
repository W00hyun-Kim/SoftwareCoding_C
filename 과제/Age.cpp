#include <stdio.h>
#include <time.h>

int main() {
	int inputNumber = 0;
	int yearIndex =0;
	char num[6];
	int year = 0;
	int month = 0;
	int day =0;
	int man = 0;
		
	struct tm*t;
	time_t base = time(NULL);	
	t = localtime(&base);	
			
	printf("주민번호 앞자리 입력:");
	//배열에 넣기 
	scanf("%s", &num);					
	
	//주민등록번호 앞 두자리(연도) 
	yearIndex = (num[0]-48)*10 + (num[1]-48);
	if(yearIndex <22) {
		year = 2000 + yearIndex;
	} else {
		year = 1900 + yearIndex ; 
	}		
	
	//기준 나이 
	int age = (t->tm_year+1900)-year + 1;
	
	//주민번호 월일 구하기
	month = (num[2]-48)*10 + (num[3]-48);
	day = (num[4]-48)*10 + (num[5]-48);
	
	//생일이 지났으면 -1, 생일 안지났으면 -2 	
	//월이 지났을 때(생일이 지났음) 
	if(month>t->tm_mon+1) {
		 man = age -2;
	
	//월이 같을 때 일 수 비교 
	} else if(month==t->tm_mon+1) {
		if(day> t->tm_mday) {
			man = age -2;
		} else {
			man = age -1;
		}
	} else {
		man = age-1;
	}
	
	printf("오늘(%d년 %d월 %d일)기준 나이는 %d세, 만 나이는 %d세 입니다."
											,t->tm_year+1900,t->tm_mon+1,t->tm_mday, age, man);


	 


	
	 
	

}
