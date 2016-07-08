//----------------------------------------------------------------------------
//
//  English Length class
//    Implementation
//
//  This class represents an integer length in yards, feet, and inches
//
//	Version 0.1 -- has only one (default) constructor
//----------------------------------------------------------------------------
//
//  Author:         Paul Zoski
//  Date:           March 2002
//  Modified:       JL Popyack, 4/7/2005 -- reformatted
//
//----------------------------------------------------------------------------

#include "Header.h"
#include <cstdlib>
#include <string>
#include <ciso646>
#include <sstream> // used to convert streams to strings
using namespace std;

//--- global constants used for English_Length class
const int FEET_PER_YARD = 3;
const int INCHES_PER_FOOT = 12;
const int INCHES_PER_YARD = INCHES_PER_FOOT * FEET_PER_YARD;


//----------------------------------------------------------------------------
//----- Constructors ---------------------------------------------------------
//----------------------------------------------------------------------------

English_length::English_length()
{
	inches_ = 0;
	feet_ = 0;
	yards_ = 0;
}

//----------------------------------------------------------------------------
//----- Inspectors -----------------------------------------------------------
//----------------------------------------------------------------------------

int English_length::inches() const
{
	return inches_;
}

int English_length::totalInches() const
{
	return INCHES_PER_YARD * yards_ + INCHES_PER_FOOT * feet_ + inches_;
}

int English_length::feet() const
{
	return feet_;
}

int English_length::totalFeet() const
{
	return FEET_PER_YARD * yards_ + feet_;
}

int English_length::yards() const
{
	return yards_;
}

//----------------------------------------------------------------------------
//----- Mutators -------------------------------------------------------------
//----------------------------------------------------------------------------

void English_length::add_inches(int amt_to_add)
{
	inches_ += amt_to_add;                // add inches to length
	feet_ += inches_ / INCHES_PER_FOOT; // update feet if more than 11 inches
	inches_ %= INCHES_PER_FOOT;           // remove excess feet from inches
	yards_ += feet_ / FEET_PER_YARD;     // update yards if more than 2 feet
	feet_ %= FEET_PER_YARD;             // remove excess yards from feet
}
bool English_length::isLessThan(const English_length & length)
{
	if (length.totalInches() < totalInches())
	{
		return true;
	}
	else
	{
		return false;
	}
}
English_length English_length::min(const English_length & Length1, const English_length & Length2)
{
	if (Length1.totalInches > Length2.totalInches)
	{
		return Length2;
	}
	else
	{
		return Length1;
	}
}

//----------------------------------------------------------------------------
//----- Facilitators ---------------------------------------------------------
//----------------------------------------------------------------------------


string English_length::toString() const
{
	//---------------------------------------------------------------------
	//  The ostringstream type allows output to be directed to
	//  a string in the same style as usually done with a stream.
	//---------------------------------------------------------------------

	ostringstream os;

	//---------------------------------------------------------------------
	//  output yards_, feet_, and inches_ followed by "yard" or "yards",
	//  "foot" or "feet", and "inch" or "inches" as appropriate.
	//---------------------------------------------------------------------

	os << yards_ << ((yards_ != 1) ? " yards, " : " yard, ");
	os << feet_ << ((feet_ != 1) ? " feet, " : " foot, ");
	os << inches_ << ((inches_ != 1) ? " inches" : " inch");

	//---------------------------------------------------------------------
	//  convert stream to string and return
	//---------------------------------------------------------------------

	string return_string = os.str();
	return return_string;
}
Birthstone nextStone(Birthstone stone)
{
	if (stone == 11)
	{
		return 0;
	}
	else
	{
		stone++;
		return stone;
	}
}
