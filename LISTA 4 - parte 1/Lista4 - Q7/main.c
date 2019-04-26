#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
     srand(time(NULL));
     int a,b,c,d,e,f;

        a=1 + rand() % 2;
        printf("1<= %i <=2",a);

        b=1 + rand() % 100;
        printf("\n1<= %i <=100",b);

        c=0 + rand() % 9;
        printf("\n0<= %i <=9",c);

        d= 1001 + rand() % 112;
        printf("\n1000<= %i <=1112",d);

        e= -1 + rand() % 3;
        printf("\n-1<= %i <=1",e);

        f= -3 + rand() % 15;
        printf("\n-3<= %i <=11",f);

    return 0;
}
