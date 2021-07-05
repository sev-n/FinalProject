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
void sumfac(){
	int num, i, sum = 0, f = 1, sumSquared = 0;
	
	std::cout<<"\n\t\t\t*** SUM OF N | SUM OF THE SQUARED OF N | FACTORIAL OF N ***";
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

void reverse(){
    int rev, n = 0, rem;

    std::cout << "Please enter a number you want to reverse: ";
    std::cin >> rev;

    while (rev != 0)
    {
          n = n * 10;
          n = n + rev % 10;
          rev = rev / 10;
    }
    std::cout << "\n\t\t\t\t\tThe reverse number is: "  << n;
}

void multi_table(){
	int number, product;
    std::cout << "\n\t\t\t\t--> PRINT MULTIPLICATION TABLE OF A GIVEN NUMBER <--\n" << std::endl;

    std::cout << "\tEnter a number: ";
    std::cin >> number;

    for(int i = 1; i < 11; i++){
        product = number * i;
        std::cout << "\t" <<product << " ";
    }
}
void count(){
	int number, count = 0;
    std::cout << "\n\t\t\t\t--> COUNT THE TOTAL NUMBER OF DIGITS IN A NUMBER <--\n" << std::endl;

    std::cout << "\tEnter a number: ";
    std::cin >> number;

     while(number != 0){
        count++;
        number /= 10;
    }
    std::cout << "\t\t" << "Total digits are: " << count;
}
void fibo_terms(){
	int n, first_term = 0, second_term = 1, count = 0;

    std::cout << "\n\t\t\t\t--> DISPLAY FIBONACCI SERIES UP TO N terms <--\n" << std::endl;

    std::cout << "\tEnter a number of terms: ";
    std::cin >> n;

    while(count < n){
        std::cout << "\t" <<first_term << " ";
        int temp = first_term + second_term;
        first_term = second_term; // update
        second_term = temp;
        count += 1;
    }
}
