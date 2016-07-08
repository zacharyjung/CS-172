#ifndef __Social__
#define __Social__
#include <string>
#include <vector>
using namespace std;

class Social {
public:
	Social();
	//Mutators
	void setLastName(string Last);
	void setFirstName(string First);
	void setUserId(string UserID);
	void setPicture(string Picture);
	void setWebsiteToShare(string Website);
	void setWebsiteDescription(string Description);
	void setClique(string Clique);
	//Inspectors
	string getLastName();
	string getFirstName();
	string getUserID();
	string getPicture();
	string getWebsiteToShare();
	string getWebsiteDescription();
	vector <string> getClique();
	//Facilitators
	void htmlOut(string filePath);
	void TextOut(string Text);
private:
	string LastName_;
	string FirstName_;
	string UserID_;
	string Picture_;
	string WebsiteToShare_;
	string WebsiteDescription_;
	vector <string> Clique_;

};
#endif
