// Gannon Moore J00965925 Nov.30

#include <iostream>
#include <cmath>
using namespace std;

int main() {

	string studentName, inputTest;
	int studentsTotal = 0;
	double boxesSold = 0, boxesTotal = 0, boxCost = 0, boxAvg = 0, costTotal = 0;
	bool whileTrue = true;

	while (whileTrue == true) {
		cin >> studentName >> boxesSold;

		if (studentName == "-1") {
			studentName = inputTest;
			boxCost = boxesSold;

			// cout << "PRINT CHECK B1: " << studentName << endl;
			// cout << "PRINT CHECK B2: " << boxesSold << endl;
			whileTrue = false;
		} else {
			boxesTotal = boxesTotal + boxesSold;
			studentsTotal++;

			// cout << "PRINT CHECK A1: " << studentName << endl;
			// cout << "PRINT CHECK A2: " << boxesSold << endl;
			// cout << "PRINT CHECK A3: " << boxesTotal << endl;
			// cout << "PRINT CHECK A4: " << studentsTotal << endl;
			continue;
		}
	}
	
	boxAvg = boxesTotal / studentsTotal;
	costTotal = boxesTotal * boxCost;

	// cout << "PRINT CHECK C1: " << boxesSold << endl;
	// cout << "PRINT CHECK C2: " << boxCost << endl;

	cout << "Total number of boxes sold: " << boxesTotal << endl;
	cout << "Total money made: $" << costTotal << endl;

	if (studentsTotal > 0) {
		cout << "Average number of boxes sold by each person: " << round(boxAvg) << endl;
	} else {
		cout << "No input." << endl;
	}
  
}
