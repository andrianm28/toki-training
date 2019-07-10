#include <stdio.h>
int main(){
    int count=0,sum=0,tmp=0;
    scanf("%d",&count);
    for (size_t i = 0; i < count; i++)
    {
        scanf("%d",&tmp);
        sum += tmp;
    }
    printf("%d\n",sum);
}