#include <iostream>
auto& out = std::cout;
auto& in = std::cin;
int main(){
	char op;
	double num1;
	double num2;
	double result;
	out << "***************** CALCULATOR *****************"<<'\n';
	
	out << "ENter the operator ( + - / *) : ";
	in>> op;
	
	out << "Enter the first Number : ";
	in >> num1;
	out << "Enter the second  Number : ";
	in >> num2;
	
	switch(op){
		case '+':
			result = num1 + num2;
			out << "Result : " << result << '\n';
			break;
		case '-':
			result = num1 - num2;
			out << "Result : " << result << '\n';
			break;
		case '*':
			result = num1 * num2;
			out << "Result : " << result << '\n';
			break;
		case '/':
			result = double(num1) / num2;
			out << "Result : " << result << '\n';
			break;
		default :
			out << "Plz Enter the Valid Operator"<< '\n';
			break;
	}
	
	
	
	out << "**********************************************";
	
	return 0;
}