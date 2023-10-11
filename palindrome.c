#include <stdio.h>
int main() {
  int n, reversed = 0, remainder, original;
    printf("Enter an integer you want to check: ");
    scanf("%d", &n);
    original = n;
    while (n != 0) {
        remainder = n % 10;
        reversed = reversed * 10 + remainder;
        n /= 10;
    }
    printf("reverse of the no is:%d\n",reversed);
    if (original == reversed)
        printf("%d is a palindrome.", original);
    else
        printf("%d is not a palindrome.", original);

    return 0;
}
