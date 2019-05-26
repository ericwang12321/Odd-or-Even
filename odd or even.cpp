#include <iostream>
using namespace std;

int main(){
	cout<<"Please enter a number:";
	int number;
	cin>>number;
	if (number%2 != 0)
		cout<<"The number you entered is an odd number."<<endl;
	else
		cout<<"The number you entered is an even number."<<endl;
} 
