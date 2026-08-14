#include <iostream>


int main(){
	
	std::string car[]={"Supra","BMW","M5","G-Wagon"};
	for (std::string cars: car){
		std::cout<< cars<<'\n';
	}
	int num[]={1,2,3,0,4,5,6};
	for (int numb : num){
		std::cout<< numb<<'\n';
	}
}