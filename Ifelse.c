#include "stdio.h"

int main(){

    // It is used to perform operation based on some conditions

    // Types of if else
    // 1.  if statement
    // 2. If else statement
    // 3. If else if ladder
    // 4. Nested if
    
    // printf("Enter you age:\n");

    // int age;

    // scanf("%d",&age);

    // if(age>=18){
    //     printf("You can vote");
    // }

    // else if (age==18){
    //     printf("Fuck you and your friends");
    // }

    // else{
    //     printf("You cannot vote!");
    // }
    
    // quiz

    int noof;

    printf("If you pass both science and maths type 2\nIf you pass only science or maths type 1\n");

    scanf("%d",&noof);

    if (noof == 2){
        printf("Your prize is 45 Ruppees");
    }

    else{
        printf("Your prize is 15 Ruppees");
    }
}