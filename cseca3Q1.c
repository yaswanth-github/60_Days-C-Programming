#include <stdio.h>
#include <stdlib.h>

int main()
{
    int size,i,temp1,temp2;
    float *arr=(float*)malloc(size*sizeof(float));
    

    /* Input size of array */
    printf("Enter size of the array::");
    scanf("%d", &size);

    /* Input array Elements */
    printf("Enter Numbers in Array:: ");
    for(i=0; i<size; i++)
    {
        printf("\nArr[%d]:",i);
        scanf("%f", &arr[i]);
    }

    if (size%2 == 0)   // FOR EVEN SIZE OF ARRAY
    {
        // DIVIDE INTO TWO PARTS FOR EVEN AND ODD POSITION

        for(int i=0;i<size;i+=4)   // FOR EVEN
        {
            if(i+2>=size)
            {
                break;
            }
            temp1=arr[i];
            arr[i]=arr[i+2];
            arr[i+2]=temp1;
        }

        for(int i=1;i<size;i+=4)   // FOR ODD
        {
            if(i+1>=size)
            {
                break;
            }
            temp2=arr[i];
            arr[i]=arr[i+2];
            arr[i+2]=temp2;
        }

        printf("\nInterchange the Alternate Even and Odd Position Values ::\n\n");

        for(int i=0; i<size;i++)
        {
            printf("\n%f\t",arr[i]);         // OUTPUT FOR EVEN SIZE OF ARRAY
        }
        printf("\n\n");
       
    }

    else      // FOR ODD SIZE OF ARRAY  
    {
        // Print array in reversed order
        
        printf("\nArray in reverse order::\n");
        for(i = size-1; i>=0; i--)
        {
        printf("\n%f\t", arr[i]);           // OUTPUT FOR ODD SIZE OF ARRAY
        }
    }
    return 0;
}