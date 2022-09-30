#include <stdio.h>

int main(void){
    // Declare variable to store input
    int n, k, sum_1, sum_2, result;
    sum_1 = 0;
    sum_2 = 0;
    result = 0;

    // Input array_size
    scanf("%i", &n);

    // Input k
    scanf("%i", &k);

    // Create 1D array
        int x[n];

        // Input value inside an array
        for(int i = 0; i<n; i++){
            scanf("%i", &x[i]);
        }

        // Calcualte the summation
        // First k number
        for(int i = 0; i<k; i++){
            sum_1 = sum_1 + x[i];
        }
        // Last k number
        for(int i = 1; i<k+1; i++){
            sum_2 = sum_2 + x[n-i];
        }

        // Summation
        result = sum_1 + sum_2;

        if(n < k){
            printf("Invalid");
        } else {
            printf("%i", result);
        }

    // // Check n and k
    // if(n < k){
    //     printf("Invalid");
    // } else {
    //     // Create 1D array
    //     int x[n];

    //     // Input value inside an array
    //     for(int i = 0; i<n; i++){
    //         scanf("%i", &x[i]);
    //     }

    //     // Calcualte the summation
    //     for(int i = 0; i<n; i++){
    //         sum = sum + x[i];
    //     }

    //     // Print out the result
    //     printf("%i", sum);

    // }

    return 0;
}