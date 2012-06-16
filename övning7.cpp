#include <iostream>
using namespace std;

int main(){
	double pris;
	const double moms = 1.25;
	cout<<"Ange pris exclusive moms: ";
	cin>>pris;
	double finalpris;
	finalpris= pris * moms;
	cout<<endl;
	cout<<"Pris exklusive moms: "<<pris<< " Kr"<<endl;
	cout<<endl<<"Pris inklusive moms: "<<finalpris<< " Kr";
	cout<<endl;
}