#include <iostream>
#include <cmath>

int main(){
	double a;
	double b;
	double c;
	
	std::cout<<"Enter the Side A : " ;
	std::cin >> a;
	std::cout<<"Enter the side B : ";
	std::cin >> b;
	a = pow(a , 2);
	b =pow (b, 2);
	c = sqrt(a+b);
	
	std::cout << "The Value of c (hypot..) is : "<< c ;
	
	
	return 0;
}