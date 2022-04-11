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
		
	printf("1000원: %d개, 500원: %d개, 100원: %d개 50원: %d개 10원: %d개\n", returnWon1000,returnWon500, returnWon100, returnWon50, returnWon10); 
	
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
	printf("환전을 원하는 금액을 입력하세요(원화) : ");
	scanf("%d", &inputWon);
	printf("\n");
//	int inputNumber = 0;
//	printf("환전할 외화를 선택하세요 (1: USD, 2:JPY, 3:EUR, 4:CNY, 5:GBP) : ");
//	scanf("%d", &inputNumber);
//	printf("\n\n");
	
	
	//달러 환전 
	outputDollar = inputWon / RATE_USD;
	int getDollar = (int)outputDollar;
	// outputDollar = 40.55 ==> 0.55 
	returnWon = inputWon - getDollar * RATE_USD;
	returnWon = returnWon /10 *10;
	printf("[USD 환전] \n"); 
	printf("%5d 원 -> %5d 달러 환전 \n", inputWon, getDollar);
	printf("환전 : 1000달러:%d개/ 100달러: %d개/10달러: %d개/1달러:%d개\n",getDollar/1000, getDollar/100%10,getDollar/10%10, getDollar%10);
	printf("잔돈 : %d원\n",returnWon);	
	koreanwonConverter(returnWon);
	printf("\n\n");
		
			
	//엔화 환전 
	returnWon=0;
	outputJPY = inputWon/RATE_JPY*100;
	//outputJPY =  5066.27 ==>0.27
	returnWon = outputJPY * 100;
	returnWon = returnWon % 100 *RATE_JPY /100; 
	returnWon = returnWon / 10 * 10;
	int getJPY = (int)outputJPY;
	printf("[JPY 환전]\n"); 
	printf("%5d 원 -> %5d 엔 환전 \n", inputWon, getJPY);
	printf("환전 : 1000엔:%d개/ 100엔: %d개/10엔: %d개/1엔:%d개\n",getJPY/1000, getJPY/100%10,getJPY/10%10, getJPY%10);
	printf("잔돈 : %d원\n",returnWon);
	koreanwonConverter(returnWon);
	printf("\n\n");

	
	//위안 환전 
	returnWon=0;
	outputCNY = inputWon/RATE_CNY;
	//outputCNY =  258.76 ==> 0.76
	returnWon = outputCNY * 100;
	returnWon = returnWon % 100 *RATE_CNY /100;
	returnWon = returnWon / 10 * 10;
	int getCNY = (int)outputCNY; 
	printf("[CNY 환전]\n"); 
	printf("%5d 원 -> %5d 위안 환전 \n", inputWon, getCNY);
	printf("환전 : 1000위안:%d개/ 100위안: %d개/10위안: %d개/1위안:%d개\n",getCNY/1000, getCNY/100%10,getCNY/10%10, getCNY%10);
	printf("잔돈 : %d원\n",returnWon);	
	koreanwonConverter(returnWon);
	printf("\n\n");

	
	//유로 환전 
	returnWon=0;
	outputEUR = inputWon/RATE_EUR;
	//outputEUR =  37.25 ==> 0.25
	returnWon = outputEUR * 100;
	returnWon = returnWon % 100 *RATE_EUR /100;
	returnWon = returnWon / 10 * 10;
	int getEUR = (int)outputEUR;
	printf("[EUR 환전]\n"); 
	printf("%5d 원 -> %5d 유로 환전 \n", inputWon, getEUR);
	printf("환전 : 1000유로:%d개/ 100유로: %d개/10유로: %d개/1유로:%d개\n",getEUR/1000, getEUR/100%10,getEUR/10%10, getEUR%10);
	printf("잔돈 : %d원\n",returnWon);	
	koreanwonConverter(returnWon);
	printf("\n\n");

	
	//파운드  환전 
	returnWon=0;
	outputGBP = inputWon/RATE_GBP;
	//outputGBP =  31.16 ==> 0.16
	returnWon = outputGBP * 100;
	returnWon = returnWon % 100 *RATE_GBP /100;
	returnWon = returnWon / 10 * 10;
	int getGBP = (int)outputGBP;
	printf("[GBP 환전]\n"); 
	printf("%5d 원 -> %5d 파운드 환전 \n", inputWon, getGBP);
	printf("환전 : 1000파운드:%d개/ 100파운드: %d개/10파운드: %d개/1파운드:%d개\n",getGBP/1000, getGBP/100%10,getGBP/10%10, getGBP%10);
	printf("잔돈 : %d원\n",returnWon);
	koreanwonConverter(returnWon);
	printf("\n\n");

			
	return 0;
}



