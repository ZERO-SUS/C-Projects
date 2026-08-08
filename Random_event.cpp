#include <iostream>
#include <ctime>

int main(){
	srand(time(0));
	int ran = (rand() % 3) +1;
	switch(ran){
		case 1:
			std::cout<<"You are in Fist pace !";
			break;
		case 2:
			std::cout<<"You are in Second Place";
			break;
		case 3:
			std::cout<<"You are in Third Place";
			break;
	}
	
	
	return 0;
}