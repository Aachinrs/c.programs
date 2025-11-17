#include <stdio.h>
unsigned long long int factorial(int n) {   //function for factorial
    if (n == 0 || n == 1)  //both 0! and 1! are equals to 1
        return 1;
    else
        return n * factorial(n - 1); 
}
int main() {
    int num;

    printf("Enter the number: ");
    scanf("%d", &num);

    printf("Factorial of %d is %llu\n", num, factorial(num));  //function call in print statement

    return 0;
}
