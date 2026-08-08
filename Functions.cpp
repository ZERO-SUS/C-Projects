#include <iostream>
using namespace std;

void cage(int age ){
	
	if (age==0){
		cout<<"Age Cannot be Zero! \n";
	}
	else if( age<18){
		cout<<"You are not eligable ffor DL\n";
	}
	else if (age>=18){
		cout<<"You are Eligible for DL!! \n";
	}
	else{
		cout<<"Age Cannot Be string!!";
	}
}
int main(){
	int ages;
	cout<<"Enter Your Age: ";
	cin>>ages;
	cage(ages);
	return 0;
}