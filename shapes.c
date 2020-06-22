#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(int argc, char const *argv[])
{
    int input;

    while(input != 5) {

        int Height;
        int Width; 
        int center;

        printf("1-Filled Rectangle\n");
        printf("2-Empty Rectangle\n");
        printf("3-Filled Triangle\n");
        printf("4-Empty Triangle\n");
        printf("5-Exit\n");
    
        printf("Type in a number between 1 and 5: ");
        scanf("%d", &input);
    
        switch (input)
        {
        case 1:
            printf("Choose Height= ");
            scanf("%d", &Height);
            printf("Choose Width= ");
            scanf("%d", &Width);

            for (int row=0; row<Height; row++) {
                for (int col=0; col<Width; col++) {
                    printf("* ");
                }
                printf("\n");
            }
            break;
           
        case 2:
            printf("Choose Height= ");
            scanf("%d", &Height);
            printf("Choose Width= ");
            scanf("%d", &Width);

            for (int row=0; row<Height; row++){
                for (int col=0; col<Width; col++) {
                    if(row==0 || row==Height-1 || col==0 || col==Width-1){
                        printf("* ");
                    }
                    else {
                        printf("  ");
                    }
                }
                printf("\n");
            }
            break;

        case 3:
            printf("Choose Height= ");
            scanf("%d", &Height);

            Width = (2 * (Height - 1)) + 1;
            center = (Width-1)/2;

             for (int row=0; row<Height; row++){
                for (int col=0; col<Width; col++) {
                    if(col==center-row || col==center+row || (col>center-row && col<center+row)) {
                        printf("* ");
                    }
                    else {
                        printf("  ");
                    }
                }
                printf("\n");
             }


            break;

        case 4:
            printf("Choose Height= ");
            scanf("%d", &Height);

            Width = (2 * (Height - 1)) + 1;
            center = (Width-1)/2;

             for (int row=0; row<Height; row++){
                for (int col=0; col<Width; col++) {
                    if(row==Height-1 || col==center-row || col==center+row) {
                        printf("* ");
                    }
                    else {
                        printf("  ");
                    }
                }
                printf("\n");
             }
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
