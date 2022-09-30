#include <stdio.h>

int main(void){
    // Declare variable to store input
    int hrs, mins;

    // Input
    scanf("%i %i", &hrs, &mins);

    // Process & Output
    if(hrs >= 5 && hrs <= 18){
        if(hrs == 12){
            if(mins >= 1){
                printf("Good afternoon");
            } else {
                printf("Good morning");
            }
        } else if(hrs < 12){
            printf("Good morning");
        } else if(hrs < 18){
            printf("Good afternoon");
        }
    } else {
        printf("Good evening");
    }
    return 0;
}