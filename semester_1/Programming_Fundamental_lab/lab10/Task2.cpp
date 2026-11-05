#include <iostream>
using namespace std;

bool is_palindrome(int num) {
    int original = num, reversed = 0;
    while (num > 0) {
        reversed = reversed * 10 + num % 10;
        num /= 10;
    }
    return original == reversed;
}

void print_palindromes(int start, int end) {
    cout << "Palindrome numbers between " << start << " and " << end << " are: ";
    for (int i = start; i <= end; i++) {
        if (is_palindrome(i))
            cout << i << " ";
    }
    cout << endl;
}

int main() {
    int start, end;
    cout << "Enter the starting number: ";
    cin >> start;
    cout << "Enter the ending number: ";
    cin >> end;
    print_palindromes(start, end);
    return 0;
}
