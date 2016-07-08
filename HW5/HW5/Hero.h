#ifndef _Hero_
#define _Hero_
#include <string>
#include "Enemy.h"
//Documentation for the public functions are in the Enemy header file
using namespace std;

class Hero:public Enemy
{
public:
	Hero(string n = "No Name");
	void Potion();
	string getName()const;
	string getDescription()const;
	int getFireball()const;
	int getPotions()const;
	int getHealth()const;
	void Attack(Enemy*monster);
	void Fireball(Enemy*monster);
	void Defensive(Enemy* monster);
	void doDamage(int damage);
	void resetHealth();
	void special(Enemy* monster);

private:
	//Stores the overall health for the hero
	int Health_;
	//Store the name for the hero
	string Name_;
	//Stores the amount of fireballs for the hero
	int Fireballs_;
	//Stores the amount of potions for the hero
	int Potions_;
	//Stores the defensive position of the monster
	bool defense;
};
#endif