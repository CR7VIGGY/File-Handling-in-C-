//Write a C++ program that creates an output file, writes information to it, closes  
//the file and open it again as an input file and read the information from the file.

#include<bits/stdc++.h>
using namespace std;
#include<fstream>
#include<conio.h>
#include<string.h>

int main()
{
	ofstream out;
	ifstream in;
	out.open("name.dat");
	cout<<"enter your name";
	string name;
	cin>>name;
	out<<name<<"\n";
	string branch;
	cout<<"enter your branch";
	cin>>branch;
	out<<branch<<"\n";
	cout<<"enter your roll no.";
	int x;
	cin>>x;
	out<<x<<"\n";
	out.close();
	//
	in.open("name.dat");
	in>>name;
	in>>branch;
	in>>x;
	cout<<name<<"\n";
	cout<<branch<<"\n";
	cout<<x<<"\n";
	in.close();
	//
	
 		in.open("name.dat");
 		char output[1];
		if (in.is_open()) 
		{
 			while (!in.eof()) 
			{
				in>>output;
	   			cout<<output<<"\n";
			}
		}
		in.close();
	getch();
	return 0;
}
