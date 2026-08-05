#include <iostream>

int main(){
	int age;
	std::string name;
	std::cout<<"Enter Your Name : ";
	std::getline(std::cin , name);
	std::cout<<"Enter Your Age : ";
	std::cin>> age;
	
	if ( age >=18){
		std::cout << "You are Eligible for DL "<< name<< "!";
		
	}
	else if (age<=0){
		std::cout << "Bro age cannot be ZERO or Negetive or Characters";
	}
	else{
		std::cout<<"You are Child lil " << name<<"!";
	}
	
	
	return 0;
}