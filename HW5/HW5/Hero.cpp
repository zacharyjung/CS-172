#include "Hero.h"
#include <iostream>
#include <string>
using namespace std;

Hero::Hero(string n)
{
	Name_ = n;
	Health_ = 100;
	Potions_ = 6;
	Fireballs_ = 10;
}
string Hero::getName() const
{
	return Name_;
}
string Hero::getDescription()const
{
	return "This is the hero that will defeat all of the monsters.";
}
int Hero::getHealth()const
{
	if (Health_ == 100)
	{
		cout << "Health: [||||||||||]:" ;
	}
	else if (Health_ >= 90)
	{
		cout << "Health: [|||||||| ]:" ;
	}
	else if (Health_ >= 80)
	{
		cout << "Health: [||||||||  ]:" ;
	}
	else if (Health_ >= 70)
	{
		cout << "Health: [|||||||   ]:" ;
	}
	else if (Health_ >= 60)
	{
		cout << "Health: [||||||    ]:" ;
	}
	else if (Health_ >= 50)
	{
		cout << "Health: [|||||     ]:" ;
	}
	else if (Health_ >= 40)
	{
		cout << "Health: [||||      ]:" ;
	}
	else if (Health_ >= 30)
	{
		cout << "Health: [|||       ]:" ;
	}
	else if (Health_ >= 20)
	{
		cout << "Health: [||        ]:" ;
	}
	else if (Health_ >= 10)
	{
		cout << "Health: [|         ]:" ;
	}
	else if (Health_ == 0)
	{
		cout << "Health: [          ]:" ;
	}
	return Health_;
}
void Hero::Attack(Enemy*monster)
{
	defense = false;
	monster->doDamage(20);
}
void Hero::Fireball(Enemy*monster)
{
	defense = false;
	
	if (Fireballs_> 0)
	{
		monster->doDamage(30);
		Fireballs_--;
	}
}
void Hero::Defensive(Enemy * monster)
{
	defense = true;
}
int Hero::getFireball()const
{
	return Fireballs_;
}
int Hero::getPotions()const
{
	return Potions_;
}
void Hero::doDamage(int damage)
{
	if (defense == true)
	{
		Health_ = Health_ - (damage / 2);
	}
	else
	{
		Health_ = Health_ - damage;
	}
}
void Hero::resetHealth()
{
	Health_ = 100;
}
void Hero::Potion()
{
	if (Potions_ > 0)
	{
		Health_ = Health_ + 10;
		Potions_--;
	}
	else
	{
		cout << "You don't have any potions left";
	}
}
void Hero::special(Enemy* monster)
{

}