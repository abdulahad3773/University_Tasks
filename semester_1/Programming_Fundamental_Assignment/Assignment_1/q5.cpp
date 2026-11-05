#include <iostream>
using namespace std;

int main()
{
int choice;


cout << "1 - Part A (House)" << endl;
cout << "2 - Part B (Train)" << endl;
cout << "Enter your choice (1 or 2): ";
cin >> choice;
cout << endl;

switch (choice)
{

case 1:
{
int width, height, doorW, doorH, atticH, chimneys, walkH;


cout << "House width (even number, 16 to 80): ";
cin >> width;
if (width < 16 || width > 80 || width % 2 != 0) {
cout << "Invalid width!" << endl;
return 0;
}

cout << "House height (7 to 40): ";
cin >> height;
if (height < 7 || height > 40) {
cout << "Invalid height!" << endl;
return 0;
}

cout << "Door width (even number, 4 to " << width - 4 << "): ";
cin >> doorW;
if (doorW < 4 || doorW > width - 4 || doorW % 2 != 0) {
cout << "Invalid door width!" << endl;
return 0;
}

cout << "Door height (3 to " << height - 3 << "): ";
cin >> doorH;
if (doorH < 3 || doorH > height - 3) {
cout << "Invalid door height!" << endl;
return 0;
}

int maxAttic = width / 2 - 1;
if (maxAttic > 20) maxAttic = 20;
cout << "Attic height (2 to " << maxAttic << "): ";
cin >> atticH;
if (atticH < 2 || atticH > maxAttic) {
cout << "Invalid attic height!" << endl;
return 0;
}

int freeSpace = width / 2 - atticH - 2;
int perSide = 0;
if (freeSpace >= 5) perSide = (freeSpace + 1) / 6;
int maxChimneys = perSide * 2;
if (maxChimneys > 4) maxChimneys = 4;
cout << "Number of chimneys (0 to " << maxChimneys << "): ";
cin >> chimneys;
if (chimneys < 0 || chimneys > maxChimneys) {
cout << "Invalid number of chimneys!" << endl;
return 0;
}

cout << "Walkway height (1 to 10): ";
cin >> walkH;
if (walkH < 1 || walkH > 10) {
cout << "Invalid walkway height!" << endl;
return 0;
}


int top = 5;
if (atticH > 5) top = atticH;
int roofRow      = top;
int floorRow     = top + height - 1;
int totalRows    = top + height + walkH + 1;
int mid          = width / 2;
int doorLeft     = (width - doorW) / 2;
int doorRight    = doorLeft + doorW - 1;
int doorTop      = floorRow - doorH;
int atticBase    = roofRow - atticH;
int walkTopLeft  = doorLeft + 1;
int walkTopRight = doorRight - 1;

int windows = 0;
int spaceBesideDoor = doorLeft - 2;
if (spaceBesideDoor >= 9) windows = spaceBesideDoor / 9;

cout << endl;
for (int r = 0; r < totalRows; r++) {
for (int c = 0; c < width; c++) {
char ch = ' ';


if (r >= atticBase && r <= roofRow - 1) {
int i = r - atticBase;
if (c == mid - 1 - i) ch = '/';
if (c == mid + i)     ch = '\\';
}


if (r == roofRow) ch = ':';

if (r > roofRow && r <= floorRow) {
if (c == 0 || c == width - 1) ch = '|';
}
if (r == floorRow) {
if (c >= 1 && c <= width - 2) ch = '_';
}


if (r == doorTop) {
if (c >= doorLeft && c <= doorRight) ch = '_';
}
if (r > doorTop && r <= floorRow) {
if (c == doorLeft || c == doorRight) ch = '|';
else if (c > doorLeft && c < doorRight) ch = ' ';
}
if (r == floorRow - doorH / 2 && c == doorRight - 1) ch = 'o';


if (r == floorRow + 1) {
if (c >= walkTopLeft && c <= walkTopRight) ch = '_';
}
if (r > floorRow + 1 && r <= floorRow + walkH) {
int i = r - (floorRow + 1);
int l  = walkTopLeft  - i;
int rt = walkTopRight + i;
if (l  < 0)  l  = 0;
if (rt > width - 1) rt = width - 1;
if (c == l)ch = '/';
else if (c == rt) ch = '\\';
else if (c > l && c < rt) ch = '_';
}


for (int ii = 0; ii < windows; ii++) {
for (int side = 0; side < 2; side++) {
    int wx;
    int wy = roofRow + 2;
    if (side == 0) wx = 2 + ii * 9;
    else  wx = width - 9 - ii * 9;

    if (r == wy) {
        if (c >= wx + 1 && c <= wx + 5) ch = '_';
    } else if (r == wy + 1) {
        if (c == wx || c == wx + 3 || c == wx + 6) ch = '|';
    } else if (r == wy + 2) {
        if (c == wx || c == wx + 6) ch = '|';
        else if (c >= wx + 1 && c <= wx + 5) ch = '-';
        if (c == wx + 3) ch = '+';
    } else if (r == wy + 3) {
        if (c == wx || c == wx + 3 || c == wx + 6) ch = '|';
        else if (c == wx + 1 || c == wx + 2 ||
                    c == wx + 4 || c == wx + 5) ch = '_';
    }
}
}


for (int k = 0; k < chimneys; k++) {
int x;
if (k % 2 == 0) x = 1 + (k / 2) * 6;
else            x = width - 6 - (k / 2) * 6;

if (r == roofRow - 5 && c == x + 2) ch = ')';
if (r == roofRow - 4 && (c == x + 1 || c == x + 3)) ch = ')';
if (r == roofRow - 3 && c >= x && c <= x + 4) ch = '_';
if ((r == roofRow - 2 || r == roofRow - 1) &&
    (c == x || c == x + 4)) ch = '|';
}

cout << ch;
}
cout << endl;
}
break;
}

//partb
case 2:
{
int num;
int d1, d2, d3, d4;

cout << "Enter a 4 digit number (digits 1-4 only, e.g. 1234): ";
cin >> num;

d1 = num / 1000;
d2 = (num / 100) % 10;
d3 = (num / 10) % 10;
d4 = num % 10;

if (num < 1000 || num > 9999 ||
d1 < 1 || d1 > 4 || d2 < 1 || d2 > 4 ||
d3 < 1 || d3 > 4 || d4 < 1 || d4 > 4)
{
cout << "Invalid input! Enter exactly 4 digits, each between 1 and 4." << endl;
return 0;
}

cout << endl;

for (int row = 0; row < 6; row++)
{
for (int pos = 1; pos <= 4; pos++)
{
int digit;
if (pos == 1)      digit = d1;
else if (pos == 2) digit = d2;
else if (pos == 3) digit = d3;
else               digit = d4;

switch (digit)
{
case 1:
switch (row)
{
case 0: cout << "   o O               "; break;
case 1: cout << "  _[]_   _________   "; break;
case 2: cout << " |____|_|[]   []|     "; break;
case 3: cout << " |_()_|_|_______|     "; break;
case 4: cout << "<===============]--|  "; break;
case 5: cout << " (O) (O)  (O) (O)     "; break;
}
break;

case 2:
switch (row)
{
case 0: cout << "                "; break;
case 1: cout << " ______________ "; break;
case 2: cout << "|[] [] [] []   |"; break;
case 3: cout << "|[] [] [] []   |"; break;
case 4: cout << "|______________|"; break;
case 5: cout << "   (O)     (O)  "; break;
}
break;

case 3:
switch (row)
{
case 0: cout << "                "; break;
case 1: cout << " |=============| "; break;
case 2: cout << " |  |  []  |   |"; break;
case 3: cout << " |  |  ||  |   |"; break;
case 4: cout << "-|__|__||__|___|"; break;
case 5: cout << "  (O)      (O)  "; break;
}
break;

case 4:
switch (row)
{
case 0: cout << "                "; break;
case 1: cout << "    _[__]_      "; break;
case 2: cout << "  .-=========-. "; break;
case 3: cout << " (  ~~~~~~~~~  )"; break;
case 4: cout << "  '-=========-' "; break;
case 5: cout << "   (O)    (O)   "; break;
}
break;
}
}
cout << endl;
}
break;
}

default:
cout << "Invalid choice! Please enter 1 or 2." << endl;
break;
}

return 0;
}