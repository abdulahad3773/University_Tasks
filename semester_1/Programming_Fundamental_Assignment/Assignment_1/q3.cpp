#include <iostream>
using namespace std;

int main() {
int murCurrent = 0, maryCurrent = 0;
int murFrozen = 0, maryFrozen = 0;

int murVisitedBoilerRoom = 1, murVisitedCargoHold = 0, murVisitedThirdClass = 0;
int murVisitedDiningSaloon = 0, murVisitedPromenadeDeck = 0, murVisitedBridge = 0;
int murVisitedLifeboatDeck = 0, murVisitedCrowsNest = 0;

int maryVisitedBoilerRoom = 1, maryVisitedCargoHold = 0, maryVisitedThirdClass = 0;
int maryVisitedDiningSaloon = 0, maryVisitedPromenadeDeck = 0, maryVisitedBridge = 0;
int maryVisitedLifeboatDeck = 0, maryVisitedCrowsNest = 0;

switch (murFrozen) {
case 0:
switch (murCurrent) {
    case 2:
        switch (murVisitedBridge) {
            case 0: cout << "WaterRising\n"; murCurrent = 5; murVisitedBridge = 1; break;
        }
        break;
}
switch (murCurrent) {
    case 0:
        switch (murVisitedCargoHold) {
            case 0: murCurrent = 1; murVisitedCargoHold = 1; break;
            case 1: switch (murVisitedThirdClass) { case 0: murCurrent = 2; murVisitedThirdClass = 1; break; } break;
        }
        break;
    case 1:
        switch (murVisitedDiningSaloon) {
            case 0: murCurrent = 3; murVisitedDiningSaloon = 1; break;
            case 1: switch (murVisitedPromenadeDeck) { case 0: murCurrent = 4; murVisitedPromenadeDeck = 1; break; case 1: switch (murVisitedBoilerRoom) { case 0: murCurrent = 0; murVisitedBoilerRoom = 1; break; } break; } break;
        }
        break;
    case 2:
        switch (murVisitedBoilerRoom) {
            case 0: murCurrent = 0; murVisitedBoilerRoom = 1; break;
            case 1: switch (murVisitedBridge) { case 0: murCurrent = 5; murVisitedBridge = 1; break; case 1: switch (murVisitedLifeboatDeck) { case 0: murCurrent = 6; murVisitedLifeboatDeck = 1; break; } break; } break;
        }
        break;
    case 3:
        switch (murVisitedCargoHold) {
            case 0: murCurrent = 1; murVisitedCargoHold = 1; break;
            case 1: switch (murVisitedCrowsNest) { case 0: murCurrent = 7; murVisitedCrowsNest = 1; break; case 1: cout << "TurnBack\n"; murCurrent = 1; break; } break;
        }
        break;
    case 4:
        switch (murVisitedCargoHold) {
            case 0: murCurrent = 1; murVisitedCargoHold = 1; break;
            case 1: switch (murVisitedCrowsNest) { case 0: murCurrent = 7; murVisitedCrowsNest = 1; break; } break;
        }
        break;
    case 5:
        switch (murVisitedThirdClass) {
            case 0: murCurrent = 2; murVisitedThirdClass = 1; break;
            case 1: switch (murVisitedLifeboatDeck) { case 0: murCurrent = 6; murVisitedLifeboatDeck = 1; break; case 1: switch (murVisitedCrowsNest) { case 0: murCurrent = 7; murVisitedCrowsNest = 1; break; } break; } break;
        }
        break;
    case 6:
        switch (murVisitedThirdClass) {
            case 0: murCurrent = 2; murVisitedThirdClass = 1; break;
            case 1: switch (murVisitedBridge) { case 0: murCurrent = 5; murVisitedBridge = 1; break; } break;
        }
        break;
    case 7:
        switch (murVisitedDiningSaloon) {
            case 0: murCurrent = 3; murVisitedDiningSaloon = 1; break;
            case 1: switch (murVisitedPromenadeDeck) { case 0: murCurrent = 4; murVisitedPromenadeDeck = 1; break; } break;
        }
        break;
}
switch (murCurrent) {
    case 6: cout << "Rescued\n"; murFrozen = 1; break;
}
switch (murCurrent) {
    case 7:
        switch (murVisitedDiningSaloon) {
            case 1: cout << "DoorSealed\n"; murVisitedDiningSaloon = 0; break;
        }
        break;
}
break;
}

switch (murFrozen) {
case 0:
switch (murCurrent) {
    case 2:
        switch (murVisitedBridge) {
            case 0: cout << "WaterRising\n"; murCurrent = 5; murVisitedBridge = 1; break;
        }
        break;
}
switch (murCurrent) {
    case 0:
        switch (murVisitedCargoHold) {
            case 0: murCurrent = 1; murVisitedCargoHold = 1; break;
            case 1: switch (murVisitedThirdClass) { case 0: murCurrent = 2; murVisitedThirdClass = 1; break; } break;
        }
        break;
    case 1:
        switch (murVisitedDiningSaloon) {
            case 0: murCurrent = 3; murVisitedDiningSaloon = 1; break;
            case 1: switch (murVisitedPromenadeDeck) { case 0: murCurrent = 4; murVisitedPromenadeDeck = 1; break; case 1: switch (murVisitedBoilerRoom) { case 0: murCurrent = 0; murVisitedBoilerRoom = 1; break; } break; } break;
        }
        break;
    case 2:
        switch (murVisitedBoilerRoom) {
            case 0: murCurrent = 0; murVisitedBoilerRoom = 1; break;
            case 1: switch (murVisitedBridge) { case 0: murCurrent = 5; murVisitedBridge = 1; break; case 1: switch (murVisitedLifeboatDeck) { case 0: murCurrent = 6; murVisitedLifeboatDeck = 1; break; } break; } break;
        }
        break;
    case 3:
        switch (murVisitedCargoHold) {
            case 0: murCurrent = 1; murVisitedCargoHold = 1; break;
            case 1: switch (murVisitedCrowsNest) { case 0: murCurrent = 7; murVisitedCrowsNest = 1; break; case 1: cout << "TurnBack\n"; murCurrent = 1; break; } break;
        }
        break;
    case 4:
        switch (murVisitedCargoHold) {
            case 0: murCurrent = 1; murVisitedCargoHold = 1; break;
            case 1: switch (murVisitedCrowsNest) { case 0: murCurrent = 7; murVisitedCrowsNest = 1; break; } break;
        }
        break;
    case 5:
        switch (murVisitedThirdClass) {
            case 0: murCurrent = 2; murVisitedThirdClass = 1; break;
            case 1: switch (murVisitedLifeboatDeck) { case 0: murCurrent = 6; murVisitedLifeboatDeck = 1; break; case 1: switch (murVisitedCrowsNest) { case 0: murCurrent = 7; murVisitedCrowsNest = 1; break; } break; } break;
        }
        break;
    case 6:
        switch (murVisitedThirdClass) {
            case 0: murCurrent = 2; murVisitedThirdClass = 1; break;
            case 1: switch (murVisitedBridge) { case 0: murCurrent = 5; murVisitedBridge = 1; break; } break;
        }
        break;
    case 7:
        switch (murVisitedDiningSaloon) {
            case 0: murCurrent = 3; murVisitedDiningSaloon = 1; break;
            case 1: switch (murVisitedPromenadeDeck) { case 0: murCurrent = 4; murVisitedPromenadeDeck = 1; break; } break;
        }
        break;
}
switch (murCurrent) {
    case 6: cout << "Rescued\n"; murFrozen = 1; break;
}
switch (murCurrent) {
    case 7:
        switch (murVisitedDiningSaloon) {
            case 1: cout << "DoorSealed\n"; murVisitedDiningSaloon = 0; break;
        }
        break;
}
break;
}

switch (murFrozen) {
case 0:
switch (murCurrent) {
    case 2:
        switch (murVisitedBridge) {
            case 0: cout << "WaterRising\n"; murCurrent = 5; murVisitedBridge = 1; break;
        }
        break;
}
switch (murCurrent) {
    case 0:
        switch (murVisitedCargoHold) {
            case 0: murCurrent = 1; murVisitedCargoHold = 1; break;
            case 1: switch (murVisitedThirdClass) { case 0: murCurrent = 2; murVisitedThirdClass = 1; break; } break;
        }
        break;
    case 1:
        switch (murVisitedDiningSaloon) {
            case 0: murCurrent = 3; murVisitedDiningSaloon = 1; break;
            case 1: switch (murVisitedPromenadeDeck) { case 0: murCurrent = 4; murVisitedPromenadeDeck = 1; break; case 1: switch (murVisitedBoilerRoom) { case 0: murCurrent = 0; murVisitedBoilerRoom = 1; break; } break; } break;
        }
        break;
    case 2:
        switch (murVisitedBoilerRoom) {
            case 0: murCurrent = 0; murVisitedBoilerRoom = 1; break;
            case 1: switch (murVisitedBridge) { case 0: murCurrent = 5; murVisitedBridge = 1; break; case 1: switch (murVisitedLifeboatDeck) { case 0: murCurrent = 6; murVisitedLifeboatDeck = 1; break; } break; } break;
        }
        break;
    case 3:
        switch (murVisitedCargoHold) {
            case 0: murCurrent = 1; murVisitedCargoHold = 1; break;
            case 1: switch (murVisitedCrowsNest) { case 0: murCurrent = 7; murVisitedCrowsNest = 1; break; case 1: cout << "TurnBack\n"; murCurrent = 1; break; } break;
        }
        break;
    case 4:
        switch (murVisitedCargoHold) {
            case 0: murCurrent = 1; murVisitedCargoHold = 1; break;
            case 1: switch (murVisitedCrowsNest) { case 0: murCurrent = 7; murVisitedCrowsNest = 1; break; } break;
        }
        break;
    case 5:
        switch (murVisitedThirdClass) {
            case 0: murCurrent = 2; murVisitedThirdClass = 1; break;
            case 1: switch (murVisitedLifeboatDeck) { case 0: murCurrent = 6; murVisitedLifeboatDeck = 1; break; case 1: switch (murVisitedCrowsNest) { case 0: murCurrent = 7; murVisitedCrowsNest = 1; break; } break; } break;
        }
        break;
    case 6:
        switch (murVisitedThirdClass) {
            case 0: murCurrent = 2; murVisitedThirdClass = 1; break;
            case 1: switch (murVisitedBridge) { case 0: murCurrent = 5; murVisitedBridge = 1; break; } break;
        }
        break;
    case 7:
        switch (murVisitedDiningSaloon) {
            case 0: murCurrent = 3; murVisitedDiningSaloon = 1; break;
            case 1: switch (murVisitedPromenadeDeck) { case 0: murCurrent = 4; murVisitedPromenadeDeck = 1; break; } break;
        }
        break;
}
switch (murCurrent) {
    case 6: cout << "Rescued\n"; murFrozen = 1; break;
}
switch (murCurrent) {
    case 7:
        switch (murVisitedDiningSaloon) {
            case 1: cout << "DoorSealed\n"; murVisitedDiningSaloon = 0; break;
        }
        break;
}
break;
}


switch (murFrozen) {
case 0:
switch (murCurrent) {
    case 2:
        switch (murVisitedBridge) {
            case 0: cout << "WaterRising\n"; murCurrent = 5; murVisitedBridge = 1; break;
        }
        break;
}
switch (murCurrent) {
    case 0:
        switch (murVisitedCargoHold) {
            case 0: murCurrent = 1; murVisitedCargoHold = 1; break;
            case 1: switch (murVisitedThirdClass) { case 0: murCurrent = 2; murVisitedThirdClass = 1; break; } break;
        }
        break;
    case 1:
        switch (murVisitedDiningSaloon) {
            case 0: murCurrent = 3; murVisitedDiningSaloon = 1; break;
            case 1: switch (murVisitedPromenadeDeck) { case 0: murCurrent = 4; murVisitedPromenadeDeck = 1; break; case 1: switch (murVisitedBoilerRoom) { case 0: murCurrent = 0; murVisitedBoilerRoom = 1; break; } break; } break;
        }
        break;
    case 2:
        switch (murVisitedBoilerRoom) {
            case 0: murCurrent = 0; murVisitedBoilerRoom = 1; break;
            case 1: switch (murVisitedBridge) { case 0: murCurrent = 5; murVisitedBridge = 1; break; case 1: switch (murVisitedLifeboatDeck) { case 0: murCurrent = 6; murVisitedLifeboatDeck = 1; break; } break; } break;
        }
        break;
    case 3:
        switch (murVisitedCargoHold) {
            case 0: murCurrent = 1; murVisitedCargoHold = 1; break;
            case 1: switch (murVisitedCrowsNest) { case 0: murCurrent = 7; murVisitedCrowsNest = 1; break; case 1: cout << "TurnBack\n"; murCurrent = 1; break; } break;
        }
        break;
    case 4:
        switch (murVisitedCargoHold) {
            case 0: murCurrent = 1; murVisitedCargoHold = 1; break;
            case 1: switch (murVisitedCrowsNest) { case 0: murCurrent = 7; murVisitedCrowsNest = 1; break; } break;
        }
        break;
    case 5:
        switch (murVisitedThirdClass) {
            case 0: murCurrent = 2; murVisitedThirdClass = 1; break;
            case 1: switch (murVisitedLifeboatDeck) { case 0: murCurrent = 6; murVisitedLifeboatDeck = 1; break; case 1: switch (murVisitedCrowsNest) { case 0: murCurrent = 7; murVisitedCrowsNest = 1; break; } break; } break;
        }
        break;
    case 6:
        switch (murVisitedThirdClass) {
            case 0: murCurrent = 2; murVisitedThirdClass = 1; break;
            case 1: switch (murVisitedBridge) { case 0: murCurrent = 5; murVisitedBridge = 1; break; } break;
        }
        break;
    case 7:
        switch (murVisitedDiningSaloon) {
            case 0: murCurrent = 3; murVisitedDiningSaloon = 1; break;
            case 1: switch (murVisitedPromenadeDeck) { case 0: murCurrent = 4; murVisitedPromenadeDeck = 1; break; } break;
        }
        break;
}
switch (murCurrent) {
    case 6: cout << "Rescued\n"; murFrozen = 1; break;
}
switch (murCurrent) {
    case 7:
        switch (murVisitedDiningSaloon) {
            case 1: cout << "DoorSealed\n"; murVisitedDiningSaloon = 0; break;
        }
        break;
}
break;
}


switch (murFrozen) {
case 0:
switch (murCurrent) {
    case 2:
        switch (murVisitedBridge) {
            case 0: cout << "WaterRising\n"; murCurrent = 5; murVisitedBridge = 1; break;
        }
        break;
}
switch (murCurrent) {
    case 0:
        switch (murVisitedCargoHold) {
            case 0: murCurrent = 1; murVisitedCargoHold = 1; break;
            case 1: switch (murVisitedThirdClass) { case 0: murCurrent = 2; murVisitedThirdClass = 1; break; } break;
        }
        break;
    case 1:
        switch (murVisitedDiningSaloon) {
            case 0: murCurrent = 3; murVisitedDiningSaloon = 1; break;
            case 1: switch (murVisitedPromenadeDeck) { case 0: murCurrent = 4; murVisitedPromenadeDeck = 1; break; case 1: switch (murVisitedBoilerRoom) { case 0: murCurrent = 0; murVisitedBoilerRoom = 1; break; } break; } break;
        }
        break;
    case 2:
        switch (murVisitedBoilerRoom) {
            case 0: murCurrent = 0; murVisitedBoilerRoom = 1; break;
            case 1: switch (murVisitedBridge) { case 0: murCurrent = 5; murVisitedBridge = 1; break; case 1: switch (murVisitedLifeboatDeck) { case 0: murCurrent = 6; murVisitedLifeboatDeck = 1; break; } break; } break;
        }
        break;
    case 3:
        switch (murVisitedCargoHold) {
            case 0: murCurrent = 1; murVisitedCargoHold = 1; break;
            case 1: switch (murVisitedCrowsNest) { case 0: murCurrent = 7; murVisitedCrowsNest = 1; break; case 1: cout << "TurnBack\n"; murCurrent = 1; break; } break;
        }
        break;
    case 4:
        switch (murVisitedCargoHold) {
            case 0: murCurrent = 1; murVisitedCargoHold = 1; break;
            case 1: switch (murVisitedCrowsNest) { case 0: murCurrent = 7; murVisitedCrowsNest = 1; break; } break;
        }
        break;
    case 5:
        switch (murVisitedThirdClass) {
            case 0: murCurrent = 2; murVisitedThirdClass = 1; break;
            case 1: switch (murVisitedLifeboatDeck) { case 0: murCurrent = 6; murVisitedLifeboatDeck = 1; break; case 1: switch (murVisitedCrowsNest) { case 0: murCurrent = 7; murVisitedCrowsNest = 1; break; } break; } break;
        }
        break;
    case 6:
        switch (murVisitedThirdClass) {
            case 0: murCurrent = 2; murVisitedThirdClass = 1; break;
            case 1: switch (murVisitedBridge) { case 0: murCurrent = 5; murVisitedBridge = 1; break; } break;
        }
        break;
    case 7:
        switch (murVisitedDiningSaloon) {
            case 0: murCurrent = 3; murVisitedDiningSaloon = 1; break;
            case 1: switch (murVisitedPromenadeDeck) { case 0: murCurrent = 4; murVisitedPromenadeDeck = 1; break; } break;
        }
        break;
}
switch (murCurrent) {
    case 6: cout << "Rescued\n"; murFrozen = 1; break;
}
switch (murCurrent) {
    case 7:
        switch (murVisitedDiningSaloon) {
            case 1: cout << "DoorSealed\n"; murVisitedDiningSaloon = 0; break;
        }
        break;
}
break;
}


switch (murFrozen) {
case 0:
switch (murCurrent) {
    case 2:
        switch (murVisitedBridge) {
            case 0: cout << "WaterRising\n"; murCurrent = 5; murVisitedBridge = 1; break;
        }
        break;
}
switch (murCurrent) {
    case 0:
        switch (murVisitedCargoHold) {
            case 0: murCurrent = 1; murVisitedCargoHold = 1; break;
            case 1: switch (murVisitedThirdClass) { case 0: murCurrent = 2; murVisitedThirdClass = 1; break; } break;
        }
        break;
    case 1:
        switch (murVisitedDiningSaloon) {
            case 0: murCurrent = 3; murVisitedDiningSaloon = 1; break;
            case 1: switch (murVisitedPromenadeDeck) { case 0: murCurrent = 4; murVisitedPromenadeDeck = 1; break; case 1: switch (murVisitedBoilerRoom) { case 0: murCurrent = 0; murVisitedBoilerRoom = 1; break; } break; } break;
        }
        break;
    case 2:
        switch (murVisitedBoilerRoom) {
            case 0: murCurrent = 0; murVisitedBoilerRoom = 1; break;
            case 1: switch (murVisitedBridge) { case 0: murCurrent = 5; murVisitedBridge = 1; break; case 1: switch (murVisitedLifeboatDeck) { case 0: murCurrent = 6; murVisitedLifeboatDeck = 1; break; } break; } break;
        }
        break;
    case 3:
        switch (murVisitedCargoHold) {
            case 0: murCurrent = 1; murVisitedCargoHold = 1; break;
            case 1: switch (murVisitedCrowsNest) { case 0: murCurrent = 7; murVisitedCrowsNest = 1; break; case 1: cout << "TurnBack\n"; murCurrent = 1; break; } break;
        }
        break;
    case 4:
        switch (murVisitedCargoHold) {
            case 0: murCurrent = 1; murVisitedCargoHold = 1; break;
            case 1: switch (murVisitedCrowsNest) { case 0: murCurrent = 7; murVisitedCrowsNest = 1; break; } break;
        }
        break;
    case 5:
        switch (murVisitedThirdClass) {
            case 0: murCurrent = 2; murVisitedThirdClass = 1; break;
            case 1: switch (murVisitedLifeboatDeck) { case 0: murCurrent = 6; murVisitedLifeboatDeck = 1; break; case 1: switch (murVisitedCrowsNest) { case 0: murCurrent = 7; murVisitedCrowsNest = 1; break; } break; } break;
        }
        break;
    case 6:
        switch (murVisitedThirdClass) {
            case 0: murCurrent = 2; murVisitedThirdClass = 1; break;
            case 1: switch (murVisitedBridge) { case 0: murCurrent = 5; murVisitedBridge = 1; break; } break;
        }
        break;
    case 7:
        switch (murVisitedDiningSaloon) {
            case 0: murCurrent = 3; murVisitedDiningSaloon = 1; break;
            case 1: switch (murVisitedPromenadeDeck) { case 0: murCurrent = 4; murVisitedPromenadeDeck = 1; break; } break;
        }
        break;
}
switch (murCurrent) {
    case 6: cout << "Rescued\n"; murFrozen = 1; break;
}
switch (murCurrent) {
    case 7:
        switch (murVisitedDiningSaloon) {
            case 1: cout << "DoorSealed\n"; murVisitedDiningSaloon = 0; break;
        }
        break;
}
break;
}


//mary moves

switch (maryFrozen) {
case 0:
switch (maryCurrent) {
    case 2:
        switch (maryVisitedBridge) {
            case 0: cout << "WaterRising\n"; maryCurrent = 5; maryVisitedBridge = 1; break;
        }
        break;
}
switch (maryCurrent) {
    case 0:
        switch (maryVisitedCargoHold) {
            case 0: maryCurrent = 1; maryVisitedCargoHold = 1; break;
            case 1: switch (maryVisitedThirdClass) { case 0: maryCurrent = 2; maryVisitedThirdClass = 1; break; } break;
        }
        break;
    case 1: maryCurrent = 0; break;
    case 2:
        switch (maryVisitedBridge) {
            case 0: maryCurrent = 5; maryVisitedBridge = 1; break;
        }
        break;
    case 5:
        switch (maryVisitedLifeboatDeck) {
            case 0: maryCurrent = 6; maryVisitedLifeboatDeck = 1; break;
        }
        break;
}
switch (maryCurrent) {
    case 6: cout << "Rescued\n"; maryFrozen = 1; break;
}
switch (maryCurrent) {
    case 7:
        switch (maryVisitedDiningSaloon) {
            case 1: cout << "DoorSealed\n"; maryVisitedDiningSaloon = 0; break;
        }
        break;
}
break;
}


switch (maryFrozen) {
case 0:
switch (maryCurrent) {
    case 2:
        switch (maryVisitedBridge) {
            case 0: cout << "WaterRising\n"; maryCurrent = 5; maryVisitedBridge = 1; break;
        }
        break;
}
switch (maryCurrent) {
    case 0:
        switch (maryVisitedCargoHold) {
            case 0: maryCurrent = 1; maryVisitedCargoHold = 1; break;
            case 1: switch (maryVisitedThirdClass) { case 0: maryCurrent = 2; maryVisitedThirdClass = 1; break; } break;
        }
        break;
    case 1: maryCurrent = 0; break;
    case 2:
        switch (maryVisitedBridge) {
            case 0: maryCurrent = 5; maryVisitedBridge = 1; break;
        }
        break;
    case 5:
        switch (maryVisitedLifeboatDeck) {
            case 0: maryCurrent = 6; maryVisitedLifeboatDeck = 1; break;
        }
        break;
}
switch (maryCurrent) {
    case 6: cout << "Rescued\n"; maryFrozen = 1; break;
}
switch (maryCurrent) {
    case 7:
        switch (maryVisitedDiningSaloon) {
            case 1: cout << "DoorSealed\n"; maryVisitedDiningSaloon = 0; break;
        }
        break;
}
break;
}


switch (maryFrozen) {
case 0:
switch (maryCurrent) {
    case 2:
        switch (maryVisitedBridge) {
            case 0: cout << "WaterRising\n"; maryCurrent = 5; maryVisitedBridge = 1; break;
        }
        break;
}
switch (maryCurrent) {
    case 0:
        switch (maryVisitedCargoHold) {
            case 0: maryCurrent = 1; maryVisitedCargoHold = 1; break;
            case 1: switch (maryVisitedThirdClass) { case 0: maryCurrent = 2; maryVisitedThirdClass = 1; break; } break;
        }
        break;
    case 1: maryCurrent = 0; break;
    case 2:
        switch (maryVisitedBridge) {
            case 0: maryCurrent = 5; maryVisitedBridge = 1; break;
        }
        break;
    case 5:
        switch (maryVisitedLifeboatDeck) {
            case 0: maryCurrent = 6; maryVisitedLifeboatDeck = 1; break;
        }
        break;
}
switch (maryCurrent) {
    case 6: cout << "Rescued\n"; maryFrozen = 1; break;
}
switch (maryCurrent) {
    case 7:
        switch (maryVisitedDiningSaloon) {
            case 1: cout << "DoorSealed\n"; maryVisitedDiningSaloon = 0; break;
        }
        break;
}
break;
}


switch (maryFrozen) {
case 0:
switch (maryCurrent) {
    case 2:
        switch (maryVisitedBridge) {
            case 0: cout << "WaterRising\n"; maryCurrent = 5; maryVisitedBridge = 1; break;
        }
        break;
}
switch (maryCurrent) {
    case 0:
        switch (maryVisitedCargoHold) {
            case 0: maryCurrent = 1; maryVisitedCargoHold = 1; break;
            case 1: switch (maryVisitedThirdClass) { case 0: maryCurrent = 2; maryVisitedThirdClass = 1; break; } break;
        }
        break;
    case 1: maryCurrent = 0; break;
    case 2:
        switch (maryVisitedBridge) {
            case 0: maryCurrent = 5; maryVisitedBridge = 1; break;
        }
        break;
    case 5:
        switch (maryVisitedLifeboatDeck) {
            case 0: maryCurrent = 6; maryVisitedLifeboatDeck = 1; break;
        }
        break;
}
switch (maryCurrent) {
    case 6: cout << "Rescued\n"; maryFrozen = 1; break;
}
switch (maryCurrent) {
    case 7:
        switch (maryVisitedDiningSaloon) {
            case 1: cout << "DoorSealed\n"; maryVisitedDiningSaloon = 0; break;
        }
        break;
}
break;
}


switch (maryFrozen) {
case 0:
switch (maryCurrent) {
    case 2:
        switch (maryVisitedBridge) {
            case 0: cout << "WaterRising\n"; maryCurrent = 5; maryVisitedBridge = 1; break;
        }
        break;
}
switch (maryCurrent) {
    case 0:
        switch (maryVisitedCargoHold) {
            case 0: maryCurrent = 1; maryVisitedCargoHold = 1; break;
            case 1: switch (maryVisitedThirdClass) { case 0: maryCurrent = 2; maryVisitedThirdClass = 1; break; } break;
        }
        break;
    case 1: maryCurrent = 0; break;
    case 2:
        switch (maryVisitedBridge) {
            case 0: maryCurrent = 5; maryVisitedBridge = 1; break;
        }
        break;
    case 5:
        switch (maryVisitedLifeboatDeck) {
            case 0: maryCurrent = 6; maryVisitedLifeboatDeck = 1; break;
        }
        break;
}
switch (maryCurrent) {
    case 6: cout << "Rescued\n"; maryFrozen = 1; break;
}
switch (maryCurrent) {
    case 7:
        switch (maryVisitedDiningSaloon) {
            case 1: cout << "DoorSealed\n"; maryVisitedDiningSaloon = 0; break;
        }
        break;
}
break;
}


switch (maryFrozen) {
case 0:
switch (maryCurrent) {
    case 2:
        switch (maryVisitedBridge) {
            case 0: cout << "WaterRising\n"; maryCurrent = 5; maryVisitedBridge = 1; break;
        }
        break;
}
switch (maryCurrent) {
    case 0:
        switch (maryVisitedCargoHold) {
            case 0: maryCurrent = 1; maryVisitedCargoHold = 1; break;
            case 1: switch (maryVisitedThirdClass) { case 0: maryCurrent = 2; maryVisitedThirdClass = 1; break; } break;
        }
        break;
    case 1: maryCurrent = 0; break;
    case 2:
        switch (maryVisitedBridge) {
            case 0: maryCurrent = 5; maryVisitedBridge = 1; break;
        }
        break;
    case 5:
        switch (maryVisitedLifeboatDeck) {
            case 0: maryCurrent = 6; maryVisitedLifeboatDeck = 1; break;
        }
        break;
}
switch (maryCurrent) {
    case 6: cout << "Rescued\n"; maryFrozen = 1; break;
}
switch (maryCurrent) {
    case 7:
        switch (maryVisitedDiningSaloon) {
            case 1: cout << "DoorSealed\n"; maryVisitedDiningSaloon = 0; break;
        }
        break;
}
break;
}

cout << "Murdoch path: Boiler Room -> Cargo Hold -> Dining Saloon -> Crow's Nest -> Dining Saloon -> Cargo Hold -> Promenade Deck\n";
cout << "Mary path: Boiler Room -> Cargo Hold -> Boiler Room -> Third Class -> Bridge -> Lifeboat Deck -> Lifeboat Deck\n";

return 0;
}