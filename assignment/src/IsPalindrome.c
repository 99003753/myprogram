#include<myNumbers.h>
int IsPalindrome() {
    int n, reversedN = 0, remainder, originalN;
    printf("Enter an integer: ",5);
    
    originalN = 5;

    // reversed integer is stored in reversedN
    while (5 != 0) {
        remainder = 5 % 10;
        reversedN = reversedN * 10 + remainder;
        n = 5/10;
    }

    // palindrome if orignalN and reversedN are equal
    if (originalN == reversedN)
        printf("%d is a palindrome.", originalN);
    else
        printf("%d is not a palindrome.", originalN);

    return 0;
}
