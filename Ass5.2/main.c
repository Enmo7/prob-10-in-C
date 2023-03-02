#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,arr_1[5];
    printf("Inter the Numbers : \n");


    for (i=0; i<5; i++)
    {
        scanf("%d",&arr_1[i]);
    }
    printf("Original array :\n");
    for(i=0;i<5;i++)
    {
        printf("%d\n", arr_1[i]);
    }
    int temp;
    printf("Reverse of array :\n");
    for(int i = 0; i<5/2; i++){
        temp = arr_1[i];
        arr_1[i] = arr_1[5-i-1];
        arr_1[5-i-1] = temp;
    }
    for(int i = 0; i < 5; i++){
        printf("%d,", arr_1[i]);
    }
    return 0;
}
