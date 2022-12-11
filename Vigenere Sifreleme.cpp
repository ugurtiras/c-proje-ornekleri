#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

	int main(){
		
	char alfabe[60];
	char kelime[26];
	char anahtar[26];
	char sifre[26];
	int gecicidizi[26];
	int gecicidizi2[26];
    int i,j;
    for(i=0;i<26;i++)
    {alfabe[i]='A'+i;
    alfabe[i+26]=alfabe[i];
	} 
		
	char dizi[27][27];
		for(i=0;i<26;i++)
		{for(j=0;j<26;j++)
		{dizi[i][j]=alfabe[j+i];
		}
		}
		
		for(i=0;i<26;i++){
			for(j=0;j<26;j++){
				printf("%c ",dizi[i][j]);
			}
		printf("\n");
		}printf("\n\n");
		printf("sifrelenecek kelimeyi girin:");
		gets(kelime);
		printf("kelimemin uzunlugu:%d\n", strlen(kelime));
    	printf("kelimenin anahtarini girin:(NOT:anahtar keLimeyle ayni uzunlukta olmalidir):");
		gets(anahtar);
		for(j=0;kelime[j]!='\0';j++)
		{for(i=0;i<26;i++)
		{if(kelime[j]==dizi[0][i])
		{gecicidizi[j]=i;
		}
		}
		}
			for(j=0;anahtar[j]!='\0';j++)
		{for(i=0;i<26;i++)
		{if(anahtar[j]==dizi[i][0])
		{gecicidizi2[j]=i;
		}
		}
		}
		for(i=0;kelime[i]!='\0';i++)
		{sifre[i]=dizi[gecicidizi[i]][gecicidizi2[i]];
		}
		for(i=0;kelime[i]!='\0';i++)
		{printf("%c",sifre[i]);
		}
		
		return 0;
	}
	
