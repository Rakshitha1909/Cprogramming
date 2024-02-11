//Loopsss
#include<stdio.h>

int main(){
    for (int i=0;i<=10;i++){
        printf("%d\n",i);
    }
    float j=5.9;
    
    while(j<10){
        printf("%f\n",j);
        j++;
    }
    int i=1;
    
    do{
        printf("Cutiee");
        i++;
    }while(i<2);
}

//Counting number of digits 
#include <stdio.h>

int main() {
    int number, count = 0;

    printf("Enter an integer: ");
    scanf("%d", &number);

    // Counting the number of digits
    while (number != 0) {
        number /= 10; // Divide by 10 to remove the rightmost digit
        count++; // Increment the count of digits
    }

    printf("Number of digits: %d\n", count);

    return 0;
}

//Reverse an integer
#include <stdio.h>

int main() {
    int number, reversedNumber = 0, remainder;

    printf("Enter an integer: ");
    scanf("%d", &number);

    // Reversing the integer
    while (number != 0) {
        remainder = number % 10; // Get the rightmost digit
        reversedNumber = reversedNumber * 10 + remainder; // Add the digit to reversedNumber
        number /= 10; // Remove the rightmost digit
    }

    printf("Reversed integer: %d\n", reversedNumber);

    return 0;
}

//Palindromeee
#include <stdio.h>

int main() {
    int number, reversedNumber = 0, originalNumber, remainder;

    printf("Enter a number: ");
    scanf("%d", &number);

    originalNumber = number; // Store the original number

    // Reverse the number
    while (number != 0) {
        remainder = number % 10;
        reversedNumber = reversedNumber * 10 + remainder;
        number /= 10;
    }

    // Check if the original number is equal to the reversed number
    if (originalNumber == reversedNumber) {
        printf("%d is a palindrome.\n", originalNumber);
    } else {
        printf("%d is not a palindrome.\n", originalNumber);
    }

    return 0;
}

//write a program to print number in reverse order with a difference of 2 using for loop
#include <stdio.h>

int main() {
    int start, end;

    printf("Enter the starting number: ");
    scanf("%d", &start);

    printf("Enter the ending number: ");
    scanf("%d", &end);

    printf("Numbers in reverse order with a difference of 2:\n");
    for (int i = end; i >= start; i -= 2) {
        printf("%d ", i);
    }

    printf("\n");

    return 0;
}

//Sum of digits using for loop
#include <stdio.h>

int main() {
    int number, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &number);

    // Loop to extract digits and calculate sum
    for (; number != 0; number /= 10) {
        sum += number % 10; // Add the rightmost digit to the sum
    }

    printf("Sum of digits: %d\n", sum);

    return 0;
}

//Fibonacci series
#include <stdio.h>

int main() {
    int limit, first = 0, second = 1, next;

    printf("Enter the limit for Fibonacci series: ");
    scanf("%d", &limit);

    printf("Fibonacci series up to %d terms:\n", limit);
    printf("%d, %d", first, second); // Print the first two terms

    for (int i = 2; i < limit; i++) {
        next = first + second;
        printf(", %d", next);
        first = second;
        second = next;
    }

    printf("\n");

    return 0;
}


