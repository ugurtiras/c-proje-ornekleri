#include<stdio.h>
#include<stdlib.h>

  int bastop(int sayi){
  	 
	     int toplam=sayi%10;
        for(int i=0;sayi>0;i++){
        	sayi=sayi/10;
        	 toplam=toplam+sayi%10;
		}
           return toplam;
		
  }




int main(){
	int a,b;
  printf("bir dogal sayi giriniz:");
  scanf("%d",&a); 
 
  b=bastop(a);
  printf("girdiginiz sayinin basamaklari toplami:%d",b);
  
 
   
	
	return 0;
}