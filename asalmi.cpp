#include <stdio.h>
#include <stdlib.h>


int asal(int sayi){
	int i,sayac=0;
	for(i=1;i<=sayi;i++)
	{if(sayi%i==0)
	{sayac++;}
}

	return sayac;
	
	
}



int main(){
	int sayi,a;
	printf("sayiyi giriniz:");
	scanf("%d",&sayi);
	a=asal(sayi);
	if(a==2)
	{printf("girdiginiz sayi asaldir.");
	
	}
	else 
	{printf("girdiginiz sayi asal degildir.");
	}
	
	
	return 0;
}
