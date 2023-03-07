#include<stdio.h>
int main (){
    int a,b,c;
    for(a=1;a<=5;a++)
    {
        for(c=a;c<5;c++)
        {
            printf(" ");
        }
        for(b=1;b<=a;b++)
        {
            if(b%2!=0){
                printf("1");
            }
            else{
                printf("0");
            }
        }
        printf("\n");
    }
    return 0;
}
