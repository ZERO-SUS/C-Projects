#include <iostream>
using namespace std;


void nage(string name, int age){
	cout<<"Welcome "<<name<<'\n';
	cout<<"Your age is : "<<age;
}


int main(){
	std::string na;
	int ag;
	cout<<"Enter Your Name : ";
	std::getline(std::cin,na);
	cout<<"Enter Your age : ";
	cin>>ag;
	nage(na,ag);
	return 0;
}