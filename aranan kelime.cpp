#include<stdio.h>
#include<stdlib.h>
#include<string.h>


 int main(){
	int i,j,sayac=0;
	char metin[500];
	char kelime[10];
	char gecicidizi[10];
	printf("metni giriniz:");
	gets(metin);
	printf("aramak istediginiz kelimeyi giriniz:");
	gets(kelime);
	for(i=0;i<strlen(metin);i++)
	{j=0;
	while(j<strlen(kelime)&& metin[i+j]==kelime[j])
	{j++;
	}
	if(j==strlen(kelime)) sayac++;
	
	}
	
	
printf("aranan kelime metin icerisinde %d tane vardir.",sayac);

	
	
	
	return 0;
}