#include <iostream>
using str = std::string;
int main(){
	int age;
	std :: string name;
	std::cout<<"Enter Your Name :";
	std::getline(std::cin,name);
	std::cout << "Enter your age:";
	std::cin >> age;
	std::cout <<"Hi "<< name <<'\n';
	std::cout << "your age : "<<age;
	
	 
	
	return 0;
	
}