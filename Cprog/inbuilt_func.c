//Take input from user, compute square toot, compute the power of number raised to the power of square root

#include<stdio.h>
#include<math.h>

int main(){
int num;
printf("Enter a number:");
scanf("%d",&num);
int sqroot_num=sqrt(num);
printf("The square root of the number is %d: \n",sqroot_num);
int power=pow(num,sqroot_num);
printf("The number is : %d", power);
}