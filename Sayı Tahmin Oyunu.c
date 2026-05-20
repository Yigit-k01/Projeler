#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* sayý tahmin oyunu */

int main() 
{
	int tahmin;
	int rastgelesayi;
	int denemesayisi=0;
	
	srand(time(0));
	
	rastgelesayi = (rand() % 30) + 1;
	
	printf("-----Sayi Tahmin Oyununa Hos Geldiniz-----\n");
	printf("    ! Hazirsaniz Oyuna Baslayalim !\n\n");	
	printf(" 1 ile 30 Arasinda Sayi Tuttum Tahmin Ediniz.\n\n");
	
	
	do
	{
		printf("Lutfen Tahmin Ettiginiz Sayiyi Giriniz: ");
		scanf("%d",&tahmin);
		denemesayisi++;
		
		if(tahmin > rastgelesayi)
		{
			printf("Lutfen Daha Kucuk Bir Sayi Giriniz.\n");
			printf("\n");
		}
	
		else if (tahmin < rastgelesayi)
		{
			printf("Lutfen Daha Buyuk Bir Sayi Giriniz.\n");
			printf("\n");
		}

		else
		{
			printf("\n");
			printf("Tebrikler Sayiyi %d. tahmininizde buldunuz.\n",denemesayisi);
		
		}	
	} 
	while (tahmin != rastgelesayi);
	printf("\n");
	printf("----------------------\n");
	printf("Oynadaginiz Icin Tesekkurler  :)\n");
	printf("----------------------");
	printf("\n");
	return 0;
}
