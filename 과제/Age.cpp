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
			
	printf("�ֹι�ȣ ���ڸ� �Է�:");
	//�迭�� �ֱ� 
	scanf("%s", &num);					
	
	//�ֹε�Ϲ�ȣ �� ���ڸ�(����) 
	yearIndex = (num[0]-48)*10 + (num[1]-48);
	if(yearIndex <22) {
		year = 2000 + yearIndex;
	} else {
		year = 1900 + yearIndex ; 
	}		
	
	//���� ���� 
	int age = (t->tm_year+1900)-year + 1;
	
	//�ֹι�ȣ ���� ���ϱ�
	month = (num[2]-48)*10 + (num[3]-48);
	day = (num[4]-48)*10 + (num[5]-48);
	
	//������ �������� -1, ���� ���������� -2 	
	//���� ������ ��(������ ������) 
	if(month>t->tm_mon+1) {
		 man = age -2;
	
	//���� ���� �� �� �� �� 
	} else if(month==t->tm_mon+1) {
		if(day> t->tm_mday) {
			man = age -2;
		} else {
			man = age -1;
		}
	} else {
		man = age-1;
	}
	
	printf("����(%d�� %d�� %d��)���� ���̴� %d��, �� ���̴� %d�� �Դϴ�."
											,t->tm_year+1900,t->tm_mon+1,t->tm_mday, age, man);


	 


	
	 
	

}
