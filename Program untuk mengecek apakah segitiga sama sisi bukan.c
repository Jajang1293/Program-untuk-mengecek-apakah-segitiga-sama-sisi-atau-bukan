#include<stdio.h>
void main()
{
    int a, b, c;
    printf("Jumlah sudut Segitiga abc adalah 180 derajat.\n");
    printf("Apakah Segitiga tersebut Sama Sisi atau Bukan?\n");
    printf("\nMasukan sudut a: ");scanf("%i", &a);
    printf("\nMasukan sudut b: ");scanf("%i", &b);
    printf("\nMasukan sudut c: ");scanf("%i", &c);
    if(a == b && b == c && a == c)
    {
        printf("\nSegitiga tersebut adalah Segitiga Sama Sisi");
    }else {printf("\nSegitiga tersebut Bukan Segitiga Sama Sisi");}
}
