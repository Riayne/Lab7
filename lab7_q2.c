#include <stdio.h>

int main()
{
     int n;

    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];

    for(int i=0;i<n;i++){
        printf("Enter numbers: ");
        scanf("%d", &arr[i]);
    }//input in array

    printf("reverse order:\n");
    for (int i = n - 1; i >= 0; i--) {
        printf("%d\n", arr[i]);
    }
    return 0;
}