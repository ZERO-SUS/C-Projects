#include <iostream>
void balance(double bank);
double deposite(double depo,double bank);
double draw(double dra, double bank);

int main(){
	int option;
	double bank = 9999;
	std::cout<<"==============CRYPTO-BANK-OF-DEV============\n";
	std::cout<<"Chose only 1| 2 | 3 | 4 | only \n";
	std::cout<<"1) Check Bank Balance \n";
	std::cout<<"2) Deposite Money \n";
	std::cout<<"3) With Draw Money\n";
	std::cout<<"4) Exit";
	std::cout<<"============================================\n";
	
	do{
		std::cout<<"Enter The Option : ";
		std::cin>>option;
		switch(option){
			
			case 1:
				balance(bank);
				break;
			case 2:
				double depo;
				std::cout<<"Enter the Ammount to Deposite : $";
				std::cin>>depo;
				if(depo<0){
					std::cout<<"Invalid Money Input "<<'\n';
				}
				else{
				bank = deposite(depo,bank);
				std::cout<<"Succesfully Deposite\n";
				std::cout<<"Bank Balance now : $"<<bank<<'\n';}
				break;
			case 3:
				double dra;
				std::cout<<"Enter The ammount to Draw : ";
				std::cin>>dra;
			
				if (dra<0){
					std::cout<<"Invalid Money"<<'\n';}
				else if(dra>bank){
					std::cout<<"Invalid Money"<<'\n';
				}
				
				
				else{
					bank = draw(dra,bank);
					std::cout<<"Succesfully Drawn\n";
					std::cout<<"Current Balance : "<<bank<<'\n';
				}
				break;
			default:
				std::cout<<"Invalid input"<<'\n';
				break;
		
		}
	}while(option!=4);
	
	
	
	return 0;
}

void balance(double bank){
	std::cout<<"Current Bank Balance is : $"<<bank<<'\n';
}
double deposite(double depo,double bank){
	bank = bank + depo;
	
	return bank;
}

double draw(double dra, double bank){
	bank = bank - dra;
	return bank;
	
}