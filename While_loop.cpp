#include <iostream>

int main(){
	double num;
	std::cout<<"Enter any number from 1 to 10 : ";
	std::cin>>num;
	while (num>10 || num<1){
		num=0;
		std::cout<<"Enter any number from 1 to 10 : ";
		std::cin>>num;
	}
	
	return 0;
}