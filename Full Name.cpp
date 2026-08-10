#include <iostream>
std::string fullname(std::string str1,std::string str2);


int main(){
	std::string name,last, fn;
	std::cout<<"Enter Your First Name : ";
	std::cin>>name;
	std::cout<<"Enter Your Last Name : ";
	std::cin>>last;
	fn = fullname(name,last);
	std::cout<<"Full Name: "<<fn<<'\n';
	
	return 0;
}
std::string fullname(std::string str1,std::string str2){
	return str1 + ' ' + str2;


}