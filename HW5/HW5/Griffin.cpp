
#include "Griffin.h"
#include <iostream>
#include <string>
using namespace std;
Griffin::Griffin(string n)
{
	Health_ = 30;
	Name_ = n;
}
string Griffin::getName()const
{
	return Name_;
}
string Griffin::getDescription()const
{
	return "This beast has the head and wings of an eagle and body of a lion.";
}
int Griffin::getHealth()const
{
	return Health_;
}
void Griffin::Attack(Enemy*monster)
{
	monster->doDamage(10);
	cout << "The Griffin used wing attack." << endl;
}
void Griffin::doDamage(int damage)
{
	Health_ = Health_ - damage;
}
void Griffin::resetHealth()
{
	Health_ = 30;
}
int Griffin::getFireball()const
{
	return 0;
}
int Griffin::getPotions()const
{
	return 0;
}
void Griffin::Fireball(Enemy*monster)
{

}
void Griffin::Defensive(Enemy* monster)
{

}
void Griffin::Potion()
{

}
void Griffin::special(Enemy* monster)
{

}
