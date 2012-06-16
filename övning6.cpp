#include <iostream>
using namespace std;

int main(){
	double pris;
	cout<<"Pris före rabatt: ";
	cin>>pris;
	double rebatt;
	cout<<"Rabatt i procent: ";
	cin>>rebatt;
	double finalpris;
	finalpris= pris * ( 1 - (rebatt/100));
	cout<<endl;
	cout<<"Pris före rabatt: "<<pris<< " Kr"<<endl;
	cout<<"Rebatt i procent: "<<rebatt;
	cout<<endl<<"Pris efter rabatt: "<<finalpris<< " Kr";
	cout<<endl;
}