#include <iostream>
#include <ctime>
int main(){
	srand(time(NULL));
	int num = (rand() % 6)+1; //betwwen 1-6 numbers
	std::cout<<num;
	
	return 0;
}