//Zachary Jung
//April 14,2016

#include <iostream>
#include <string>
#include <sstream> 
#include <vector>
#include <fstream>
#include "Social.h"
using namespace std;

int main()
{
	//Creates the variable to input data into it's attributes
	Social Person1, Person2, Person3, Person4, Person5;
	//The object for my input file
	ifstream input;
	string words;
	int count = 0;
	int line = 0;
	//Name of the input text file
	input.open("Social.txt");
	//This loop is used to get all of the lines for the first person and input them into their attributes
	do {
		getline(input, words, '\n');
		Person1.setFirstName(words);
		line++;

		getline(input, words, '\n');
		Person1.setLastName(words);
		line++;

		getline(input, words, '\n');
		Person1.setPicture(words);
		line++;

		getline(input, words, '\n');
		Person1.setUserId(words);
		line++;

		getline(input, words, '\n');
		Person1.setWebsiteToShare(words);
		line++;

		getline(input, words, '\n');
		Person1.setWebsiteDescription(words);
		line++;

		getline(input, words, '\n');
		if (words != "--------")
		{
			Person1.setClique(words);
		}
		while ((words != "--------") && (line>=6))
		{
			getline(input, words, '\n');
			{
				Person1.setClique(words);
				line++;
			}
		}
		string test = "1.html";
		//This outputs the attributes to a html file
		Person1.htmlOut(test);
		
	} while (words != "--------");
	do {
		getline(input, words, '\n');
		Person1.setFirstName(words);
		line++;

		getline(input, words, '\n');
		Person1.setLastName(words);
		line++;

		getline(input, words, '\n');
		Person1.setPicture(words);
		line++;

		getline(input, words, '\n');
		Person1.setUserId(words);
		line++;

		getline(input, words, '\n');
		Person1.setWebsiteToShare(words);
		line++;

		getline(input, words, '\n');
		Person1.setWebsiteDescription(words);
		line++;

		getline(input, words, '\n');
		if (words != "--------")
		{
			Person1.setClique(words);
		}
		while ((words != "--------") && (line >= 6))
		{
			getline(input, words, '\n');
			{
				Person1.setClique(words);
				line++;
			}
		}
		string test = "2.html";
		Person1.htmlOut(test);

	} while (words != "--------");
	do {
		getline(input, words, '\n');
		Person1.setFirstName(words);
		line++;

		getline(input, words, '\n');
		Person1.setLastName(words);
		line++;

		getline(input, words, '\n');
		Person1.setPicture(words);
		line++;

		getline(input, words, '\n');
		Person1.setUserId(words);
		line++;

		getline(input, words, '\n');
		Person1.setWebsiteToShare(words);
		line++;

		getline(input, words, '\n');
		Person1.setWebsiteDescription(words);
		line++;

		getline(input, words, '\n');
		if (words != "--------")
		{
			Person1.setClique(words);
		}
		while ((words != "--------") && (line >= 6))
		{
			getline(input, words, '\n');
			{
				Person1.setClique(words);
				line++;
			}
		}
		string test = "3.html";
		Person1.htmlOut(test);

	} while (words != "--------");
	do {
		getline(input, words, '\n');
		Person1.setFirstName(words);
		line++;

		getline(input, words, '\n');
		Person1.setLastName(words);
		line++;

		getline(input, words, '\n');
		Person1.setPicture(words);
		line++;

		getline(input, words, '\n');
		Person1.setUserId(words);
		line++;

		getline(input, words, '\n');
		Person1.setWebsiteToShare(words);
		line++;

		getline(input, words, '\n');
		Person1.setWebsiteDescription(words);
		line++;

		getline(input, words, '\n');
		if (words != "--------")
		{
			Person1.setClique(words);
		}
		while ((words != "--------") && (line >= 6))
		{
			getline(input, words, '\n');
			{
				Person1.setClique(words);
				line++;
			}
		}
		string test = "4.html";
		Person1.htmlOut(test);

	} while (words != "--------");
	do {
		getline(input, words, '\n');
		Person1.setFirstName(words);
		line++;

		getline(input, words, '\n');
		Person1.setLastName(words);
		line++;

		getline(input, words, '\n');
		Person1.setPicture(words);
		line++;

		getline(input, words, '\n');
		Person1.setUserId(words);
		line++;

		getline(input, words, '\n');
		Person1.setWebsiteToShare(words);
		line++;

		getline(input, words, '\n');
		Person1.setWebsiteDescription(words);
		line++;

		getline(input, words, '\n');
		if (words != "--------")
		{
			Person1.setClique(words);
		}
		while ((words != "--------") && (line >= 6))
		{
			getline(input, words, '\n');
			{
				Person1.setClique(words);
				line++;
			}
		}
		string test = "5.html";
		Person1.htmlOut(test);

	} while (words != "--------");


	//Person 1
	//Inputing information into the attributes
	/*Person1.setFirstName("Zachary");
	Person1.setLastName("Jung");
	Person1.setPicture("http://i.imgur.com/DUzJwiV.jpg");//Link to the picture
	Person1.setUserId("11111");
	Person1.setWebsiteToShare("https://www.facebook.com/zachary.jung.1");//Link to the website
	Person1.setWebsiteDescription("This is my facebook page");
	Person1.setClique("Drexel");
	Person1.setClique("Intramural Soccer");
	Person1.htmlOut("11111.html");//Name of the html file
	Person1.TextOut("11111.txt");

	//Person 2
	Person2.setFirstName("Fidel");
	Person2.setLastName("Castro");
	Person2.setPicture("http://science-all.com/images/fidel-castro/fidel-castro-06.jpg");
	Person2.setUserId("22222");
	Person2.setWebsiteToShare("https://en.wikipedia.org/wiki/Fidel_Castro");
	Person2.setWebsiteDescription("This is my Wikipedia");
	Person2.setClique("BeTheChange");
	Person2.setClique("Cuba");
	Person2.htmlOut("22222.html");
	Person2.TextOut("22222.txt");

	//Person 3
	Person3.setFirstName("Will");
	Person3.setLastName("Ferrel");
	Person3.setPicture("http://ia.media-imdb.com/images/M/MV5BMTMxMDIzMDEzNF5BMl5BanBnXkFtZTcwODcxMjE2Mg@@._V1_UY317_CR2,0,214,317_AL_.jpg");
	Person3.setUserId("33333");
	Person3.setWebsiteToShare("https://en.wikipedia.org/wiki/Will_Ferrell");
	Person3.setWebsiteDescription("This is my Wikipedia Page");
	Person3.setClique("Glitterati");
	Person3.setClique("Comedians");
	Person3.htmlOut("33333.html");
	Person3.TextOut("33333.txt");

	//Person 4
	Person4.setFirstName("Lionel");
	Person4.setLastName("Messi");
	Person4.setPicture("http://a.espncdn.com/combiner/i/?img=/photo/2014/1207/soc_g_mess222_cr_1296x729.jpg&w=738&site=espnfc");
	Person4.setUserId("44444");
	Person4.setWebsiteToShare("https://en.wikipedia.org/wiki/Lionel_Messi");
	Person4.setWebsiteDescription("This is my Wikipedia Page");
	Person4.htmlOut("44444.html");
	Person4.TextOut("44444.txt");

	//Person 5
	Person5.setFirstName("Timmy");
	Person5.setLastName("Turner");
	Person5.setPicture("http://vignette1.wikia.nocookie.net/fantendo/images/c/c0/TIMMY_TURNER.png/revision/latest?cb=20120808065653");
	Person5.setUserId("55555");
	Person5.setWebsiteToShare("https://en.wikipedia.org/wiki/List_of_The_Fairly_OddParents_characters#Timmy_Turner");
	Person5.setWebsiteDescription("This is my Wikipedia Page");
	Person5.setClique("DrawnAndQuartered");
	Person5.setClique("FairlyOddParents");
	Person5.htmlOut("55555.html");
	Person5.TextOut("55555.txt");*/

	
}