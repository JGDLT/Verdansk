#include<iostream>
#include<Windows.h>
#include<ctime>
using namespace std;




void shop();
string inventory[10] = {};
int health = 100;
int money = 100;
int num;
int enemies = 15;
void Battle(int enemyhealth);
void Cover();
void NPC(int capt);
void enemy();

int main() {
    srand(time(NULL));

    int room = 1;
    string input;

    cout << "Ello soldier. Youve woken up and found yourself in a Verdansk. Tis is a Wrzone. Your only objective is to eliminate everyone until its just you. Can you be the victor and take home this W? Good luck Soldier" << endl << endl;

    cout << "inventory: ";
    for (int i = 0; i < 1; i++)
        cout << inventory[i] << endl;

    do {
        cout << "Enemies remaining: " << enemies << endl;
        num = rand() % 3 + 1;
        switch (room) {
        case 1: //prison
            system("Color 0F");
            cout << "You were captured and put into Prison" << endl;
            cout << "You were released and now free." << endl;
            cout << "You can go North toward Farmland" << endl << endl;
            cout << "Press A for the buy station soldier" << endl;
            cout << "Press ¨c¨ to take cover" << endl << endl;
            cout << "Money: " << money << endl;
            cout << "Health: " << health << endl;
            cout << "inventory: ";
            for (int i = 0; i < 10; i++)
                cout << inventory[i] << endl;
            cin >> input;
            if (input == "North")
                room = 2;
            else if (input == "A")
                shop();
            else if (input == "c")
                Cover();
            else
                cout << "You cant go there Soldier" << endl;
            break;
        case 2: //Farmland
            enemy();
            system("Color 0F");
            cout << "inventory: ";
            for (int i = 0; i < 10; i++)
                cout << inventory[i] << endl;
            cout << "You are in Farmland now." << endl;
            cout << "You can go South toward Prison, West to Downtown or North to Lumber" << endl << endl;
            cout << "Press ¨c¨ to take cover" << endl << endl;
            cout << "Money: " << money << endl;
            cout << "Health: " << health << endl;
            cout << "inventory: ";
            for (int i = 0; i < 10; i++)
                cout << inventory[i] << endl;
            cin >> input;

            if (input == "South")
                room = 1;
            else if (input == "West")
                room = 3;
            else if (input == "North")
                room = 4;
            else if (input == "c")
                Cover();
            else
                cout << "you cant go there Soldier." << endl;
            break;
        case 3: //Downtown
            system("Color 0F");
            cout << "You are now in Downtown Verdansk." << endl;
            NPC(num);
            cout << "You can go East to Farmland or North to Stadium or West toward Hospital" << endl << endl;
            cout << "Press ¨c¨ to take cover" << endl << endl;
            cout << "Money: " << money << endl;
            cout << "Health: " << health << endl;
            cout << "inventory: ";
            for (int i = 0; i < 10; i++)
                cout << inventory[i] << endl;
            cin >> input;
            if (input == "North")
                room = 5;
            else if (input == "East")
                room = 2;
            else if (input == "West")
                room = 17;
            else if (input == "c")
                Cover();
            else
                cout << "you cant go there Soldier" << endl;
            break;
        case 4: //Lumber
            system("Color 0F");
            cout << "You are now in Lumber" << endl;
            cout << "You can go back South to Farmland or West to Stadium." << endl << endl;
            cout << "Press ¨c¨ to take cover" << endl << endl;
            cout << "Money: " << money << endl;
            cout << "Health: " << health << endl;
            cout << "inventory: ";
            for (int i = 0; i < 10; i++)
                cout << inventory[i] << endl;
            cin >> input;
            if (input == "West")
                room = 5;
            else if (input == "South")
                room = 2;
            else if (input == "c")
                Cover();
            else
                cout << "You cant go there Soldier" << endl;
            break;
        case 5: //Stadium
            system("Color 0F");
            cout << "You are now in stadium" << endl;
            cout << "You can go South to Downtown, East toward Lumber or North to Tv Station." << endl << endl;
            cout << "Press A for the buy station soldier" << endl;
            cout << "Press ¨c¨ to take cover" << endl << endl;
            cout << "Money: " << money << endl;
            cout << "Health: " << health << endl;
            cout << "inventory: ";
            for (int i = 0; i < 10; i++)
                cout << inventory[i] << endl;
            cin >> input;
            if (input == "South")
                room = 3;
            else if (input == "East")
                room = 4;
            else if (input == "A")
                shop();
            else if (input == "North")
                room = 6;
            else if (input == "c")
                Cover();
            else
                cout << "You cant go there Soldier" << endl;
            break;
        case 6: //Tv Station
            enemy();
            system("Color 0F");
            cout << "You are now in TV Station" << endl;
            cout << "You can go back South to Stadium, you can go North to Salt Mine or West to airport" << endl << endl;
            cout << "Press ¨c¨ to take cover" << endl << endl;
            cout << "Money: " << money << endl;
            cout << "Health: " << health << endl;
            cout << "inventory: ";
            for (int i = 0; i < 10; i++)
                cout << inventory[i] << endl;
            cin >> input;
            if (input == "South")
                room = 5;
            else if (input == "North")
                room = 7;
            else if (input == "West")
                room = 10;
            else if (input == "c")
                Cover();
            else
                cout << "You cant go there Soldier" << endl;
            break;
        case 7: //Salt Mine
            system("Color 0F");
            cout << "You are now in Salt Mine" << endl;
            cout << "You can go back South to Tv Station or North toward Military Base" << endl << endl;
            cout << "Press A for the buy station soldier" << endl;
            cout << "Press ¨c¨ to take cover" << endl << endl;
            cout << "Money: " << money << endl;
            cout << "Health: " << health << endl;
            cout << "inventory: ";
            for (int i = 0; i < 10; i++)
                cout << inventory[i] << endl;
            cin >> input;
            if (input == "South")
                room = 6;
            else if (input == "North")
                room = 8;
            else if (input == "A")
                shop();
            else if (input == "c")
                Cover();
            else
                cout << "You cant go there Soldier" << endl;
            break;
        case 8: //Military base
            system("Color 0F");
            cout << "You are now in Military Base Soldier" << endl;
            cout << "Grab your gear and weapons here. You can go back South to Salt Mine or West toward the Summit." << endl;
            if (input.compare("pick up") == 0)
                inventory[0] = "Weapon";
            cout << "Press ¨c¨ to take cover" << endl << endl;
            cout << "Money: " << money << endl;
            cout << "Health: " << health << endl;
            cout << "inventory: ";
            for (int i = 0; i < 10; i++)
                cout << inventory[i] << endl;
            cin >> input;
            if (input == "South")
                room = 7;
            else if (input == "West")
                room = 9;
            else
                cout << "You cant go there Soldier" << endl;
            break;
        case 9: //SUmmit
            system("Color 0F");
            cout << "You are now in The Summit you can head back East toward Military or South toward Airport" << endl << endl;
            cout << "Press ¨c¨ to take cover" << endl << endl;
            cout << "Money: " << money << endl;
            cout << "Health: " << health << endl;
            cout << "inventory: ";
            for (int i = 0; i < 10; i++)
                cout << inventory[i] << endl;
            cin >> input;
            if (input == "East")
                room = 8;
            else if (input == "South")
                room = 10;
            else if (input == "c")
                Cover();
            else
                cout << "You cant go there soldier" << endl;
            break;
        case 10: //Airport
            system("Color 0F");
            cout << "You are now in Airport m8" << endl;
            cout << "You can head South toward Super Store or back North to the Summit or East toward Tv Station" << endl << endl;
            cout << "Press A for the buy station soldier" << endl;
            cout << "Press ¨c¨ to take cover" << endl << endl;
            cout << "Money: " << money << endl;
            cout << "Health: " << health << endl;
            cout << "inventory: ";
            for (int i = 0; i < 10; i++)
                cout << inventory[i] << endl;
            cin >> input;
            if (input == "North")
                room = 9;
            else if (input == "South")
                room = 11;
            else if (input == "East")
                room = 6;
            else if (input == "c")
                Cover();
            else if (input == "A")
                shop();
            else
                cout << "Not there soldier" << endl;
            break;
        case 11: //Super Store
            enemy();
            system("Color 0F");
            cout << "Welcome to the Super Store Soldier. Watch out for enemy's here m8 theres a lot" << endl;
            cout << "You can go back North to Airport or West toward Storage Town" << endl;
            cout << "Press ¨c¨ to take cover" << endl << endl;
            cout << "Money: " << money << endl;
            cout << "Health: " << health << endl;
            cout << "inventory: ";
            for (int i = 0; i < 10; i++)
                cout << inventory[i] << endl;
            cin >> input;
            if (input == "North")
                room = 10;
            else if (input == "West")
                room = 12;
            else if (input == "c")
                Cover();
            else
                cout << "Not there soldier m8" << endl;
            break;
        case 12: //Storage town
            system("Color 0F");
            cout << "This is Storage Town m8" << endl << endl;
            cout << "You can head back East to Super Store or South toward Boneyard" << endl;
            NPC(num);
            cout << "Press ¨c¨ to take cover" << endl << endl;
            cout << "Money: " << money << endl;
            cout << "Health: " << health << endl;
            cout << "inventory: ";
            for (int i = 0; i < 10; i++)
                cout << inventory[i] << endl;
            cin >> input;
            if (input == "East")
                room = 11;
            else if (input == "South")
                room = 13;
            else if (input == "c")
                Cover();
            else
                cout << "You cant go there soldier" << endl;
            break;
        case 13: //boneyard 
            system("Color 0F");
            cout << "You are in Boneyard now soldier" << endl;
            cout << "You can go back North to Storage Town" << endl << endl;
            cout << "Press A for the buy station soldier" << endl;
            cout << "Press ¨c¨ to take cover" << endl << endl;
            cout << "Money: " << money << endl;
            cout << "Health: " << health << endl;
            cout << "inventory: ";
            for (int i = 0; i < 10; i++)
                cout << inventory[i] << endl;
            cin >> input;
            if (input == "North")
                room = 12;
            else if (input == "East")
                room = 14;
            else if (input == "A")
                shop();
            else
                cout << "Not there soldier" << endl;
            break;
        case 14: //Train station
            system("Color 0F");
            cout << "You are now here in Train Station" << endl;
            cout << "You can head back West to Boneyard or North to Super Store" << endl << endl;
            cout << "Press ¨c¨ to take cover" << endl << endl;
            cout << "Money: " << money << endl;
            cout << "Health: " << health << endl;
            cout << "inventory: ";
            for (int i = 0; i < 10; i++)
                cout << inventory[i] << endl;
            cin >> input;
            if (input == "West")
                room = 13;
            else if (input == "North")
                room = 11;
            else if (input == "South")
                room = 15;
            else if (input == "c")
                Cover();
            else
                cout << "Not there soldier" << endl;
            break;
        case 15: //Prom West
            enemy();
            system("Color 0F");
            cout << "Welcome to Promenade West " << endl;
            cout << "You can go back up North to Train Station or East to Promenade east" << endl << endl;
            cout << "Press ¨c¨ to take cover" << endl << endl;
            cout << "Money: " << money << endl;
            cout << "Health: " << health << endl;
            cout << "inventory: ";
            for (int i = 0; i < 10; i++)
                cout << inventory[i] << endl;
            cin >> input;
            if (input == "North")
                room = 14;
            else if (input == "East")
                room = 16;
            else if (input == "c")
                Cover();
            else
                cout << "Not THERE SOLDIER" << endl;
            break;
        case 16: //Prom east 
            system("Color 0F");
            cout << "You are in Promenade East now" << endl;
            cout << "You can now go back West to Promenade West or North to Hospital" << endl << endl;
            cout << "Press A for the buy station soldier" << endl;
            cout << "Press ¨c¨ to take cover" << endl << endl;
            cout << "Money: " << money << endl;
            cout << "Health: " << health << endl;
            cout << "inventory: ";
            for (int i = 0; i < 10; i++)
                cout << inventory[i] << endl;
            cin >> input;
            if (input == "West")
                room = 15;
            else if (input == "North")
                room = 17;
            else if (input == "c")
                Cover();
            else if (input == "A")
                shop();
            else
                cout << "Not there soldier" << endl;
            break;
        case 17: //hospital
            system("Color 0F");
            cout << "You are in Hospital now" << endl;
            cout << "You can go back West to Train station or South to Promenade east or East to Downtown Verdansk" << endl << endl;
            cout << "Press ¨c¨ to take cover" << endl << endl;
            cout << "Money: " << money << endl;
            cout << "Health: " << health << endl;
            cout << "inventory: ";
            for (int i = 0; i < 10; i++)
                cout << inventory[i] << endl;
            cin >> input;
            if (input == "South")
                room = 16;
            else if (input == "West")
                room = 14;
            else if (input == "East")
                room = 3;
            else if (input == "c")
                Cover();
            else
                cout << "Not there" << endl;
            break;






        }
    } while (input != "q" && health > 0 && enemies != 0);

    if (input == "q") {
        cout << "Why'd you quit?! Thanks for playing.." << endl;
    }
    else if (health <= 0) {
        cout << "YOU DIED. GAME OVER. Thanks for playing" << endl;
    }
    else
        cout << "you won!" << endl;
}


