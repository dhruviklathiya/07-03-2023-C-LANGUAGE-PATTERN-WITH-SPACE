#include<stdio.h>
int main (){
    char a,b,c;
    for(a='E';a>='A';a--)
    {
        for(c=a;c<'E';c++)
        {
            printf(" ");
        }
        for(b='A';b<=a;b++)
        {
            printf("%c",b);
        }
        printf("\n");
    }
    return 0;
}
