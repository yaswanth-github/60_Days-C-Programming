#include <stdio.h>

int main()
{
    float arr[100],a; // arr[] is a array of float data type
    int i,n,index=0;  // a is the element to delete from the arr[]
    printf("\nThe no.of elements you want to enter ::");
    scanf("%d",&n);
    printf("\nEnter the elements ::\n");
    for(i=0;i<n;i++)
    {
        printf("arr[%d] ::",i+1);
        scanf("%f",&arr[i]); // asking for numbers from user
    }
    
    printf("\nEnter the element you want to delete ::");
    scanf("%f",&a); 
    
    for(i = 0; i < n; i++)
    {
        if(arr[i] == a)  // finding the index of the element to delete
        {
            index = i;
            break;  // breaks the loop if number a found
        }
    }

    if(index != 0 && index != -1 )
    {
        //shift all the element from index+1 by one position to the left
        for(i = index; i < n - 1; i++)
            arr[i] = arr[i+1];

        printf("New Array ::\n ");
        for(i = 0; i < n- 1; i++)
            printf("\narr[%d] ::%f",i+1,arr[i]);
    }
    else
    {
        printf("\nThe number not found in array and %f is inserted at the end of the array",a);
        arr[n]=a;  // inserting the number at last as it is not in the array
        printf("New Array ::\n "); 
        for(i = 0; i < n+1; i++)
            printf("\narr[%d] ::%f",i+1,arr[i]);  //printing all numbers in the array
    }
    return 0;
}


