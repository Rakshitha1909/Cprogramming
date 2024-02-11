//Functions

#include<stdio.h>

void greet(){
    printf("Helloo baby!");
}
int main(){
    greet();
}

//While using functions keep in mind the scope of the variable
#include<stdio.h>

int a,b;
void add(){
    int sum=a+b;
    printf("The sum is:%d",sum);
}
void main(){
    printf("Enter 2 numbers for addition");
    scanf("%d %d",&a,&b);
    add();
}

//Using Parameters
#include<stdio.h>


int sub(a,b){
    int subs=a-b;
    printf("Subtracting a and b:%d",subs);
}
int main(){
    sub(5,3);
}

