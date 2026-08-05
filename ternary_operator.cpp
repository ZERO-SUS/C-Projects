#include <iostream>


int main(){
	int n;
	std::cout <<"Number to check Even or ODD ";
	std::cin >> n;
	(n % 2==1) ? std::cout <<"ODD"<< '\n' : std::cout <<"Even"<<'\n';
	std::cout << "Bye";
	
	
	return 0;
}