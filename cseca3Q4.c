#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char name[60];
    char *description;
    strcpy(name, "Data");  //name = "Data"
    
    // ALLOCATE MEMORY DYNAMICALLY

    description = (char *)malloc( 10 * sizeof(char) );
    strcpy( description, "Data Science.");
    
    printf("Name = %s\n", name );
    printf("Description: %s\n", description );
    
    // RELEASE MEMORY USING free() FUNCTION

    free(description);
    printf("\nDescription: %s\n", description );
}