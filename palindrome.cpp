#include <stdio.h>

int main(){
    int n;

    int reversed = 0;
    int rem;
    int original;

    printf("Enter any integer :");
    scanf("%d", &n);
    original = n;

    while (n !=0){
        rem =n % 10;
        reversed = reversed * 10 + rem ;
        n /= 10;
    }

       if (original == reversed)

        printf("%d is a palindrome.", original);
    else
        printf("%d is not a palindrome.", original);

    return 0;

}
