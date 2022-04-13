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
	printf("1000��: %d��, 500��: %d��, 100��: %d�� 50��: %d�� 10��: %d��\n", 
			returnWon1000,returnWon500, returnWon100, returnWon50, returnWon10); 	
}

void USDConverter(int exchangedMoney) {	
//�޷�����: 100,50,20,10,2,1 
	int Dollar100 = exchangedMoney/100;
	exchangedMoney = exchangedMoney - Dollar100 *100;
	int Dollar50 = exchangedMoney/50;
	exchangedMoney = exchangedMoney - Dollar50 * 50;
	int Dollar20 = exchangedMoney/20;
	exchangedMoney = exchangedMoney - Dollar20 * 20;
	int Dollar10 = exchangedMoney/10;
	exchangedMoney = exchangedMoney - Dollar10 * 10;
	int Dollar2 = exchangedMoney/2;
	exchangedMoney = exchangedMoney - Dollar2 *2;
	int Dollar1 = exchangedMoney/1;
	exchangedMoney = exchangedMoney -Dollar1 * 1;
	printf("100�޷�: %d��, 50�޷�: %d��,20�޷�: %d��,10�޷�: %d��,2�޷�: %d��,1�޷�: %d��\n",
			Dollar100,Dollar50,Dollar20,Dollar10,Dollar2,Dollar1);
}

void JPYConverter(int exchangedMoney) {
//��ȭ���� : 1000,500,100,50,10,5,1 
	int JPY1000 = exchangedMoney/1000;
	exchangedMoney = exchangedMoney - JPY1000 *1000;
	int JPY500 = exchangedMoney/500;
	exchangedMoney = exchangedMoney - JPY500 * 500;
	int JPY100 = exchangedMoney/100;
	exchangedMoney = exchangedMoney - JPY100 * 100;
	int JPY50 = exchangedMoney/50;
	exchangedMoney = exchangedMoney - JPY50 * 50;
	int JPY10 = exchangedMoney/10;
	exchangedMoney = exchangedMoney - JPY10 *10;
	int JPY5 = exchangedMoney/5;
	exchangedMoney = exchangedMoney -JPY5 * 5;
	int JPY1 = exchangedMoney/1;
	exchangedMoney = exchangedMoney -JPY1 * 1;
	printf("1000��: %d��, 500��: %d��,100��: %d��,50��: %d��,10��: %d��,5��: %d��,1��:%d\n",
			JPY1000,JPY500,JPY100,JPY50,JPY10,JPY5,JPY1);
}

void EUR_CNY_GBP_Converter(int exchangedMoney, int inputNumber) {
//����,����,�Ŀ�� ���� : 100, 50, 20, 10, 5, 1 
	char* diff[3] = {"����","����","�Ŀ��"};
	
	int Money100 = exchangedMoney/100;
	exchangedMoney = exchangedMoney - Money100 *100;
	int Money50 = exchangedMoney/50;
	exchangedMoney = exchangedMoney - Money50 * 50;
	int Money20 = exchangedMoney/20;
	exchangedMoney = exchangedMoney - Money20 * 20;
	int Money10 = exchangedMoney/10;
	exchangedMoney = exchangedMoney - Money10 * 10;
	int Money5 = exchangedMoney/5;
	exchangedMoney = exchangedMoney - Money5 *5;
	int Money1 = exchangedMoney/1;
	exchangedMoney = exchangedMoney -Money1 * 1;
	
	if(inputNumber==2) {
		printf("100%s: %d��, 50%s: %d��,20%s: %d��,10%s: %d��,5%s: %d��,1%s: %d��\n",
		diff[0],Money100,diff[0],Money50,diff[0],Money20,diff[0],Money10,diff[0],Money5,diff[0],Money1,diff[0]);
	} else if(inputNumber==3) {
		printf("100%s: %d��, 50%s: %d��,20%s: %d��,10%s: %d��,5%s: %d��,1%s: %d��\n",
		diff[1],Money100,diff[1],Money50,diff[1],Money20,diff[1],Money10,diff[1],Money5,diff[1],Money1,diff[1]);
	} else if(inputNumber ==5) {
		printf("100%s: %d��, 50%s: %d��,20%s: %d��,10%s: %d��,5%s: %d��,1%s: %d��\n",
		diff[1],Money100,diff[2],Money50,diff[2],Money20,diff[2],Money10,diff[2],Money5,diff[2],Money1,diff[2]);

	}

}

int returnWonCal(int inputNumber, int returnWon, float changeRate) {
	if(inputNumber == 4) {
		returnWon = returnWon%100*changeRate;
		returnWon = (int)(returnWon/10*10);
	} else {
		returnWon = ((int)((returnWon%100)*changeRate/100)/10*10);
	}
}


int main() {
	const float RATE_USD = 1233.1;
	const float RATE_JPY = 9.8692;
	const float RATE_CNY = 193.23;
	const float RATE_EUR = 1343.00;
	const float RATE_GBP = 1604.85;	
	float outputMoney = 0;
	float changeRate = 0;
	int returnWon = 0;
	int inputNumber = 0;
	int inputWon=0;
	int exchangedMoney = 0;	
	
	printf("ȯ���� ���ϴ� �ݾ��� �Է��ϼ���(��ȭ) : ");
	scanf("%d", &inputWon);
	int myWon = inputWon;
	printf("\n");
	
	do {
		printf("ȯ���� ��ȭ�� �����ϼ��� (1: USD, 2:CNY, 3:EUR, 4:JPY, 5:GBP) : ");
		scanf("%d", &inputNumber);
		printf("\n");		
	} while (inputNumber <1 || inputNumber>5 );
		
	switch(inputNumber) {
		case 1: 
			changeRate = RATE_USD;
			break;			
		case 2: 
			changeRate = RATE_CNY;
			break;		
		case 3: 
			changeRate = RATE_EUR;
			break;					
		case 4: 
			changeRate = RATE_JPY;
			break;			
		case 5: 
			changeRate = RATE_GBP;
			break;		
	}
	
	outputMoney = inputWon / changeRate;
	returnWon = outputMoney *100;
	exchangedMoney = (int)outputMoney;

	returnWon = returnWonCal(inputNumber, returnWon, changeRate);


	//��¿���
	printf("%d�� -> %d", inputWon, exchangedMoney);		
	char* money[5] = {"�޷�","����","����","��","�Ŀ��"};	 
	 
	printf("%s\n",money[inputNumber-1]);
	if(inputNumber==1) {
	 	USDConverter(exchangedMoney);
	} else if(inputNumber==4) {
		JPYConverter(exchangedMoney);
	} else {
		EUR_CNY_GBP_Converter(exchangedMoney,inputNumber);
	}

	printf("�ܵ�: %d��\n",returnWon); 
	koreanwonConverter(returnWon);
					
	return 0;
}



