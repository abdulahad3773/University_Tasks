#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter size: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            int dr;
            if (i < n - 1 - i)
                dr = i;
            else
                dr = n - 1 - i;

            int dc;
            if (j < n - 1 - j)
                dc = j;
            else
                dc = n - 1 - j;


            int small, big;
            if (dr < dc) {
                small = dr;
                big = dc;
            } else {
                small = dc;
                big = dr;
            }
            if (small == 0 || big % 2 == 0)
                cout << "* ";
            else
                cout << "  ";
        }
        cout << endl;
    }
    return 0;
}