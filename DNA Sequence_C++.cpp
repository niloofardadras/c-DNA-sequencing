//============================================================================
// Name        : lab1part3.cpp
// Author      : niloofar hosseinidadras
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
string CollectDNA () //defining a function for taking the DNA as input
	{
		string n;
		cout<< "enter the DNA sequence"<<"\n";
		cin>>n;// taking user input as a variable named n defined before as string
		return n;
	}


string findcDNA (string DNA)//defining function that finds the complement of the input DNA sequence
{
	int i,a;
	a = DNA.size();//finds the size of DNA string
	string y, cDNA;
	cDNA=DNA;//defines and initiates the CDNA or complement DNA
		for(i=0; i <a; ++i)// defines for loop
				{

			if(DNA[i]=='A')//if statement change the sequence if the string is A

					{ cDNA[i]='T';
					}
			if(DNA[i]=='T')//if statement change the sequence if the string is T
					{ cDNA[i]='A';
					}
			if(DNA[i]=='C')//if statement change the sequence if the string is C
					{ cDNA[i]='G';
					}
			if(DNA[i]=='G')//if statement change the sequence if the string is G
					{ cDNA[i]='C';
					}
				}
		y= cDNA;

	return y;
}


int main() {
	cout << "part3 lab1" << endl; // prints part3 lab1

	string DNA = CollectDNA();

		int a;
			a = DNA.size();
			string CDNA= findcDNA (DNA);//calls findcDNA function
				cout<<CDNA<<"\n";//prints the output of function


	return 0;
}
