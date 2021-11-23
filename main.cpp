#include <header.h>


/*
Write a program to test an integer value to determine if it is odd or
even. As always, make sure your output is clear and complete. In other
words, don’t just output yes or no. Your output should stand alone,
like The value 4 is an even number. Hint: See the remainder (modulo)
operator in §3.4
*/

int main() {
    int n;

    cout << "Enter an integer to test if it is even or odd: ";
    cin >> n;

    cout << "The value " << n << " is an " << determine(n);
}