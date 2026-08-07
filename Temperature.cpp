#include <iostream>


int main (){
	double temp;
	char sym;
	
	std::cout << "F - Faranate \n";
	std::cout<< "C - Celcous\n";
	std::cout <<"Enter the Unit to convert : ";
	std::cin>> sym;
	
	if(sym == 'F' || sym =='f'){
		std::cout<<"Enter The Temperature in Celcious : ";
		std::cin>> temp;
		temp =(1.8 * temp) +32;
		std::cout<< "The Temperatue in Franade is "<<temp<<sym<<'\n';
		std::cout<<"Bye";
		
	}
	else if (sym =='C' || sym =='c'){
		std::cout<<"Enter The temperature in Franade : ";
		std::cin>>temp;
		temp = (temp-32)*5/9;
		std::cout<<"The Temperature in Celcious is :"<<temp<<sym<<'\n';
		std::cout<<"Bye";
	
	
	}
}