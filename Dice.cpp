#include <iostream>
#include <ctime>
int dice();
int main(){
	srand(time(0));
	int n;
	std::cout<<"Enter the number of dice : ";
	std::cin>>n;
	for(int i= 1;i<n+1;i++){
		std::cout<<i<<" Dice : "<<dice()<<'\n';
	}
	
	
	return 0;
}

int dice(){
	
	return (rand()% 6)+1;
	
}
