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

void USDConverter(int exchangedMoney) {	//40
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
	printf("100�޷�: %d��, 50�޷�: %d��,20�޷�: %d��,10�޷�: %d��,2�޷�: %d��,1�޷�: %d��\n",Dollar100,Dollar50,Dollar20,Dollar10,Dollar2,Dollar1);
}

void JPYConverter(int exchangedMoney) {
	
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
			changeRate = RATE_JPY;
			break;		
		case 3: 
			changeRate = RATE_EUR;
			break;					
		case 4: 
			changeRate = RATE_CNY;
			break;			
		case 5: 
			changeRate = RATE_GBP;
			break;		
	}
	
	outputMoney = inputWon / changeRate;
	returnWon = outputMoney *100;
	returnWon = ((int)((returnWon%100)*changeRate/100)/10*10);
	exchangedMoney = (int)outputMoney;
	//��¿���
	printf("%d�� -> %d", inputWon, exchangedMoney);
	switch(inputNumber) {
	case 1:
		printf("�޷�\n");
		USDConverter(exchangedMoney);
		break;
	case 2:
		printf("����\n");
		break;
	case 3:
		printf("����\n");
		break;	
	case 4:
		printf("��\n");
		break;
	case 5:
		printf("�Ŀ��\n");
		break;
	}
	printf("�ܵ�: %d��\n",returnWon); 
	koreanwonConverter(returnWon);

	
				
	return 0;
}



