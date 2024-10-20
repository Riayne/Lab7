#include <stdio.h>

int main()
{
    int i=0,arr[10]={4,1,6,8,10,21,8,9,2,6},max=arr[0],min=arr[0];
    while (i<10)
    {
        if (arr[i]>max){
            max = arr[i];
        }
        else if (arr[i]<min)
        {
            min = arr[i];
        }

        i++;
    }
    
    printf("Maximum value = %d\n",max);
    printf("Minimum value = %d",min);
    
    return 0;
}
