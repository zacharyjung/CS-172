#include <iostream>
#include <string>
#include <stdlib.h>
#include <time.h> 
#include "Cerberus.h"
#include "Dragon.h"
#include "Hydra.h"
#include "Griffin.h"
#include "Hero.h"
#include "Minotaur.h"
using namespace std;

bool Fight(Enemy*Hero, Enemy*monster);

int main()
{
	//The amount of monsters and the count for the do while loop
	int monsters,count=0;
	//Name of the hero
	string name;
	//Initializing the variable winner
	bool winner = false;
	cout << "Whats the name of your Hero" << endl;
	cin >> name;
	//Creating the pointer Player for the creation of a hero
	Enemy*Player = new Hero(name);
	cout << "How many monsters do you want to face" << endl;
	cin >> monsters;
	//Random time for random monsters
	srand(time(NULL));
	//This loop randomly selects a monster for the hero to fight
	do
	{
		
		if (rand() % 5 == 0)
		{
			Enemy* Monster = new Cerberus("Cerberus");
			 winner = Fight(Player, Monster);
		}
		else if (rand() % 5 == 1)
		{
			Enemy* Monster = new Dragon("Dragon");
			 winner = Fight(Player, Monster);
		}
		else if (rand() % 5 == 2)
		{
			Enemy* Monster = new Griffin("Griffin");
			 winner = Fight(Player, Monster);
		}
		else if (rand() % 5 == 3)
		{
			Enemy* Monster = new Minotaur("Minotaur");
			 winner = Fight(Player, Monster);
		}
		else
		{
			Enemy* Monster = new Hydra("Hydra");
			 winner = Fight(Player, Monster);
		}
		count++;
		} while ((monsters > count)&& (winner == true));
}
//This class has the Hero and monster fight against each other
bool Fight(Enemy*Hero, Enemy*monster)
{
	//Random number for the special attack for the minotaur
	int chance = rand() % 4;
	//Stores the command of the user
	string command;
	cout << "You are facing a " << monster->getName() << endl;
	cout << monster->getDescription() << endl;
	//Upates the hero's inventory and health
	do{
		cout << Hero->getName() << " Health " << Hero->getHealth() << ", Fireballs: " << Hero->getFireball() << ", Potions: " << Hero->getPotions() << endl;
	cout << "Enter a command (sword shield fireball potion exit)" << endl;
	cin >> command;
	//These check for what commands the user selected and perform them according to the command
	if (command == "sword")
	{
		Hero->Attack(monster);
	}
	else if (command == "shield")
	{
		Hero->Defensive(Hero);
	}
	else if (command == "fireball")
	{
		Hero->Fireball(monster);
	}
	else if (command == "potion")
	{
		Hero->Potion();
	}
	else if (command == "exit")
	{
		cout << "Thanks for Playing" << endl;
		break;
	}
	//These return the winner depending on who has zero or less health first
	if (monster->getHealth() <= 0)
	{
		cout << "You were victorious" << endl;
		return true;
	}
	//This damages the hero if the monster still has health
	else if (monster->getHealth() > 0)
	{
		if (monster->getName() == "Minotaur")
		{
			if(chance==0)
			{
				monster->special(Hero);
			}
			else
			{
				monster->Attack(Hero);
			}
		}
		else
		{
			monster->Attack(Hero);
		}
		
	}
	else if (Hero->getHealth() <= 0)
	{
		cout << "You lost" << endl;
		return false;
	}
	
	
}while ((monster->getHealth() > 0) && (Hero->getHealth() > 0));
if (command != "exit")
{
	cout << "Congratulations you defeated all of the monsters." << endl;
}
}