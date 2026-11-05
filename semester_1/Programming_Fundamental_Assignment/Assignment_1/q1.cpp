#include <iostream>
using namespace std;

int main() {
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

return 0;
}