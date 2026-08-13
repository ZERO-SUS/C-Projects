#include <iostream>

int main(){
	double number[] = {67.67, 99.69, 99.0};
	int n = sizeof(number)/sizeof(number[0]);
	for (int c =0; c<n; c++){
		std::cout<<number[c]<<'\n';
	}
	
	
	return 0;
}