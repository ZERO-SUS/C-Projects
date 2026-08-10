#include <iostream>
void balance(int bank);
int dep(int bank, int money);
int draw(int bank, int down);

int main(){
	int user;
	int bank = 10000;
	int depo=0;
	
	std::cout<<"Enter Only 1 | 2 | 3 | :\n";
	std::cout<<"1.)Check Bank Balance\n";
	std::cout<<"2.)Depostite Money\n";
	std::cout<<"3.)With Draw Money\n";
	std::cout<<"________________________________\n";
	std::cout<<"Enter Your Option : ";
	std::cin>>user;
	
	switch(user){
		
		case 1:
			balance(bank);
			break;
		case 2:
			balance(bank);
			std::cout<<"Enter The ammount to Deposite : ";
			std::cin>>depo;
			bank=dep(bank,depo);
			balance(bank);
			depo=0;
			break;
		case 3:
			balance(bank);
			std::cout<<"Enter The ammount to Draw : ";
			std::cin>>depo;
			bank = draw(bank,depo);
			balance(bank);
			depo=0;
			break;
		default:
			std::cout<<"Invalid Option !";
			break;
		
	}
	return 0;
}

void balance(int bank){
	std::cout<<"Bank Balance : $"<<bank<<'\n';
}

int dep(int bank, int money){
	bank = bank + money;
	return bank;	
}

int draw(int bank, int down){
	bank-=down;
	return bank;
}