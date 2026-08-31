#include <iostream>


int main(){
	std::string user;
	int check =0;
	int index;
	std::string animal[] = {"dog","cat","snake","horse","lion","elephant"};
	int size = sizeof(animal)/sizeof(animal[0]);
	for (int c =0; c<size; c++){
		std::cout<<"-"<<animal[c]<<'\n';
	}
	std::cout<<"--------------------------------------- \n";
	std::cout<<"Enter the Animal name to search it's Index :";
	std::getline(std::cin,user);
	for(int i =0;i<size; i++){
		if (user == animal[i]){
			check=1;
			index =i;
			break;
			
		}
	}
	if (check==1){
		std::cout<<user<<" is found at index: "<<index<<'\n';
	}
	else{
		std::cout<<"Animal Not found ! \n";
		}
	
	return 0;
}