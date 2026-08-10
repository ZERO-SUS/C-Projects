#include <iostream>
double cube(double nm);
double square(double num);

int main(){
	double um;
	std::cout<<"Enter The number to square : ";
	std::cin>> um;
	std::cout<<"The Square of "<<um<<" is "<<square(um)<<'\n';
	std::cout<<"The Cube of "<<um<<" is "<<cube(um)<<'\n';
	
	
	
	
	return 0;
}

double square(double num){
	return num*num;
}

double cube(double nm){
	return nm*nm*nm;
}