#include <iostream>

int main(){
	int n;
	int number[] = {1,2,3,4,5};
	n = sizeof(number) / sizeof(number[0]);
	for (int c =1;c<n;c++){
		std::cout<<number[c]<<'\n';
	}
	
	return 0;
}