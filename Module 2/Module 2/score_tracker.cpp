/*This simple program uses arrays and compound operators to display teams score*/

#include <iostream>
using namespace std;

int main() {
	int teamScores[3] = {0, 0, 0};
	cout << "The team scores are: \n" << "Team A: " << teamScores[0] << "\nTeam B: " 
		<< teamScores[1] << "\nTeam C: " << teamScores[2] << endl;
	cout << "\nWhich team just scored a point? (Enter A, B or C?)\n";
	char teamPoint;
	cin >> teamPoint;

	// Check if the user entered something that isn't 'A','B' or 'C'
	// Use reuse this section to update the code. 
	// This block contains one print statement. Cleaner and easier to maintain.
	// 
	//Also will use (teamPoint == 'A' || teamPoint == 'a') to catch situations where the user enters lower case

	if (teamPoint == 'A' || teamPoint == 'a') { teamScores[0]++; }
	else if (teamPoint == 'B' || teamPoint == 'b') { teamScores[1]++; }
	else if (teamPoint == 'C' || teamPoint == 'c') { teamScores[2]++; }
	else { cout << "Invalid team selected!" << endl; }  
	cout << "The team scores are: \n" << "Team A: " << teamScores[0] << "\nTeam B: "<< teamScores[1] << "\nTeam C: " << teamScores[2] << endl;

	

	
	cout << "How many points should all teams get?\n";
	int bonusPoint = 0;
	cin >> bonusPoint;

	teamScores[0] += bonusPoint; teamScores[1] += bonusPoint; teamScores[2] += bonusPoint;

	cout << "Final team scores are: \n" << "Team A: " << teamScores[0] << "\nTeam B: "
		<< teamScores[1] << "\nTeam C: " << teamScores[2] << endl;



		return 0;
}
