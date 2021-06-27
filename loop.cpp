#include<iostream>

void pyramid(){
	int num, i, j;
	
	std::cout<<"\n\t\t\t\t\t***ASTERISK PYRAMID***";
	std::cout<<"\n\nEnter a number: ";
	std::cin>>num;
	
	for(i = 1; i<=num; i++){
		for(j = 1; j<=num-i; j++){
			std::cout<<" ";
		}
		for(j = 1; j<=2*i-1; j++){
			std::cout<<"*";
		}
		std::cout<<"\n";
	}
}

void factorial(){
	int num, i, sum = 0, f = 1, sumSquared = 0;
	
	std::cout<<"\n\t\t\t***SUM OF N | SUM OF THE SQUARED OF N | FACTORIAL OF N***";
	std::cout<<"\n\nEnter a number: ";
	std::cin>>num;
	
	for(i = 0; i <= num; i++){
		sum = sum + i;
	}std::cout<<std::endl<<"The sum of Num is: "<<sum;
		
		
	for(i = 0; i <= num; i++){
		sumSquared += (i*i);
	}std::cout<<std::endl<<"The sum of the squared of Num is: "<<sumSquared;
		
	for(i = 1; i <= num; i++){
		f *= i;
	}std::cout<<std::endl<<"The factorial of Num is: "<<f;
	
}
