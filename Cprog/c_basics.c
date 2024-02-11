//Basic structure
#include<stdio.h>  //standard input/ output
int main(){  // main method
    printf("Hi, this is my 1st program!"); //print statement
}

//Data types
#include<stdio.h>
int main(){
    int a=5;
    float b=5.4;
    double c=6.98766;
    char d='j';
    
    printf("The number is %d",a);
    printf("\nThe number is %f",b);
    printf("\nThe number is %lf",c);
    printf("\nThe character is %c",d);
}

//Using boolean
#include<stdio.h>
#include<stdbool.h>
int main(){
    bool t=true;
    bool f=false;
    printf("%d",t);
    printf("%d",f);
}

//Taking input from the user
#include<stdio.h>
int main(){
    int age;
    printf("Enter your age:");
    scanf("%d",&age);
    printf("Your age is %d",age);
}





