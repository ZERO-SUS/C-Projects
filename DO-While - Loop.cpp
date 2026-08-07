#include <iostream>

int main(){
	
	std::string name;
	
	do{
		std::cout<<"Enter Your Name : ";
		std::getline(std::cin, name);
	}while ( name.empty());
	std::cout<<"Welcom "<<name;
	
	return 0;
}