#include <iostream>
void Bubbl(int number[], int size);
void print(int num[],int size);

int main(){
	int number[] = {1,54,7,9,3,0,67,1,6,8,-1,4,59,25};
	int size =sizeof(number)/sizeof(number[0]);
	
	std::cout<<"The unsorted Element are : \n";
	print(number,size);
	std::cout<<"After Bubble Sorting : \n";
	Bubbl(number,size);
	print(number,size);
		
	return 0;
}
void Bubbl( int number[], int size){
	int temp;
	
	for(int i =0; i <size-1;i++){
		for(int j =0; j <size-i-1;j++){
			if (number[j] > number[j+1]){
				temp = number[j];
				number[j]=number[j+1];
				number[j+1]=temp;
				
			}
			
		}
	}
}

void print(int num[],int size){
	for(int i =0 ; i<size; i++){
		std::cout<<num[i]<<",";
	}
	std::cout<<'\n';
}