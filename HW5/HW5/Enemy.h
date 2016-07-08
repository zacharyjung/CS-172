#ifndef _Enemy_
#define _Enemy_
#include <string>
using namespace std;

class Enemy
{
public:
	//default constructor
	Enemy();
	//Returns the name of the monster/hero
	virtual string getName() const = 0;
	//Returns the description of the monster
	virtual string getDescription() const = 0;
	//Returns the health of the hero
	virtual int getHealth()const=0;
	//Sends the ammount of damage done to the doDamage function
	virtual void Attack(Enemy*monster)=0;
	//Subtracts the amount of damage from the overall health of the hero/monster
	virtual void doDamage(int damage)=0;
	//Resets the health back to the original health
	virtual void resetHealth() = 0;
	//Returns the amount of fireballs the hero has left
	virtual int getFireball()const=0;
	//Returns the amount of potions the hero has left
	virtual int getPotions()const=0;
	//Sends the amount of damage the fireball does to doDamage function
	virtual void Fireball(Enemy*monster)=0;
	//Sets the defense variable to true so in the doDamage function the damage only does half as much
	virtual void Defensive(Enemy* monster)=0;
	//This adds 10 health to the overall health of the hero
	virtual void Potion()=0;
	//Sends the amount of damage of the special attack to the doDamage function
	virtual void special(Enemy* monster) = 0;

};
#endif