

#include <iostream>
using namespace std;

bool isValidCombination(int vans, int minibuses, int buses, int students) {
    return (vans * 4 + minibuses * 6 + buses * 10) == students;
}

void findCombinations(int students) {
    int count = 0;
    int bestV = 0, bestM = 0, bestB = 0;
    int minVehicles = 1000;

    cout << "Vans\tMinibuses\tBuses\tTotal Vehicles" << endl;
    for (int v = 0; v <= 3; v++) {
        for (int m = 0; m <= 2; m++) {
            for (int b = 0; b <= 2; b++) {
                if (isValidCombination(v, m, b, students)) {
                    int total = v + m + b;
                    cout << v << "\t" << m << "\t\t" << b << "\t" << total << endl;
                    count++;
                    if (total < minVehicles) {
                        minVehicles = total;
                        bestV = v;
                        bestM = m;
                        bestB = b;
                    }
                }
            }
        }
    }

    if (count == 0) {
        cout << "No valid combination exists for " << students << " students." << endl;
    } else {
        cout << "Total valid Combinations : " << count << endl;
        cout << bestV << " vans, " << bestM << " minibuses, " << bestB << " buses" << endl;
        cout << "Total vehicles : " << minVehicles << endl;
    }
}

int main() {
    int students;
    cout << "Enter students : ";
    cin >> students;
    findCombinations(students);
    return 0;
}

