#include<stdio.h>
#include<stdlib.h>



double fac(int a){
	int i;
	double factorial=1;
	
	for(i=1;i<=a;i++)
	{factorial*=i;
	}
	return factorial;
	
}


int com(int a,int b){
	
return((fac(a))/(fac(b)*fac(a-b)));
	
	
	
	
}



int main(){
	int x,y,sonuc;
	
  printf("com(x,y)\n");
  printf("x:");
  scanf("%d",&x);
  printf("y:");
  scanf("%d",&y);
  sonuc=com(x,y);
	
	printf("com(%d,%d):%d",x,y,sonuc);

	
	
	
	return 0;
}