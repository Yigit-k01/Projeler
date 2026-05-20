#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* taþ kaðýt makas oyunu */

#define tas 1
#define kagit 2
#define makas 3

char* secimiyazdir(int secim)
{
	if(secim == tas) return "tas";
	if(secim == kagit) return "kagit";
	if(secim == makas) return "makas";
	return "bilinmiyor";
}

int main() 
{
	int oyuncusecimi;
	int bilgisayarsecimi;
	
	srand(time(NULL));
	
	bilgisayarsecimi = (rand() % 3) + 1;
	
	printf("  Tas Kagit Makas Oyununa Hos Geldiniz.\n ");
	printf("    ! Hazirsaniz Oyuna Baslayalim !\n");
	printf("1.TAS\n");
	printf("2.KAGIT\n");
	printf("3.MAKAS\n");
	printf("Lutfen istediginizin sayi numarasina gore seciminizi yapiniz.\n");
	scanf("%d", &oyuncusecimi);
	
	if(oyuncusecimi < 1 || oyuncusecimi > 3)
	{
		printf("Hatali Islem Yaptiniz!\n");
		return 1;
	}
	
	printf("\nSIZ: %s",secimiyazdir(oyuncusecimi));
	printf("\nBILGISAYAR: %s\n",secimiyazdir(bilgisayarsecimi));
	printf("\n");
	printf("SONUC: ");
	
	if(oyuncusecimi == bilgisayarsecimi)
	{
	printf("BERABERE KALDINIZ\n");
	}
	
	else if ((oyuncusecimi == 1 && bilgisayarsecimi == 3) ||
	    	(oyuncusecimi == 2 && bilgisayarsecimi == 1) ||
	    	(oyuncusecimi == 3 && bilgisayarsecimi == 2))
	    
		{
		printf("KAZANDINIZ! :)\n");	
		}
		
		else 
		{
			printf("KAYBETTINIZ.");
		}
	
	
	return 0;
}