void shop() {
    string input;
    using namespace std;
    do {
        system("Color 3A");

        cout << "Hello ElreydelGuaje welcome to the buy station" << endl;
        cout << "Money: " << money << endl;
        cout << "inventory: ";
        for (int i = 0; i < 10; i++)
            cout << inventory[i] << endl;
        cout << "press 'L' for a Loadout, 'p' for armour-plates, 'l' for a lethal, and 't' for  tactical. " << endl;
        cout << "press 'q' to leave the buy m8" << endl << endl;
        cin >> input;
        if (input == "L") {
            if (money >= 100) {
                inventory[1] = "Loadout weapons";
                cout << "Youve got your load out weapons m8" << endl;
                money -= 100;
            }
            else
                cout << "you aint got enough m8 " << endl;
        }
        else if (input == "p") {
            if (money >= 25) {
                inventory[2] = "armour-plate ";
                cout << "Youve got some plates m8" << endl << endl;
                money -= 25;
            }
            else if (input == "l") {
                inventory[3] = "lethal, ";
            }
            else
                cout << "you aint got enough m8 " << endl;
        }
    } while (input != "q");
}


void Battle(int enemyhealth) {
    system("Color 4C");
    int damage;
    string input;
    while (health > 0 && enemyhealth > 0) {

        damage = rand() % 45;
        cout << "Enemy has done " << damage << " damage m8" << endl;
        health -= damage;
        cout << "Health: " << health << endl;
        if (inventory[1] == "Loadout weapons") {
            damage = rand() % 50 + 30;
            cout << "you´re shooting them with your loadout weapons" << endl;
        }
        damage = rand() % 80 + 20;
        cout << "youve done " << damage << " damage " << endl;
        enemyhealth -= damage;
        cout << "Enemy's HP: " << enemyhealth << endl << endl;

    }
    if (enemyhealth <= 0) {
        cout << "Good job youve got him" << endl;
        cout << "Hes even got you a li'l gift m8" << endl;
        money += 50;
        enemies -= 1;
        cout << "Money: " << money << endl;
        cout << "Health: " << health << endl;
        cout << "press any key to move on m8..." << endl << endl;
        cin >> input;
    }
    if (health <= 0) {
        cout << "You've given it your best " << endl;
        cout << "You'll get em next time" << endl;
        cin >> input;
    }


}

