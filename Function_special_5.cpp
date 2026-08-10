#include <iostream>
void day(int n);
void day(std::string f1);
void day();

int main(){
	day();
	day("Mon");
	day(67);
	return 0;
}

void day(){
	std::cout<<"Have a Good day!\n";
}

void day(std::string f1){
	
	std::cout<<"Have a Good "<<f1<<"day!\n";
}

void day(int n){
	std::cout<<"Have a Good "<<n<<"day!\n";
	
}