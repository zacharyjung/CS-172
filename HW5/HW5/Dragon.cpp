#include "Dragon.h"
#include <iostream>
#include <string>
using namespace std;
Dragon::Dragon(string n)
{
	Health_ = 30;
	Name_ = n;
}
string Dragon::getName()const
{
	return Name_;
}
string Dragon::getDescription()const
{
	return "This beast has huge wings and can breathe fire.";
}
int Dragon::getHealth()const
{
	return Health_;
}
void Dragon::Attack(Enemy*monster)
{
	monster->doDamage(15);
	cout << "The Dragon used Flamethrower." << endl;
}
void Dragon::doDamage(int damage)
{
	Health_ = Health_ - damage;
}
void Dragon::resetHealth()
{
	Health_ = 30;
}
int Dragon::getFireball()const
{
	return 0;
}
int Dragon::getPotions()const
{
	return 0;
}
void Dragon::Fireball(Enemy*monster)
{

}
void Dragon::Defensive(Enemy* monster)
{

}
void Dragon::Potion()
{

}
void Dragon::special(Enemy* monster)
{

}