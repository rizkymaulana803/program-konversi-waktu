#include <stdio.h>
#include <conio.h>

int main()
{
	
	long detik,hd,jd,md ;
	printf("               PROGRAM KONVERSI DETIK KE HARI, JAM, MENIT\n");
	printf("                  BY DONI IRAWAN 311810530 STT 18 B2");
	printf("				    	 		INSTITUT PELITA BANGSA\n\n");
	printf("Masukan hari : "); scanf("&i",&hd);
	detik=hd*24*60*60;
	printf("hasilnya adalh = %i\n",detik);
	printf("masukan jam : "); scanf("&i",&jd);
	detik=jd*60*60;
	printf("hasilnya adalah = %i/n,detik");
	printf("masukan menit : "); scanf("%i",&md);
	detik=md*60;
	printf("satu hari adalah = %i/n",detik);
	getch();
	
}
