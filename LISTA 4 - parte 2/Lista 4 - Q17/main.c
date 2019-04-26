/*#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int Numeros [20], j=0, i=0, a=1;


    for(i=0;i<20;i++){

        printf("\n\nDigite um numero: ");
        scanf("%d", &Numeros[i]);



     for(j=0;j<20;j++){

        if(Numeros[j-a] != Numeros[i]){
            printf("O numero eh %d\n\n", Numeros[i]);

            break;
         }
         else{
            printf(" . ");
            break;
         }

        }
     }


    return 0;
}*/

#include <stdio.h>

int main(){
	int vetor[20];
	int i,a,j;
	for(i=0;i<20;i++){
		printf("Numero: ");
		scanf("%d", &vetor[i]);
		for(j=0; j<i; ++j){
			if(vetor[j] == vetor[i]){
				break;
			}
		}
		if(j==i) printf("%d\n", vetor[i]);
	}
return 0;

}
