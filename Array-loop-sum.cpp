#include <iostream>
int total(int list[],int size);

int main(){
	int list[] = {1,1,1,1};
	int size = sizeof(list)/sizeof(list[0]);
	std::cout<<total(list,size);
	
	return 0;
}


int total(int list[],int size){
	int p =0;
	for (int i =0; i < size; i++){
		p+= list[i];
	}
	return p;
}