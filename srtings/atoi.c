#include <stdio.h>

void itoa(int num, char *str) {
    int i = 0;
    int isNegative = 0;

    // Handle zero explicitly
    if (num == 0) {
        str[0] = 48;
        str[1] = 0;
        return;
    }

    // Track and normalize negative
    if (num < 0) {
        isNegative = 1;
        num = -num;
    }

    // Convert digits
    while (num != 0) {
        int rem = num % 10;
        str[i] = rem + 48;  // ASCII for digits
        i++;
        num = num / 10;
    }

    // Append '-' if needed (will be placed correctly after reverse)
    if (isNegative) {
        str[i] = '-';
        i++;
    }

    str[i] = '\0';

    // Reverse the string
    int st = 0, end = i - 1;
    while (st < end) {
        char t = str[end];
        str[end] = str[st];
        str[st] = t;
        end--;
        st++;
    }
}

int main() {
    int num;
    char str[50];

    printf("Enter the number: ");
    scanf("%d", &num);  // "+1234" becomes 1234; "a1234" leaves num as 0

    itoa(num, str);
    printf("Integer to string is %s\n", str);

    return 0;
}




























