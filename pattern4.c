#include<stdio.h>
int main (){
    int a,b,c;
    for(a=5;a>=1;a--)
    {
        for(c=a;c>1;c--)
        {
            printf(" ");
        }
        for (b=5;b>=a;b--)
        {
            printf("%d",b);
        }
        printf("\n");
    }
    return 0;
}