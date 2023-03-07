#include<stdio.h>
int main (){
    char a,b,c;
    for(a='A';a<='E';a++)
    {
        for(c=a;c>'A';c--)
        {
            printf(" ");
        }
        for(b=a;b<='E';b++)
        {
            printf("%c",b);
        }
        printf("\n");
    }
    return 0;
}
