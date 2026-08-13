#include <iostream>
#include <ctime>
char userchoice();
void showchoice(char player);
char computerchoice();
void win(char player,char computer);
int main(){
	char player;
	char computer;
	player = userchoice();
	std::cout<<"Your Choice : ";
	showchoice(player);
	computer = computerchoice();
	std::cout<<"Computer Choice :";
	showchoice(computer);
	win(player,computer);
	return 0;
}


char userchoice(){
	char user;
	std::cout<<"Rock - Paper - Scissor\n";
	do{
	std::cout<<"================================\n";
	std::cout<<"r - Rock\n";
	std::cout<<"p - Paper\n";
	std::cout<<"s - Scissor\n";
	std::cout<<"================================\n";
	std::cout<<"Enter your option : ";
	std::cin>>user;
	}while(user!='r' && user!='p' && user!='s');
	return user;
	
}
void showchoice(char player){
	switch(player){
		case 'r':
			std::cout<<"Rock\n";
			break;
		case 'p':
			std::cout<<"Paper\n";
			break;
		case 's':
			std::cout<<"Scissor\n";
			break;
		
	}
}
char computerchoice(){
	int temp;
	srand(time(0));
	temp = (rand() % 3)+1;
	switch(temp){
		case 1:return 'r';
		case 2:return 'p';
		case 3:return 's';
	}
}
void win(char player,char computer){
	if (player =='r' && computer == 's'){
		std::cout<<"You Won!";}
	else if(player =='r'&& computer == 'p'){
		std::cout<<"Computer Won!";}
	else if(player =='s'&& computer == 'p'){
		std::cout<<"You Won!";}
	else if(player =='s'&& computer == 'r'){
		std::cout<<"Computer Won!";}
	else if(player =='p'&& computer == 's'){
		std::cout<<"Computer Won!";}
	else if(player =='p'&& computer == 'r'){
		std::cout<<"You Won!";}
	else{
		std::cout<<"Draw !";
	}
}

