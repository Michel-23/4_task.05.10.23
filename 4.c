#include <stdio.h>
#include <math.h>

int main()
{
    int a,b,c;
    printf("vvedi storoni");
    printf("\na=");
    scanf("%d", &a);
    printf("b=");
    scanf("%d", &b);
    printf("c=");
    scanf("%d", &c);
    if (a==b){
        if (c==b) printf("ravnostoronny");
    }
    if (a==b)
    {
        if (a!=c){
            if (b!=c) printf("ravnobedreny\n");
        }
    }
    if (b==c)
    {
        if (b!=c){
            if (a!=b) printf("ravnobedreny\n");
        }
    }
    if (a==c)
    {
        if (a!=b){
            if (b!=c) printf("ravnobedreny\n");
        }
    }
    if (pow(a,2)==pow(b,2)+pow(c,2)) printf("pramougolny\n");
    if (pow(b,2)==pow(a,2)+pow(c,2)) printf("pramougolny\n");
    if (pow(c,2)==pow(b,2)+pow(a,2)) printf("pramougolny\n");
    return 0;
}