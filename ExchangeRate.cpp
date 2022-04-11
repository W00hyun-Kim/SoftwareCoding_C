#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void koreanwonConverter(int returnWon) {
	int returnWon1000 =returnWon/1000;
	returnWon = returnWon - returnWon1000*1000;
	int returnWon500 = returnWon/500;
	returnWon = returnWon - returnWon500 * 500;
	int returnWon100 = returnWon/100;
	returnWon = returnWon - returnWon100 * 100;
	int returnWon50 = returnWon/50;
	returnWon = returnWon - returnWon50 * 50;
	int returnWon10 = returnWon/10;
		
	printf("1000��: %d��, 500��: %d��, 100��: %d�� 50��: %d�� 10��: %d��\n", returnWon1000,returnWon500, returnWon100, returnWon50, returnWon10); 
	
}


int main() {
	const float RATE_USD = 1233.1;
	const float RATE_JPY = 986.92;
	const float RATE_CNY = 193.23;
	const float RATE_EUR = 1343.00;
	const float RATE_GBP = 1604.85;
		
	//	int inputWon = 50000;
	float outputDollar = 0;
	float outputJPY = 0;
	float outputCNY = 0;
	float outputEUR = 0;
	float outputGBP = 0;
	int returnWon = 0;

		
	int inputWon=0;	
	printf("ȯ���� ���ϴ� �ݾ��� �Է��ϼ���(��ȭ) : ");
	scanf("%d", &inputWon);
	printf("\n");
//	int inputNumber = 0;
//	printf("ȯ���� ��ȭ�� �����ϼ��� (1: USD, 2:JPY, 3:EUR, 4:CNY, 5:GBP) : ");
//	scanf("%d", &inputNumber);
//	printf("\n\n");
	
	
	//�޷� ȯ�� 
	outputDollar = inputWon / RATE_USD;
	int getDollar = (int)outputDollar;
	// outputDollar = 40.55 ==> 0.55 
	returnWon = inputWon - getDollar * RATE_USD;
	returnWon = returnWon /10 *10;
	printf("[USD ȯ��] \n"); 
	printf("%5d �� -> %5d �޷� ȯ�� \n", inputWon, getDollar);
	printf("ȯ�� : 1000�޷�:%d��/ 100�޷�: %d��/10�޷�: %d��/1�޷�:%d��\n",getDollar/1000, getDollar/100%10,getDollar/10%10, getDollar%10);
	printf("�ܵ� : %d��\n",returnWon);	
	koreanwonConverter(returnWon);
	printf("\n\n");
		
			
	//��ȭ ȯ�� 
	returnWon=0;
	outputJPY = inputWon/RATE_JPY*100;
	//outputJPY =  5066.27 ==>0.27
	returnWon = outputJPY * 100;
	returnWon = returnWon % 100 *RATE_JPY /100; 
	returnWon = returnWon / 10 * 10;
	int getJPY = (int)outputJPY;
	printf("[JPY ȯ��]\n"); 
	printf("%5d �� -> %5d �� ȯ�� \n", inputWon, getJPY);
	printf("ȯ�� : 1000��:%d��/ 100��: %d��/10��: %d��/1��:%d��\n",getJPY/1000, getJPY/100%10,getJPY/10%10, getJPY%10);
	printf("�ܵ� : %d��\n",returnWon);
	koreanwonConverter(returnWon);
	printf("\n\n");

	
	//���� ȯ�� 
	returnWon=0;
	outputCNY = inputWon/RATE_CNY;
	//outputCNY =  258.76 ==> 0.76
	returnWon = outputCNY * 100;
	returnWon = returnWon % 100 *RATE_CNY /100;
	returnWon = returnWon / 10 * 10;
	int getCNY = (int)outputCNY; 
	printf("[CNY ȯ��]\n"); 
	printf("%5d �� -> %5d ���� ȯ�� \n", inputWon, getCNY);
	printf("ȯ�� : 1000����:%d��/ 100����: %d��/10����: %d��/1����:%d��\n",getCNY/1000, getCNY/100%10,getCNY/10%10, getCNY%10);
	printf("�ܵ� : %d��\n",returnWon);	
	koreanwonConverter(returnWon);
	printf("\n\n");

	
	//���� ȯ�� 
	returnWon=0;
	outputEUR = inputWon/RATE_EUR;
	//outputEUR =  37.25 ==> 0.25
	returnWon = outputEUR * 100;
	returnWon = returnWon % 100 *RATE_EUR /100;
	returnWon = returnWon / 10 * 10;
	int getEUR = (int)outputEUR;
	printf("[EUR ȯ��]\n"); 
	printf("%5d �� -> %5d ���� ȯ�� \n", inputWon, getEUR);
	printf("ȯ�� : 1000����:%d��/ 100����: %d��/10����: %d��/1����:%d��\n",getEUR/1000, getEUR/100%10,getEUR/10%10, getEUR%10);
	printf("�ܵ� : %d��\n",returnWon);	
	koreanwonConverter(returnWon);
	printf("\n\n");

	
	//�Ŀ��  ȯ�� 
	returnWon=0;
	outputGBP = inputWon/RATE_GBP;
	//outputGBP =  31.16 ==> 0.16
	returnWon = outputGBP * 100;
	returnWon = returnWon % 100 *RATE_GBP /100;
	returnWon = returnWon / 10 * 10;
	int getGBP = (int)outputGBP;
	printf("[GBP ȯ��]\n"); 
	printf("%5d �� -> %5d �Ŀ�� ȯ�� \n", inputWon, getGBP);
	printf("ȯ�� : 1000�Ŀ��:%d��/ 100�Ŀ��: %d��/10�Ŀ��: %d��/1�Ŀ��:%d��\n",getGBP/1000, getGBP/100%10,getGBP/10%10, getGBP%10);
	printf("�ܵ� : %d��\n",returnWon);
	koreanwonConverter(returnWon);
	printf("\n\n");

			
	return 0;
}



