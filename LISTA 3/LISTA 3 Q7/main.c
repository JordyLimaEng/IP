#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

main()

{
    setlocale (LC_ALL, "Portuguese");
    float x, y, z;

    printf("Digite um numero:\n ");
    scanf("%f",&x);
    printf("Digite um numero:\n ");
    scanf("%f",&y);
    printf("Digite um numero:\n ");
    scanf("%f",&z);

    if (x<y&&y<z)
    {
        printf("A ordem crescente é: %2.f %2.f %2.f ", x, y, z);
    }
    else if (x<z&&z<y)
    {
        printf("A ordem crescente é: %2.f %2.f %2.f ", x, z, y);
    }
    else if (y<x&&x<z)
    {
        printf("A ordem crescente é: %2.f %2.f %2.f ", y, x, z);
    }
    else if (y<z&&z<x)
    {
        printf("A ordem crescente é: %2.f %2.f %2.f ", y, z, x);
    }
    else if (z<x&&x<y)
    {
        printf("A ordem crescente é: %2.f %2.f %2.f ", z, x, y);
    }
    else
    {
        printf("A ordem crescente é: %2.f %2.f %2.f ", z, y, x);
    }
return 0;
}
