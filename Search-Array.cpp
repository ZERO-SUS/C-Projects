#include <iostream>
void display_array(int array[],int size);

int main(){
	
	int number[] = { 1 ,2 ,3 ,4 ,5,6 ,7,8,9,10};
	int size = sizeof(number)/sizeof(number[0]);
	int index;
	int user;
	display_array(number,size);
	std::cout<<"Enter the Element to search it's Index :";
	std::cin>> user;
	for(int j=0; j<size; j++){
		if(number[j]==user){
			index =j;
		}
	}
	std::cout<<user<<" is in the Index :"<<index;

	return 0;
}


void display_array(int array[],int size){
	std::cout<<"The Elements are :";
	std::cout<<"[";
	for(int i =0; i<size; i++){
		std::cout << array[i]<<',';
		}
	std::cout<<"]"<<'\n';
}