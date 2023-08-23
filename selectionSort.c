#include <stdio.h>
int main()
{
    int a[5], i, j, temp, min;
    printf("Please Enter Your Input:\n");
    // input with a array
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }
    for(i=0; i<5; i++){
        min = i;
        for(j=i+1; j<5; j++){
            if(a[j]>a[i]){
                min = j;
            }
        }
        temp = a[i];
        a[i] = a[min];
        a[min] = temp;
    }
    printf("Show Our Sorted Array:\n");
    // output with a array
    for (i = 0; i < 5; i++)
    {
        printf("%d\t", a[i]);
    }
    return 0;
}
