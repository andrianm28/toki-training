#include <stdio.h>
int main(void){
    int a=0,b=0;
    while (scanf("%d",&a)!=EOF)
    {
        if (a>=a&&a<=1000)
        {
            b+=a;
        }
        
    }
    printf("%d\n",b);
}