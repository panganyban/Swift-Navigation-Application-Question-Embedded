#include <stdio.h>

int main()
{
    int f1 = 0; //first Fibonacci number
    int f2 = 1; //second Fibonacci number
    int fn; //n Fibonacci number
    int n; 
 
    printf("Enter n (first n numbers of Fibonacci sequence): \n");
    scanf("%d", &n);
    printf("The first %d Fibonacci sequence numbers are: \n", n);

    if(n == 0)
        printf("No numbers printed\n"); 

    else if (n == 1)
        printf("0 Buzz Fizz FizzBuzz\n");

    else if (n == 2) {
        printf("0 Buzz Fizz FizzBuzz\n");
        printf("1\n");
    }

    else {
        printf("0 Buzz Fizz FizzBuzz\n");
        printf("1\n");

        int count = 2; 
        while (count < n) {
            fn = f1 + f2;
            count++;
            printf("%i ", fn);

            //if divisible by 15, then also divisible by 3 and 5 
            if(fn % 15 == 0) 
                printf("Buzz Fizz FizzBuzz");
            
            //if divisible by 3
            else if (fn % 3 == 0) {
                printf("Buzz ");
                if(fn % 5 == 0)
                    printf("Fizz"); 
            }

            //if divisible by just 5 
            else if (fn % 5 == 0) 
                printf("Fizz"); 
            
            //if not divisible by any above and not divisible by 2 then you are prime
            else if ((fn == 2 || fn % 2 == 1) && fn != 1)
                printf("BuzzFizz"); 

            printf("\n");

            f1 = f2;
            f2 = fn;
        }
   }
}