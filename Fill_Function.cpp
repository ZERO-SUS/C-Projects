#include<iostream>


int main(){
	std::string food[9];
	
	fill(food,food+3,"Hello \n");
	fill(food+3,food+6,"Hi \n");
	fill(food+6,food+9,"BRO \n");
	
	for (std::string foods : food){
		std::cout<<foods;
	}
	
	return 0;
}