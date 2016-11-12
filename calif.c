#include<stdio.h>
#include<stdlib.h>
int main ()
{
    int cal[10];
    int n,nv=0,mas=0,menos=0;
    printf ("\n Programa calificaciones\n");
    for(n=0;n<=9;n++)
    {
    printf ("\n Ingrese calificacion #%i\n",n+1);
    scanf ("%i",&cal[n]);
    while (cal[n]<0||cal[n]>10)
    {
    printf ("\n Error!!!, subimase\n\t");}
    }
    for(n=0;n<=9;n++)
    {
    if(cal[n]<6)
    {mas++;}
    //printf("\n\t   Aprovaron %i \n",n);
    else if(cal[n]>6)
    {menos++;}
    }
    //{printf("\n\t  no Aprovaron %i\n",n);}
    printf("\n%i reprovaron\n",mas);
    printf("\n%i aprovaron\n",menos);
    system("PAUSE");
    return 0;
}
