#include <stdio.h>
int main () 
 {
    int n, i;
    float weight[1000], sum = 0.0, avg;
    printf("Enter the numbers of weights you are going to enter and make sure that the number is in between 0 and 1000: ");
    scanf ("%d", &n);
    printf ("Enter the weights into the array");
    for (i = 0; i < n; ++i)
    {
        printf ("Enter weight %d: ", i + 1);
        scanf ("%f", &weight[i]);
        sum = sum + weight[i];
    }
    avg = sum / n;
    printf("Average weight for the set of the elephant seals. = %.4f units",avg);
    return 0;
}