#include "Cerberus.h"
#include <iostream>
#include <string>
using namespace std;
Cerberus::Cerberus(string n)
{
	Health_ = 20;
	Name_ = n;
}
string Cerberus::getName()const
{
	return Name_;
}
string Cerberus::getDescription()const
{
	return "This beast has the tail of a serpent and 3 dog heads.";
}
int Cerberus::getHealth()const 
{
	return Health_;
}
void Cerberus::Attack(Enemy*monster)
{
	monster->doDamage(10);
	cout << "Cerberus used bite." << endl;
}
void Cerberus::doDamage(int damage)
{
	Health_ = Health_ - damage;
}
void Cerberus::resetHealth()
{
	Health_ = 20;
}
int Cerberus::getFireball()const
{
	return 0;
}
int Cerberus::getPotions()const
{
	return 0;
}
void Cerberus::Fireball(Enemy*monster)
{

}
void Cerberus::Defensive(Enemy* monster)
{

}
void Cerberus::Potion()
{

}
void Cerberus::special(Enemy* monster)
{

}