#include <stdio.h>

int main()
{
    int i=0, arr[9],sum=0;
    
    while(i < 9){
        printf("enter a number: ");
        scanf("%d",&arr[i]);
        sum += arr[i];
        i ++;

    }
    printf("Output: %d",sum);
    return 0;
}