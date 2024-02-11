//Simple program---- Taking input from user, use of operators, Conditional statements
#include<stdio.h>

int main(){
    int math_marks,sci_marks,eng_marks,comp_marks;
    printf("Enter math_marks:");
    scanf("%d",&math_marks);
    printf("\nEnter sci_marks:");
    scanf("%d",&sci_marks);
    printf("\nEnter eng_marks:");
    scanf("%d",&eng_marks);
    printf("\nEnter comp_marks:");
    scanf("%d",&comp_marks);
    int total=math_marks+sci_marks+eng_marks+comp_marks;
    printf("The total is :%d\n",total);
    
    if(total>30){
        printf("Hurrayyyy! Good job");
    }
    else if(total<30 && total>20){
        printf("Niceeee");
    }
    else if(total<20 && total>10){
        printf("Okieeee");
    }
    else if(total <10 && total>0){
        printf("Badddd");
    }
    else{
        printf("Not validd!");
    }
}