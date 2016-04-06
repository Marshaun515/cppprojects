//Introductory 13-20.cpp
//Displays the part for the number provided
//Created by Marshaun Diggs on 03-19-2016

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
int main()
{
	string part = "";
	const string INVALID_MSG =" Incorrect Part Number, Please try again";
	string MS = "Mail - Standard";
	string MP = "Mail - Priority";
	string FS = "FedEx - Standard";
	string FO = "FedEx - Overnight";
	string UP = "UPS";
		//user input
		cout <<"What is your part number? (-1 to end the program)" << endl;
		getline(cin, part);
		while(part != "-1")
		{
			if(part.length() >= 6 || part.length() <= 3)
			{
				cout << INVALID_MSG << endl << endl;
			}
			if(part.substr(1, 2) == "MS" || part.substr(1,2) == "ms" || part.substr(1,2) == "Ms" || part.substr(1,2) == "mS")
			{
				cout << MS << endl << endl;
			}
			if(part.substr(1, 2) == "MP" || part.substr(1,2) == "mp" || part.substr(1,2) == "Mp" || part.substr(1,2) == "mP")
			{
				cout << MP << endl << endl;
			}
			if(part.substr(1, 2) == "FS" || part.substr(1,2) == "fs" || part.substr(1,2) == "Fs" || part.substr(1,2) == "fS")
			{
				cout << FS << endl << endl;
			}
			if(part.substr(1, 2) == "FO" || part.substr(1,2) == "fo" || part.substr(1,2) == "Fo" || part.substr(1,2) == "fO")
			{
				cout << FO << endl << endl;
			}
			if(part.substr(1, 2) == "UP" || part.substr(1,2) == "up" || part.substr(1,2) == "Up" || part.substr(1,2) == "uP")
			{
				cout << UP << endl << endl;
			}
		cout << "What is your part number?" << endl;
			getline(cin, part);
				

		}
}
