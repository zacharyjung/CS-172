#include "Minotaur.h"
#include <iostream>
#include <string>
using namespace std;
Minotaur::Minotaur(string n)
{
	Health_ = 40;
	Name_ = n;
}
string Minotaur::getName()const
{
	return Name_;
}
string Minotaur::getDescription()const
{
	return "This beast has a body of a man and the head of a bull.";
}
int Minotaur::getHealth()const
{
	return Health_;
}
void Minotaur::Attack(Enemy*monster)
{
	monster->doDamage(8);
	cout << "The Minotaur used headbutt." << endl;
}
void Minotaur::doDamage(int damage)
{
	Health_ = Health_ - damage;
}
void Minotaur::resetHealth()
{
	Health_ = 40;
}
int Minotaur::getFireball()const
{
	return 0;
}
int Minotaur::getPotions()const
{
	return 0;
}
void Minotaur::Fireball(Enemy*monster)
{

}
void Minotaur::Defensive(Enemy* monster)
{

}
void Minotaur::Potion()
{

}
void Minotaur::special(Enemy* monster)
{
	monster->doDamage(20);
	cout << "The Minotaur used piercing horn." << endl;
}