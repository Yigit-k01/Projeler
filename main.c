// hesap makinesi.cpp : Defines the entry point for the console application.
//

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() 
{
	char islem;
	float say1,say2,sonuc;
	
	printf("Birinci sayiyi giriniz: ");
	scanf("%f", &say1);
	
	printf("ikinci sayiyi giriniz: ");
	scanf("%f",&say2);
	
	printf("yapmak istediginiz islemleri giriniz (+, -, *, /):\n ");
	scanf(" %c",&islem);
	
	switch (islem)
	{
		case '+':
			sonuc = say1 + say2;
			printf("%.2f + %.2f = %.2f", say1,say2,sonuc);
			break;
			
		case '-':
			sonuc = say1 - say2;
			printf("%.2f - %.2f = %.2f\n", say1,say2,sonuc);
			break;
			
		case '*':
			sonuc = say1 * say2;
			printf("%.2f * %.2f = %.2f\n", say1,say2,sonuc);
			break;
			
		case '/':
			sonuc = say1 / say2;
			printf("%.2f / %.2f = %.2f\n", say1,say2,sonuc);
			break;		
			
			default:
			printf("hatali! islem yapildi:yk selamlar");
			break;	
	}	
	
	return 0;
}



