#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
    setlocale(LC_ALL,"Portuguese");

    int n,num,fat;

    printf("Digite um valor para ser calculado: ");
    scanf("%d",&num);

    if(num>=0){
        fat=1;
        n=num;
      while(n>0){
        fat*=n;     //FATORIAL = FATORIAL*N
           n--;
      }
      printf("\n\t%d!=%d\n",num,fat);
    }else printf("Digite apenas números naturais positivos.\n");

    return 0;
}
