#include <iostream>
#include <ctime>

int main(){
	int num;
	int gess;
	int tri;
	srand(time(NULL));
	num = (rand()% 100)+1;
	do{
		tri++;
		std::cout<<"Enter a Guss Number  (1-100) : ";
		std::cin>>gess;
		if (gess<num){
			std::cout<<"Your  Number is Too Low\n";
		}
		else if (gess>num){
			std::cout<<"Your Number is Too High\n";
			
		}
		
		else{
			std::cout<<"***********************\n";
			std::cout<<"Correct Guess "<<"'"<<num<<"'"<<'\n';
			std::cout<<"The Number of Gusses : "<<tri<<'\n';
			std::cout<<"***********************\n";
		}
	}while(gess!=num);
	return 0;
}