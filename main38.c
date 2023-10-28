#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	int satir,sutun,i,j,k,n;
	int toplam[i][j];
	printf("1. Satir Sayisini Giriniz: ");
	scanf("%d",&satir);
	printf("1. Sutun Sayisini Giriniz: ");
	scanf("%d",&sutun);
	
	int matris1[satir][sutun];
	for(i=0;i<satir;i++)
	{
		for(j=0;j<sutun;j++)
		{
			printf("\n Deger: [%d][%d] --->",i+1,j+1);
			scanf("%d",&matris1[i][j]);
		}
	}
	printf("*****Olusan Matris1*****\n");
	for(k=0;k<satir;k++)
	{
		for(n=0;n<sutun;n++)
		{
			printf("Matris1: %d\n",matris1[k][n]);
		}
		printf("\n");
	}
	int matris2[satir][sutun];
	for(i=0;i<satir;i++)
	{
		for(j=0;j<sutun;j++)
		{
			printf("\n 2.Deger: [%d][%d] -->",i+1,j+1);
			scanf("%d",&matris2[i][j]);
		}
	}
	printf("*****Olusan Matris2*****\n");
	for(k=0;k<satir;k++)
	{
		for(n=0;n<sutun;n++)
		{
			printf("Matris2: %d\n",matris2[k][n]);
		}
		printf("\n");
	}
	printf("*****Sonuclarrrrr*****");
	for(i=0;i<satir;i++)
	{
		for(j=0;j<sutun;j++)
		{
			toplam[i][j]=matris1[i][j]+matris2[i][j];
		}
	}
	for(k=0;k<satir;k++)
	{
		for(n=0;n<sutun;n++)
		{
			printf("\nDeger: %d\n",toplam[k][n]);
		}
	}
	
	
	return 0;
}
