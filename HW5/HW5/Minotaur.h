#ifndef _Minotaur_
#define _Minotaur_
#include "Enemy.h"
#include <string>
using namespace std;
//Documentation for the public functions are in the Enemy header file
class Minotaur :public Enemy
{
public:
	Minotaur(string n = "No Name");
	string getName()const;
	string getDescription()const;
	int getHealth() const;
	void Attack(Enemy*monster);
	void doDamage(int damage);
	void resetHealth();
	int getFireball()const;
	int getPotions()const;
	void Fireball(Enemy*monster);
	void Defensive(Enemy* monster);
	void Potion();
	void special(Enemy* monster);
private:
	//Stores the overall health for the monster
	int Health_;
	//Stores the name "Minotaur" for the monster
	string Name_ = "Minotaur";
};
#endif