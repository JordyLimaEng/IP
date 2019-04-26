#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Banco_Voos{
	
	char NVOO[6];
	char TIPO[10];
	double PRECO;
	int LUGARES;
	
} Voos_str; 


int main (){
	int x=0;
	Voos_str Voos[10];
	
	strcpy(Voos[0].NVOO ,"XYZA5");
	strcpy(Voos[0].TIPO ,"ECONOMICA");
	Voos[0].PRECO = 395.00;
	Voos[0].LUGARES = 115;
	
	strcpy(Voos[1].NVOO ,"ABCW9");
	strcpy(Voos[1].TIPO ,"1oCLASSE");
	Voos[1].PRECO = 710.00;
	Voos[1].LUGARES = 28;
    
    for(x=0;x<2;x++){
    	printf("%s\n",Voos[x].NVOO);
    	printf("%s\n",Voos[x].TIPO);
    	printf("%.2lf\n",Voos[x].PRECO);
    	printf("%d\n\n",Voos[x].LUGARES);
	}
    
	return 0;
}
