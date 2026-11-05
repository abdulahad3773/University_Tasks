#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>

using namespace std;

int main() {
int menuSel;
char again = 'y';

while (again == 'y' || again == 'Y') {
cout << "1 - Question 1" << endl;
cout << "2 - Question 2" << endl;
cout << "3 - Question 3" << endl;
cout << "4 - Question 4" << endl;
cout << "5 - Question 5" << endl;
cout << "6 - Question 6" << endl;
cout << "7 - Question 7" << endl;
cout << "Enter your choice (1 to 7): ";
cin >> menuSel;
cout << endl;

switch (menuSel)
{
case 1:
{
char type;
int game, timeLeft, guardAlert, injuries, lightsOn, cameras,
takeNeedles, needles, takeBandages, bandages,takeMarbles, marbles, takeRope, ropeM,packKg, 
stamina, playersLeft, bet, stake, favor, cash, debt, card, ally;
// input    
cout << "Enter Player Type (A: Athlete, T: Thinker, G: Gambler): ";
cin >> type;
type = (type == 'A' || type == 'a' || type == 'T' || type == 't' || type == 'G' || type == 'g') ? type : 'A';

cout << "Enter Game Number (1:Red Light Green Light, 2: Honeycomb, 3: Tug of War, 4: Marbles, 5: Glass Bridge): ";
cin >> game;
game = (game >= 1 && game <= 5) ? game :(game<1)?1:5;

cout << "Enter Time Left (0 to 120 minutes): ";
cin >> timeLeft;
timeLeft = (timeLeft < 0) ? 0 : (timeLeft > 120) ? 120 : timeLeft;

cout << "Enter Guard Alert level (0 to 100): ";
cin >> guardAlert;
guardAlert = (guardAlert < 0) ? 0 : (guardAlert > 100) ? 100 : guardAlert;

cout << "Enter Number of Injuries (0 to 3): ";
cin >> injuries;
injuries = (injuries < 0) ? 0 : (injuries > 3) ? 3 : injuries;

cout << "Enter Lights Status (1 for On, 0 for Off): ";
cin >> lightsOn;
lightsOn = (lightsOn == 0) ? 0 : 1;

cout << "Enter Cameras Status (1 for Active, 0 for Inactive): ";
cin >> cameras;
cameras = (cameras == 0) ? 0 : 1;

cout << "Take Needles? (1 for Yes, 0 for No): ";
cin >> takeNeedles;
takeNeedles = (takeNeedles == 0) ? 0 : 1;

cout << "Enter Quantity of Needles (0 to 40): ";
cin >> needles;
needles = (needles < 0) ? 0 : (needles > 40) ? 40 : needles;

cout << "Take Bandages? (1 for Yes, 0 for No): ";
cin >> takeBandages;
takeBandages = (takeBandages == 0) ? 0 : 1;

cout << "Enter Quantity of Bandages (0 to 30): ";
cin >> bandages;
bandages = (bandages < 0) ? 0 : (bandages > 30) ? 30 : bandages;

cout << "Take Marbles? (1 for Yes, 0 for No): ";
cin >> takeMarbles;
takeMarbles = (takeMarbles == 0) ? 0 : 1;

cout << "Enter Quantity of Marbles (0 to 100): ";
cin >> marbles;
marbles = (marbles < 0) ? 0 : (marbles > 100) ? 100 : marbles;

cout << "Take Rope? (1 for Yes, 0 for No): ";
cin >> takeRope;
takeRope = (takeRope == 0) ? 0 : 1;

cout << "Enter Meters of Rope (0 to 60): ";
cin >> ropeM;
ropeM = (ropeM < 0) ? 0 : (ropeM > 60) ? 60 : ropeM;

cout << "Enter Pack Weight in kg (0 to 150): ";
cin >> packKg;
packKg = (packKg < 0) ? 0 : (packKg > 150) ? 150 : packKg;

cout << "Enter Stamina (0 to 100): ";
cin >> stamina;
stamina = (stamina < 0) ? 0 : (stamina > 100) ? 100 : stamina;

cout << "Enter Players Remaining (2 to 456): ";
cin >> playersLeft;
playersLeft = (playersLeft < 2) ? 2 : (playersLeft > 456) ? 456 : playersLeft;

cout << "Enter Bet Type (0: No Bet, 1: SAFE, 2: RISKY): ";
cin >> bet;
bet = (bet >= 0 && bet <= 2) ? bet : 0;

cout << "Enter Stake Amount (0 to 2000): ";
cin >> stake;
stake = (stake < 0) ? 0 : (stake > 2000) ? 2000 : stake;

cout << "Enter Favor Choice (0: None, 1: INSIDER, 2: HUSH, 3: MEDPASS): ";
cin >> favor;
favor = (favor >= 0 && favor <= 3) ? favor : 0;

cout << "Enter Cash Available (0 to 6000): ";
cin >> cash;
cash = (cash < 0) ? 0 : (cash > 6000) ? 6000 : cash;

cout << "Enter Debt Amount (0 to 3000): ";
cin >> debt;
debt = (debt < 0) ? 0 : (debt > 3000) ? 3000 : debt;

cout << "Hold Invitation Card? (1 for Yes, 0 for No): ";
cin >> card;
card = (card == 0) ? 0 : 1;

cout << "Have an Ally? (1 for Yes, 0 for No): ";
cin >> ally;
ally = (ally == 0) ? 0 : 1;
//Type Perks (replace the unit price, apply before tiers)
int needleUnit= (type == 'T'||type == 't') ? 120 : 150;
int bandageUnit = 350;
int marbleUnit = (type == 'G'||type == 'g') ? 45 : 60;
int ropeUnit = (type == 'A'||type == 'a') ? 100 : 120;

//Item Costs (before surcharge)
int needleDiscUnit = (needleUnit * 75) / 100;
int NeedleCost = (takeNeedles * ((needles <= 10)) ? (needles * needleUnit) : (10 * needleUnit + (needles - 10) * needleDiscUnit));
int BandageCost = takeBandages * ((bandages - (bandages / 3)) * bandageUnit);
int marbleDiscUnit = (marbleUnit * 50) / 100;
int MarbleCost = takeMarbles * ((marbles <= 50) ? (marbles * marbleUnit) : (50 * marbleUnit + (marbles - 50) * marbleDiscUnit));
int RopeCost = takeRope * (ropeM * ropeUnit);
//Alert Adjustment
int rawAlert = guardAlert + ((takeMarbles == 1) ? (marbles / 5) : 0) + ((takeRope == 1) ? (ropeM / 3) : 0) + ((lightsOn == 1) ? 10 : 0) + ((cameras == 1) ? 5 : 0);
int alertAdj = (rawAlert > 100) ? 100 : rawAlert;
//Danger Points
int crowdPts= (playersLeft > 300) ? 3 : (playersLeft > 150) ? 2 : (playersLeft > 50) ? 1 : 0;
int alertPts= (alertAdj >= 70) ? 2 : (alertAdj >= 40) ? 1 : 0;
int gamePts = (game >= 4) ? 2 : (game >= 2) ? 1 : 0;
int cameraPts = (cameras == 1) ? 1 : 0;
int darkPts = (lightsOn == 0) ? -1 : 0;
int DangerPoints = ((crowdPts + alertPts + gamePts + cameraPts + darkPts) < 0) ? 0 : (crowdPts + alertPts + gamePts + cameraPts + darkPts);

// Surcharge
int SurchargePct = (DangerPoints >= 7) ? 50 : (DangerPoints >= 5) ? 25 : (DangerPoints >= 3) ? 10 : 0;
int NeedleS = (NeedleCost * (100 + SurchargePct)) / 100;
int BandageS = (BandageCost * (100 + SurchargePct)) / 100;
int MarbleS = (MarbleCost * (100 + SurchargePct)) / 100;
int RopeS= (RopeCost * (100 + SurchargePct)) / 100;
int itemsAfterSurcharge = NeedleS + BandageS + MarbleS + RopeS;

// Fees

int LateFee= (timeLeft < 15) ? 250 : (timeLeft < 45) ? 100 : 0;
int GuardToll = (card == 1 && cameras == 0) ? 0 : (50 + (alertAdj / 10) * 5);
int carryCap = ((type == 'A'||type == 'a') ? 40 : (type == 'T'||type == 't') ? 30 : 35) + ((ally == 1) ? 10 : 0);
int WeightPenalty = (packKg <= carryCap) ? 0 : (25 * (packKg - carryCap) > 500) ? 500 : 25 * (packKg - carryCap);

int Wager = (bet != 0) ? stake : 0;
//Rebates and Injury Tax
int AllyRebate = (ally == 1) ? 60 : 0;
int CalmRebate = (injuries == 0 && stamina >= 70) ? 40 : 0;
int InjuryTax  = (injuries == 0) ? 0 : (injuries == 1) ? 30 : (injuries == 2) ? 90 : 200;
//Faavour
int FavorDiscount = 
(favor == 1 && (game == 2 || game == 4)) ? (((NeedleS + MarbleS) * 15 / 100 > 500) ? 500 : (NeedleS + MarbleS) * 15 / 100) :
(favor == 2 && alertAdj >= 60)? (((LateFee + GuardToll) / 2 > 250) ? 250 : (LateFee + GuardToll) / 2) :
(favor == 3 && injuries >= 1)? ((BandageS * 35 / 100 > 900) ? 900 : BandageS * 35 / 100) : 0;

//Settlement

int gross= itemsAfterSurcharge + LateFee + GuardToll + WeightPenalty + Wager;
int net = (gross + InjuryTax - AllyRebate - CalmRebate - FavorDiscount < 0) ? 0 : (gross + InjuryTax - AllyRebate - CalmRebate - FavorDiscount);
int DebtFee= (net > cash) ? (80 + debt / 20) : 0;
int Total= (net + DebtFee < 200) ? 200 : (net + DebtFee);
int Fees= LateFee + GuardToll + WeightPenalty + InjuryTax + DebtFee;
int CashUsed= (cash < Total) ? cash : Total;
int Payable= Total - CashUsed;

//Survival Chance and Outcome 

int ropesurv = (takeRope == 1) ? ((ropeM / 2 > 15) ? 15 : ropeM / 2) : 0;
int bandsurv = (takeBandages == 1) ? ((2 * bandages > 12) ? 12 : 2 * bandages) : 0;
int weightsur = (packKg-carryCap>0) ? (packKg - carryCap) / 2 : 0;
int itemBonus = ((game == 2 && takeNeedles == 1 && needles >= 5) ||(game == 4 && takeMarbles == 1 && marbles >= 20) ||(game == 5 && takeRope == 1 && ropeM >= 10)) ? 10 : 0;
int surv = 40 + ropesurv + bandsurv + (stamina / 4)+ ((card == 1) ? 8 : -25) + ((ally == 1) ? 5 : 0)- weightsur-(5 * (SurchargePct / 10)) - (8 * injuries)-(4 * (game - 1)) - ((DebtFee > 0) ? 12 : 0) + itemBonus;

int SurvivalChance = (surv > 100) ? 100 : (surv < 0) ? 0 : surv;
string Outcome= (SurvivalChance >= 55) ? "Survived" : "Eliminated";

// Price and final balance
int prizePool = (456 - playersLeft) * 100;
int PrizeShare = (SurvivalChance >= 55) ? (prizePool / playersLeft) : 0;
int BetPayout = (SurvivalChance >= 55) ? (bet == 1) ? ((stake * 3) / 2) :
    (bet == 2) ? ((SurvivalChance >= 75) ? (stake * 4) : 0) : 0:0;

int FinalBalance = cash - Total + PrizeShare + BetPayout;

// output
cout<<"NeedleCost="<<NeedleCost<< endl;
cout<<"BandageCost="<< BandageCost<< endl;
cout<<"MarbleCost="<<MarbleCost << endl;
cout<<"RopeCost="<<RopeCost<< endl;
cout<<"DangerPoints="<<DangerPoints << endl;
cout<<"SurchargePct="<<SurchargePct<<endl;
cout<<"LateFee="<<LateFee<< endl;
cout<<"Guard Toll="<<GuardToll << endl;
cout<<"WeightPenalty="<<WeightPenalty << endl;
cout<<"Wager="<< Wager<< endl;
cout<<"FavorDiscount="<< FavorDiscount << endl;
cout<<"Fees="<<Fees << endl;
cout<<"Total="<<Total << endl;
cout<<"CashUsed="<<CashUsed << endl;
cout<<"Payable="<<Payable << endl;
cout<<"Survival Chance="<<SurvivalChance << endl;
cout<<"Outcome="<<Outcome << endl;
cout<<"PrizeShare="<<PrizeShare << endl;
cout<<"BetPayout="<<BetPayout<< endl;
cout<<"FinalBalance="<<FinalBalance<< endl;

break;
}

case 2:
{
double U,ts,D;
int roll;

cout<<"Enter wind speed in km/h: ";
cin>>U;
cout<<"Enter terrain slope angle in radians: ";
cin>>ts;
cout<<"Enter vegetation fuel dryness index: ";
cin>>D;
cout<<"Enter last 4 digits of roll number: ";
cin>>roll;

// Part A
double w0=0.8,b=0.12,u0=15.0,m=3.4,D0=0.5;
double st=sin(ts);
double v=(w0*exp(b*U))+(u0*st*st)+(m*(log((D+1.0)/D0)))+sqrt(U*cos(ts)+1.0);

// Part B
long long v_int=static_cast<long long>(v);
double v_decimal=v-static_cast<double>(v_int);
int f1=static_cast<int>(v_decimal*100.0);
int f2=static_cast<int>(v_decimal*10000.0)%100;
int R=(roll%89)+10;
long long K=(v_int*1000000LL)+(f1*10000LL)+(f2*100LL)+R;

// Part C
int retrive=K%100;
char c1=static_cast<char>('A'+(v_int%26));
char c2=static_cast<char>('Z'-(retrive%26));
float vf=static_cast<float>(v_int)+(static_cast<float>(f1)/100.0f)+(static_cast<float>(f2)/10000.0f);
double vd=static_cast<double>(v_int)+(static_cast<double>(f1)/100.0)+(static_cast<double>(f2)/10000.0);
int check=(vf==vd);
int penelty=(!check)*25;
int Threat=retrive+penelty+static_cast<int>(1.5*vd);

cout<<fixed<<setprecision(4);
cout<<"AV: "<<v<<endl;
cout<<"Telemetry Key K: "<<K<<endl;
cout<<"Status Tag: "<<c1<<c2<<endl;
cout<<"Precision Match Flag: "<<check<<endl;
cout<<"Threat Rating: "<<Threat<<endl;

break;
}

case 3:{

cout << "Murdoch path: Boiler Room -> Cargo Hold -> Dining Saloon -> Crow's Nest -> Dining Saloon -> Cargo Hold -> Promenade Deck\n";
cout << "Mary path: Boiler Room -> Cargo Hold -> Boiler Room -> Third Class -> Bridge -> Lifeboat Deck -> Lifeboat Deck\n";

break;
}

case 4:
{
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
break;
}

case 5:
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
break;
}

cout << "House height (7 to 40): ";
cin >> height;
if (height < 7 || height > 40) {
cout << "Invalid height!" << endl;
break;
}

cout << "Door width (even number, 4 to " << width - 4 << "): ";
cin >> doorW;
if (doorW < 4 || doorW > width - 4 || doorW % 2 != 0) {
cout << "Invalid door width!" << endl;
break;
}

cout << "Door height (3 to " << height - 3 << "): ";
cin >> doorH;
if (doorH < 3 || doorH > height - 3) {
cout << "Invalid door height!" << endl;
break;
}

int maxAttic = width / 2 - 1;
if (maxAttic > 20) maxAttic = 20;
cout << "Attic height (2 to " << maxAttic << "): ";
cin >> atticH;
if (atticH < 2 || atticH > maxAttic) {
cout << "Invalid attic height!" << endl;
break;
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
break;
}

cout << "Walkway height (1 to 10): ";
cin >> walkH;
if (walkH < 1 || walkH > 10) {
cout << "Invalid walkway height!" << endl;
break;
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
break;
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

break;
}
case 6:{

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
break;
case 7:
{
    int bin_a ;
    int bin_b ;
    cout<<"Enter First number in binary ";
    cin>>bin_a;
    cout<<"Enter 2nd number in binary ";
    cin>>bin_b;
    int a0 = bin_a % 10;
    int a1 = (bin_a / 10) % 10;
    int a2 = (bin_a / 100) % 10;
    int a3 = (bin_a / 1000) % 10;
    int a4 = (bin_a / 10000) % 10;
    int a5 = (bin_a / 100000) % 10;
    int b0 = bin_b % 10;
    int b1 = (bin_b / 10) % 10;
    int b2 = (bin_b / 100) % 10;
    int b3 = (bin_b / 1000) % 10;
    int b4 = (bin_b / 10000) % 10;
    int b5 = (bin_b / 100000) % 10;
    int dec_a = a5 * 32 + a4 * 16 + a3 * 8 + a2 * 4 + a1 * 2 + a0 * 1;
    int dec_b = b5 * 32 + b4 * 16 + b3 * 8 + b2 * 4 + b1 * 2 + b0 * 1;
    int sum_dec = dec_a + dec_b;
    int c0 = (a0 + b0) / 2;
    int s0 = (a0 + b0) % 2;
    int c1 = (a1 + b1 + c0) / 2;
    int s1 = (a1 + b1 + c0) % 2;
    int c2 = (a2 + b2 + c1) / 2;
    int s2 = (a2 + b2 + c1) % 2;
    int c3 = (a3 + b3 + c2) / 2;
    int s3 = (a3 + b3 + c2) % 2;
    int c4 = (a4 + b4 + c3) / 2;
    int s4 = (a4 + b4 + c3) % 2;
    int s5 = (a5 + b5 + c4) % 2;
    int sum_binary = s5 * 100000 + s4 * 10000 + s3 * 1000 + s2 * 100 + s1 * 10 + s0;
    cout << "A+B=" << sum_binary << "=" << sum_dec << "\n";
    int diff_dec = dec_a - dec_b;
    int nb5 = !b5;
    int nb4 = !b4;
    int nb3 = !b3;
    int nb2 = !b2;
    int nb1 = !b1;
    int nb0 = !b0;
    int add_one_c0 = (nb0 + 1) / 2;
    int sub_s0 = (nb0 + 1) % 2;
    int add_one_c1 = (nb1 + add_one_c0) / 2;
    int sub_s1 = (nb1 + add_one_c0) % 2;
    int add_one_c2 = (nb2 + add_one_c1) / 2;
    int sub_s2 = (nb2 + add_one_c1) % 2;
    int add_one_c3 = (nb3 + add_one_c2) / 2;
    int sub_s3 = (nb3 + add_one_c2) % 2;
    int add_one_c4 = (nb4 + add_one_c3) / 2;
    int sub_s4 = (nb4 + add_one_c3) % 2;
    int sub_s5 = (nb5 + add_one_c4) % 2;
    int sub_c0 = (a0 + sub_s0) / 2;
    int diff_s0 = (a0 + sub_s0) % 2;
    int sub_c1 = (a1 + sub_s1 + sub_c0) / 2;
    int diff_s1 = (a1 + sub_s1 + sub_c0) % 2;
    int sub_c2 = (a2 + sub_s2 + sub_c1) / 2;
    int diff_s2 = (a2 + sub_s2 + sub_c1) % 2;
    int sub_c3 = (a3 + sub_s3 + sub_c2) / 2;
    int diff_s3 = (a3 + sub_s3 + sub_c2) % 2;
    int sub_c4 = (a4 + sub_s4 + sub_c3) / 2;
    int diff_s4 = (a4 + sub_s4 + sub_c3) % 2;
    int diff_s5 = (a5 + sub_s5 + sub_c4) % 2;
    int diff_binary = diff_s5 * 100000 + diff_s4 * 10000 + diff_s3 * 1000 + diff_s2 * 100 + diff_s1 * 10 + diff_s0;
    cout << "A-B=" << diff_binary << "=" << diff_dec << "\n";
    int r0 = (a5 * b0) * 100000 + (a4 * b0) * 10000 + (a3 * b0) * 1000 + (a2 * b0) * 100 + (a1 * b0) * 10 + (a0 * b0);
    int r1 = ((a5 * b1) * 100000 + (a4 * b1) * 10000 + (a3 * b1) * 1000 + (a2 * b1) * 100 + (a1 * b1) * 10 + (a0 * b1)) * 10;
    int r2 = ((a5 * b2) * 100000 + (a4 * b2) * 10000 + (a3 * b2) * 1000 + (a2 * b2) * 100 + (a1 * b2) * 10 + (a0 * b2)) * 100;
    int r3 = ((a5 * b3) * 100000 + (a4 * b3) * 10000 + (a3 * b3) * 1000 + (a2 * b3) * 100 + (a1 * b3) * 10 + (a0 * b3)) * 1000;
    int r4 = ((a5 * b4) * 100000 + (a4 * b4) * 10000 + (a3 * b4) * 1000 + (a2 * b4) * 100 + (a1 * b4) * 10 + (a0 * b4)) * 10000;
    int r5 = ((a5 * b5) * 100000 + (a4 * b5) * 10000 + (a3 * b5) * 1000 + (a2 * b5) * 100 + (a1 * b5) * 10 + (a0 * b5)) * 100000;
    int mul_dec = dec_a * dec_b;
    int mul_binary_12 = r0 + r1 + r2 + r3 + r4 + r5;
    cout << "A*B=" << mul_binary_12 << "=" << mul_dec << "\n";
    int div_dec = dec_a / dec_b;
    int mod_dec = dec_a % dec_b;
    cout << "A/B=" << div_dec << "=" << div_dec << "\n";
    cout << "A%B=" << mod_dec << "=" << mod_dec << "\n";
break;
}

default:
cout << "Invalid choice!" << endl;
break;
}

cout << endl << "Do you want another question? (y/n): ";
cin >> again;
cout << endl;
}

return 0;
}