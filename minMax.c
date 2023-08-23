#include <stdio.h>
int main()
{
    int a[5], i, min, max;
    printf("Please Enter Your Input:\n");
    // input with a array
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }
    for(i=0; i<5; i++){
        if(a[i]>a[i+1]){
            min = i;
        }else{
            max = i;
        }
    }
    printf("Min Array is : %d\n", a[min]);
    printf("Max Array is : %d\n", a[max]);
    return 0;
}
