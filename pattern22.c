#include<stdio.h>
int main (){
    int a,b,c;
    for(a=5;a>=1;a--)
    {
        for(c=a;c<5;c++)
        {
            printf(" ");
        }
        for(b=1;b<=a;b++)
        {
            if(b%2!=0)
            {
                printf("-");
            }
            else
            {
                printf("|");
            }
        }
        printf("\n");
    }
    return 0;
}
