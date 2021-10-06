#include<iostream>
using namespace std;
int main() {

	int room = 1;
	char input;

	cout << "You wake up to find yourself in a Verdansk. Can you be the victor and take home this W? Good luck Soldier" << endl;

	do {
		switch (room) {
		case 1:
			cout << "You are in Prison. You can go north toward Farm." << endl;
			cin >> input;
			if (input == 'N')
				room = 2;
			else
				cout << "You cant go there Soldier" << endl;
			break;
		case 2:
			cout << "You are in Farm now. You can go toward Prison South, West for Downtown, North for Lumber" << endl;
			cin >> input;
			if (input == 'S')
				room = 1;
			else if (input == 'W')
				room = 3;
			else if (input == 'N')
				room = 4;
			else
				cout << "you cant go there Soldier." << endl;
			break;
		case 3:
			cout << "You are now in Downtown Verdansk. You can go East for farm, North for stadium." << endl;
			cin >> input;
			if (input == 'N')
				room = 5;
			else if (input == 'E')
				room = 2;
			else
				cout << "you cant go there Soldier" << endl;
			break;
		case 4:
			cout << "You are now in Lumber you can go back to farm South, West for stadium." << endl;
			cin >> input;
			if (input == 'W')
				room = 5;
			else if (input == 'S')
				room = 2;
			else
				cout << "You cant go there Soldier" << endl;
			break;
		case 5:
			cout << "You are now in stadium, South for Downtown, East for Lumber" << endl;
			cin >> input;
			if (input == 'S')
				room = 3;
			else if (input == 'E')
				room = 4;
			else
				cout << "You cant go there Soldier" << endl;
			break;
		

		}
	} while (input != 'q');
}
