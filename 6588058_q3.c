#include <stdio.h>

int main(void){
    // Declare array_size
    int rows, columns, flip, x, y;

    // Input rows and columns
    scanf("%i %i", &rows, &columns);
    x = columns-1;
    y = rows-1;
    
    // Create matrix
    int a[rows][columns];
    int b[rows][columns];

    // Input value inside array a
    for(int i = 0; i<rows; i++){
        for(int j = 0; j<columns; j++){
            scanf("%i", &a[i][j]);
        }
    }

    // Choose flip
    scanf("%i", &flip);

    // Check flip
        if(flip == 1){
            for(int i = 0; i<rows; i++){
                for(int j = 0; j<columns; j++){
                    b[i][j] = a[i][x];
                    x--;
                }
            }
        } else if (flip == 2){
            for(int i = rows; i>0; i--){
                for(int j = 0; j<columns; j++){
                    b[i][j] = a[y][j];
                    y--;
                }
            }
        }

    // Print the result
    for(int i = 0; i<rows; i++){
        for(int j = 0; j<columns; j++){
            printf("%i ", b[i][j]);
        }
        printf("\n");
    }

    return 0;
}