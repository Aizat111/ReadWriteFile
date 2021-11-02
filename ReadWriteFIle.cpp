#include<stdio.h>
int main()
{
	int k,sayi[100];
	FILE*dosya;
	dosya=fopen("sayilar.txt","r");//icinde 100 sayi bulunan mevcut dosyadan sayi okut
	if(dosya==NULL)
	{
		printf("dosya bulunamadi");
		return 0;
	}
	else
	{
	for(int i=0;i<100;i++)		{
			fscanf(dosya,"%d",&sayi[i]);
			printf("%d\n",sayi[i]);
				}
	
			}
	FILE*dosya1;
	dosya1=fopen("sayilar2.txt","w");	//dosyadan okudugumuz sayilari yeni dosyaya yazmak
	for(int c=0;c<100;c++)
	{
		k=0;
		for(int i=2;i<sayi[c];i++)
		{
			if(sayi[c]%i==0)
			{
				k=1;
			}
			}
			if(k==0)
			{
				fprintf(dosya1,"%d\n",sayi[c]);
			}	
		}	
			
				fclose(dosya1);		
				fclose(dosya);
				
		return 0;
}
