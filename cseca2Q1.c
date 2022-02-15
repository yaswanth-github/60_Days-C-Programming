#include<stdio.h> 

static int odd,even,prime;
void even_odd_prime(int n)  // counting even,odd,prime
{
    int i,s=0;
    for(i = 1; i <= n; i++)
        {
            if(n % i == 0) // checking the divisible numbers
            {
                s++;     // counts the no.of times the number gets divided
            }
        }
        
        if(s == 2)
        {
            prime++; // counts the no.of numbers are prime
        }
        
        
        if(n % 2 == 0)
        {
            even++; // counts the no.of numbers are even
        }
        
        if(n % 2 == 1)
        {
            odd++; // counts the no.of numbers are  odd
        }
    
}

int main()
{
    int n; 
    char choice='Y';
    do      // loop to get the n no.of numbers from user
    { 
        printf("Enter the number :: ");
        scanf("%d",&n); 
        even_odd_prime(n); //function to check odd,even,prime numbers
        printf("Do you want to Continue(y/n)? ");
        scanf(" %c", &choice);   //note the space before " %c" otherwise your while loop would not work
    }while(choice == 'y' || choice == 'Y');
    
    printf("The No.of even numbers :: %d",even);
    printf("\nThe No.of odd numbers :: %d",odd);
    printf("\nThe no.of prime numbers :: %d",prime);
    
    return 0;
}

