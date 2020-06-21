#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    int input;

    while(input != 5) {

        printf("\n1-Filled Rectangle\n");
        printf("2-Empty Rectangle\n");
        printf("3-Filled Triangle\n");
        printf("4-Empty Triangle\n");
        printf("5-Exit\n");
    
        printf("Type in a number between 1 and 5: ");
        scanf("%d", &input);
    
        switch (input)
        {
        case 1:
            printf("Option 1\n");
            break;
           
        case 2:
            printf("Option 2\n");
            break;

        case 3:
            printf("Option 3\n");
            break;

        case 4:
            printf("Option 4\n");
            break;

        case 5:
            printf("Goodbye!\n");
            break;

        default: 
            printf("Choose a number between 1 and 5\n");
            break;
        }
    }

    return 0;
}