int numb;

void enemy() {
    int numb = rand() % 100 + 1;
    if (numb <= 10) {
        cout << "A tryhard comes from his moms basement and attacks you. He does 50 damage to you" << endl;
        Battle(100);
    }
    else if (numb <= 50) {
        cout << "A camper popped outta nowhere" << endl;
        Battle(75);
    }
    else if (numb <= 95) {
        cout << "A bot came outta nowhere" << endl;
        Battle(50);
    }
}



void NPC(int capt) {
    switch (capt) {
    case 1:
        cout << "This is captain price m8" << endl;
        cout << "Just wanted to give you a heads up that there is a chance of getting enemies anywhere" << endl;
        cout << "Good luck soldier" << endl;
        break;
    case 2:
        cout << "Hey, this is Russell Adler" << endl;
        cout << "Just wanted to tell you to get this victory for us" << endl;
        cout << "Good luck!" << endl;
        break;
    case 3:
        cout << "Today is your lucky day" << endl;
        cout << "Here is some money" << endl;
        money += 50;
        break;
    }
}

void Cover() {
    string input;
    do {
        cout << "You are taking cover right now soldier youve got some spare time " << endl;
        cout << "Or you can just take a breather" << endl << endl;
        cout << "Press ¨q¨ to go back into the Warzone" << endl << endl;
        cout << "inventory: ";
        for (int i = 0; i < 10; i++)
            cout << inventory[i] << endl;

        if (inventory[2] == "armour-plate ")
            cout << "you´ve got armor plates. you should put em on while youre taken cover Press ¨e¨ to put it on m8" << endl;
        cin >> input;
        if (input == "e") {
            inventory[2] = "";
            health += 50;
            cout << "Health:" << health << endl;
        }
        if (inventory[2] == "")
            cout << "You aint got none m8" << endl;
    }

    while (input != "q");
}
