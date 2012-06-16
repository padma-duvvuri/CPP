#include <iostream>
using namespace std;

int main(){
	char answer;
	cout<<"Svara Ja eller Nej (j/s): ";
	cin>>answer;
	if(answer =='j' )
		cout<<"Du svarade Ja";
	else
		cout<<"Du svarade Nej";
	cout<<endl;
}