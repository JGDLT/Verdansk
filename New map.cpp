#include<iostream>
using namespace std;


void shop();
string inventory[10] = {};
int main() {

	int room = 1;
  
	string input;

	cout << "You wake up to find yourself in a Verdansk. Can you be the victor and take home this W? Good luck Soldier" << endl;

  cout << "inventory: ";
    for (int i = 0; i < 10; i++)
    cout << inventory[i] << endl;

	do {
		switch (room) {
		case 1:
			cout << "You are in Prison. You can go north toward Farm." << endl;
      cout << "Press A for the buy station soldier" << endl;
			cin >> input;
			if (input == "N")
				room = 2;
      else if(input == "A")
        shop();
			else
				cout << "You cant go there Soldier" << endl;
			break;
		case 2:
			cout << "You are in Farm now. You can go toward Prison South, West for Downtown, North for Lumber" << endl;
			cin >> input;
			if (input == "S")
				room = 1;
			else if (input == "W")
				room = 3;
			else if (input == "N")
				room = 4;
			else
				cout << "you cant go there Soldier." << endl;
			break;
		case 3:
			cout << "You are now in Downtown Verdansk. You can go East for farm, North for stadium." << endl;
			cin >> input;
			if (input == "N")
				room = 5;
			else if (input == "E")
				room = 2;
			else
				cout << "you cant go there Soldier" << endl;
			break;
		case 4:
			cout << "You are now in Lumber you can go back to farm South, West for stadium." << endl;
			cin >> input;
			if (input == "W")
				room = 5;
			else if (input == "S")
				room = 2;
			else
				cout << "You cant go there Soldier" << endl;
			break;
		case 5:
			cout << "You are now in stadium, South for Downtown, East for Lumber, North for Tv Station." << endl;
			cin >> input;
			if (input == "S")
				room = 3;
			else if (input == "E")
				room = 4;
      else if (input == "N")
        room = 6; 
			else
				cout << "You cant go there Soldier" << endl;
			break;
    case 6: 
      cout << "You are now in TV Station, you can go back to stadium South, you can go North to Salt Mine" << endl;
      cin >> input;
      if (input == "S")
        room = 5;
      else if (input == "N")
        room = 7;
      else
				cout << "You cant go there Soldier" << endl;
      break;
    case 7:
      cout << "You are now in Salt Mine, you can go back South to Tv or North toward Military Base" << endl;
      cin >> input;
      if (input == "S")
        room = 6;
      if (input == "N")
        room = 8;
      else
				cout << "You cant go there Soldier" << endl;
      break;
      case 8:
        cout << "you are now in Military Base Soldier, Grab your gear and weapons here. You can go back to Salt Mine South or West toward the Summit." << endl;
        if (input.compare("pick up")==0)
          inventory[0] = "Weapon";
        cout << "inventory: ";
    for (int i = 0; i < 10; i++)
    cout << inventory[i] << endl;
        cin >> input;
        if (input == "S")
          room = 7;
        else
				cout << "You cant go there Soldier" << endl;
      break;
        
		

		}
	} while (input != "q");
}


void shop() {
  string input;
  do {
      cout << "Hello ElreydelGuaje welcome to the buy station" << endl;
      cout << "press 'L' for a Loadout, 'p' for armour-plates, 'l' for a lethal, and 't' for  tactical. " << endl;
      cout << "press 'q' to leave the buy m8" << endl;
      cin >> input;
      if (input == "L") {
        inventory[1] = "Loadout weapons, ";
      } 
      else if (input == "p") {
        inventory[2] = "armour-plates, ";
      } 
      else if (input == "l") {
        inventory[3] = "lethal, ";
      } 
  }while(input != "q");
}
