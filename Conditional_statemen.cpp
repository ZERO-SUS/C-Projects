#include <iostream>
auto& out = std::cout;
auto& in = std::cin;

int main(){
	int n;
	out << "Enter The Number : ";
	in >> n;
	if (n ==0){
		out<< " The Number is Zero"<<'\n';
		out << "Number is Even "<<'\n';
	}
	else {
		(n>0) ? out<< "The number is Positive"<<'\n' 
		: out <<"The Number is Negetive " << '\n';
		(n%2 !0) ? out << "Number is ODD " <<'\n'
	: out << "Number is Even "<<'\n';
	}
	
	
	return 0;
}