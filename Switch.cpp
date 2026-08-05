#include <iostream>
auto& out = std::cout;
int main(){
	int user;
	out << "Enter the Month (1-12) : ";
	std::cin>> user;
	switch(user){
		case 1:
			out << "January";
			break;
		case 2:
			out << "Febuary";
			break;
		case 3:
			out << "March";
			break;
		case 4:
			out << "April";
			break;
		case 5:
			out << "May";
			break;
		case 6: 
			out << "June";
			break;
		case 7: 
			out << "July";
			break;
		case 8:
			out << "August";
			break;
		case 9:
			out << "September";
			break;
		case 10:
			out <<"October";
			break;
		case 11:
			out << "November";
			break;
		case 12:
			out << "December";
			break;
		default:
			out << " Invalid Month";
			
		
	}
	
	
	return 0;
}