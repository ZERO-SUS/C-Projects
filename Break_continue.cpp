#include <iostream>

int main(){
	std::cout<<"Break statement if i==20";
	for(int i=1; i<=20;i++){
		if (i==15){
			break;
		}
		std::cout<<i<<'\n';
		
	}
	std::cout<<"Continue statement if i== 5 or 8\n";
	for(int o = 1; o<=10;o++){
		if (o==5||o==8){
			continue;
		}
		std::cout<<o<<'\n';
	}
	
	return 0;
}