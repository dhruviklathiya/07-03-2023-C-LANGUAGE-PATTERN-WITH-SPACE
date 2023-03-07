#include<stdio.h>
int main (){
    char a,b,c;
    for(a='A';a<='E';a++)
    {
        for(c='E';c>a;c--)
        {
            printf(" ");
        }
        for(b=a;b>='A';b--)
        {
            printf("%c",b);
        }
        printf("\n");
    }
    return 0;
}
