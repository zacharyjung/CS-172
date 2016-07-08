#include "Hydra.h"
#include <iostream>
#include <string>
using namespace std;
Hydra::Hydra(string n)
{
	Health_ = 25;
	Name_ = n;
}
string Hydra::getName()const
{
	return Name_;
}
string Hydra::getDescription()const
{
	return "This beast has a snake like body with multiple heads.";
}
int Hydra::getHealth()const
{
	return Health_;
}
void Hydra::Attack(Enemy*monster)
{
	monster->doDamage(12);
	cout << "Hydra used water beam." << endl;
}
void Hydra::doDamage(int damage)
{
	Health_ = Health_ - damage;
}
int Hydra::getFireball()const
{
	return 0;
}
int Hydra::getPotions()const
{
	return 0;
}
void Hydra:: Fireball(Enemy*monster)
{

}
void Hydra::Defensive(Enemy* monster)
{

}
void Hydra::Potion()
{

}
void Hydra::resetHealth()
{
	Health_ = 25;
}
void Hydra::special(Enemy* monster)
{

}