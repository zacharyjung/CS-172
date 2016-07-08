#include <string>
#include <iostream>
#include <fstream> 
#include <sstream> 
#include "Social.h"
using namespace std;

Social::Social()
{
	//Default Constructors//
LastName_ = "";
FirstName_ = "";
Picture_="";
WebsiteToShare_="";
WebsiteDescription_ = "";
}
	//Mutators//
void Social::setLastName(string Last)
{
	LastName_ = Last;
}
void Social::setFirstName(string First)
{
	FirstName_ = First;
}
void Social::setUserId(string UserID)
{
	UserID_ = UserID;
}
void Social::setPicture(string Picture)
{
	Picture_ = Picture;
}
void Social::setWebsiteToShare(string Website)
{
	WebsiteToShare_ = Website;
}
void Social::setWebsiteDescription(string Description)
{
	WebsiteDescription_ = Description;
}
void Social::setClique(string Clique)
{
	Clique_.push_back(Clique);
}
	//Inspectors//
string Social::getLastName()
{
	return LastName_;
}
string Social::getFirstName()
{
	return FirstName_;
}
string Social::getUserID()
{
	return UserID_;
}
string Social::getPicture()
{
	return Picture_;
}
string Social::getWebsiteToShare()
{
	return WebsiteToShare_;
}
string Social::getWebsiteDescription()
{
	return WebsiteDescription_;
}
vector <string> Social::getClique()
{
	return Clique_;
}

//This function creates the html with all of the attributes in it
void Social::htmlOut(string file)
{
	ofstream html;
	html.open(file.c_str());
	if(html.is_open())
	{
		html << "<html>\n<head>\n" << "</head>\n<body>\n"
			<< "Name: " << FirstName_ << " " << LastName_ << "<br/>"
			<< "<img SRC=\"" << Picture_ << "\" style=\"width:250px;height:250px;\" align=\"center\" />"
			<< "<br/>" << "<br / >"
			<< "User ID: " << UserID_ << "<br/>"
			<< WebsiteDescription_ << "<br/>"
			<< "Check out my website: <a href=\"" << WebsiteToShare_ << "\">Site</a>" << "<br/>"
			<< "Clique: " << "<br/>";
			 for (int i = 0; i <= (int)Clique_.size()-1; i++)
			{
				html<<"\n"<<"<p>"<<
				Clique_[i]
				<< "</p>\n";
			}
			 html
			 << "<br/>"
			<< "<br/>" << "<br/>"
			<<"</body>\n"
			<< "</html>";

			 html.close();

			 Clique_.clear();
	}
}
void Social::TextOut(string Text)
{
	ofstream text;
	text.open(Text.c_str());

	if (text.is_open())
	{
		text << "Name " << FirstName_ << " " << LastName_ << "\n";
		text << "Picture URL: " << Picture_ << "\n";
		text << "User ID: " << UserID_ << "\n";
		text << WebsiteDescription_ << "\n";
		text	<< "Website URL" << WebsiteToShare_ << "\n";
		text.close();
	}
}