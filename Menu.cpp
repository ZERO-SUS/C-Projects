#include <iostream>
void show_menu( std::string menu[],int size);

int main(){
	bool check;
	std::string user;
	std::string menu[] = {"chips","bun","redbull"};
	int size = sizeof(menu)/sizeof(menu[0]);
	show_menu(menu,size);
	do{
	std::cout<<"Enter item to put in cart ( Q to quit) :";
	std::getline(std::cin,user);
	check =false;
	if (user!="q" && user!="Q"){
		
		for(int j = 0 ;j<size;j++){
			if (user == menu[j]){
				check = true;
				break;
			}
		}
		if(check== false){
			std::cout<<"Invalid Item , Plz select the items from menu \n";
			
		}
	}
		
	}while(user!="q" && user!="Q");
	
	
	return 0;
}

void show_menu( std::string menu[],int size){
	int in = 1;
	std::cout<<"============== MENU ============== \n";
	for (int i =0; i<size; i++){
		std::cout<<in<<". "<<menu[i]<<'\n';
		in++;
	}
	std::cout<<"================================== \n";
}