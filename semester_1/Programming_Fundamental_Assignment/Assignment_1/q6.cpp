#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>

using namespace std;

int main() {
    const string GREEN = "\033[32m";
    const string WHITE = "\033[97m";
    const string RED = "\033[31m";
    const string RESET = "\033[0m";

    int R = 0;
    bool ok = false;

    while (!ok) {
        cout << "Initialize Silent Containment Matrix Radius (multiples of 4, e.g., 8, 12, 16): ";
        cin >> R;

        if (R >= 8 && R <= 60 && R % 4 == 0) {
            ok = true;
        }
        else {
            cout << "Invalid! Enter a multiple of 4 between 8 and 60 (8, 12, 16...).\n";
        }
    }

    int Hw = (2 * R) / 3;
    int Hd = R - 2;
    int H = Hw + Hd;
    int Wc = 2 * Hd + 1;
    int Lw = R + 3;
    int Hwg = R / 2;
    int rv = R / 2;
    int rh = 2 * rv;
    int Xmax = Wc + Lw;

    cout << endl;

    for (int y = -H; y <= H; y++) {
        int ay = abs(y);
        int e = (ay <= Hw) ? Wc : 2 * (H - ay) + 1;

        string line = "";
        string cur = "";

        for (int x = -Xmax; x <= Xmax; x++) {
            int ax = abs(x);
            char ch = ' ';
            string col = RESET;

            // ---------------- face ----------------
            // thin elliptical ring (outer ellipse minus inner ellipse)
            double A = rh + 1.3;
            double B = rv + 1.0;
            double d = pow(x / A, 2) + pow(y / B, 2);
            bool ring = (d < 1.0 && d >= 0.595);

            // two tall eyes, 3 wide, closer to the centre
            bool eyes = (ax >= rh / 3 && ax <= rh / 3 + 2 &&
                         y >= -rv / 2 && y <= 0);

            // mouth: flat middle, ends step down
            int m0 = rv / 3;
            bool mouth = (y == m0     && ax <= rh / 3) ||
                         (y == m0 + 1 && ax >= rh / 3 && ax <= rh / 2) ||
                         (y == m0 + 2 && ax >= rh / 2 && ax <= (3 * rh) / 4);

            // drips under the chin: 3 centre drips (2 rows) + 2 outer legs (2 rows)
            bool drips = ((y == rv + 1 || y == rv + 2) &&
                          (x == 0 || ax == (rh * 9) / 20)) ||
                         ((y == rv || y == rv + 1) && ax == (3 * rh) / 4);

            // side marks: far ear marks + vertical jaw bars
            bool sides = ((y == 1 || y == 2) && ax == rh + 5) ||
                         ((y >= rv / 3 && y <= rv) && ax == rh + 1);

            if (ring || eyes || mouth || drips || sides) {
                ch = '#';
                col = RED;
            }

            // body outline
            else if (ax <= e && ay <= H) {
                int thick = (ay <= Hw) ? 2 : 3;
                int inner = (ay <= Hw) ? e - 2 : e - 6;

                if (ax > e - thick) {
                    ch = 'X';
                    col = WHITE;
                }
                else if (ay > Hw && ax > e - 6) {
                    ch = '+';
                    col = GREEN;
                }
                else if (ax <= inner) {
                    ch = (ax % 2 == 0) ? '.' : ' ';
                    col = RESET;
                }
            }

            // wings
            else if (ay <= Hwg) {
                int hi = Wc + Lw - 2 * ay;
                int lo = (ay == 0) ? Wc + 1 : hi - 3;

                if (lo < Wc + 1) {
                    lo = Wc + 1;
                }

                if (ax >= lo && ax <= hi) {
                    ch = '+';
                    col = GREEN;
                }
            }

            if (col != cur) {
                line += col;
                cur = col;
            }

            line += ch;
        }

        line += RESET;
        cout << setw(2) << "" << line << endl;
    }

    return 0;
}