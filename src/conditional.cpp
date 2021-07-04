#include <iostream>

void grade_equi(){
	int gpurco, gdistru, gdbms, finalgrade;
	
	std::cout<<"\n\t\t\t\t\t***EQUIVALENT GRADE***";
	std::cout<<"\n\nEnter your grade in Purposive Communication: ";
	std::cin>>gpurco;
	std::cout<<"Enter your grade in Discrete Structure: ";
	std::cin>>gdistru;
	std::cout<<"Enter your grade in Database Management: ";
	std::cin>>gdbms;
				
	finalgrade = (gpurco+gdistru+gdbms)/3;
	if((finalgrade > 74) && (finalgrade < 101)){
		if(finalgrade > 89 && finalgrade < 95){
			std::cout<<"\nYour Final Grade is "<< finalgrade <<" and You Passed with Honors";
		}else if(finalgrade > 94 && finalgrade < 98){
			std::cout<<"\nYour Final Grade is "<< finalgrade <<" and You Passed with High Honors";
		}else if(finalgrade > 97 && finalgrade < 101){
			std::cout<<"\nYour Final Grade is "<< finalgrade <<" and You Passed with Highest Honors";
		}else{
			std::cout<<"\nYour Final Grade is "<<finalgrade<<" and You just Passed";
		}
	}else if(finalgrade < 75){
		std::cout<<"\nYour Final Grade is "<< finalgrade <<" and You Failed";
	}
	
}

void temper(){
	
	float temp;
	
	std::cout<<"\n\t\t\t\t\t***TEMPERATURE DETECTOR***";
	std::cout << "\n\nWhat is the temperature?: ";
	std::cin >> temp;
	
	if ( temp < 0){
		std::cout << "\nYour temperature is " << temp << " degree celcius. IT is considered as EXTREMELY COLD.";
	}else if ( temp >= 0 && temp <= 15 ){
		std::cout << "\nYour temperature is " << temp << " degree celcius. IT is considered as TOO COOLD.";
	}else if ( temp > 15 && temp <= 37 ){
		std::cout << "\nYour temperature is " << temp << " degree celcius. Congrats! This is NORMAL.";
	}else{
		std::cout << "\nYour temperature is " << temp << " degree celcius. You might want to lower it because this is HOT BOI!";
	}
	
}

void work_salary(){
	float hours, salary;
	
	std::cout<<"\n\t\t\t\t\t***WEEKLY SALARY***";
	std::cout<<"\n\nEnter the hours worked in a week: ";
	std::cin>>hours;
		
	if(hours <= 40){
		salary = 13.75 * hours;
	}else if(hours > 40 && hours <=60){
		salary = 16.50 * hours;
	}else if(hours > 60){
		salary = 18.00 * hours;
	}
		
	std::cout<<"\n\n-------------------------------------------------------------------------\n";
	std::cout<<"\t\t\t\tPAYSLIP\n\n";
	std::cout<<std::endl<<"Hours worked : "<<hours<<" hours";
	std::cout<<std::endl<<"Week Salary  : "<<salary<<" Php";
}

void vote_reg(){
	
	int age;
	std::cout<<"\n\t\t\t\t\t***VOTER'S AGE VALIDATION***";
	std::cout<<"\n\nEnter your age: ";
	std::cin>>age;
	
	if(age < 18){
		std::cout<<"\n[MINOR ALERT!!!] You are NOT eligible to vote";
	}else{
		std::cout<<"\nYou are QUALIFIED to vote";
	}
}
void calcu(){
	char op;
    double num, num1;

    std::cout << "\n\t\t\t\t--> SIMPLE CALCULATOR <--\n" << std::endl;

    std::cout << "\t\tEnter an operator (+, -, *, /): ";
    std::cin >> op;
    std::cout << "\n\t\tEnter two numbers separated by space: ";
    std::cin >> num >> num1;

    switch (op) {
        case '+':
            std::cout << "\t\t\tYou choose addtion: " << num << " + " << num1 << " = " << num + num1;
            break;
        case '-':
            std::cout << "\t\t\tYou choose subtraction: " << num << " - " << num1 << " = " << num - num1;
            break;
        case '*':
            std::cout << "\t\t\tYou choose multiplication: " << num << " * " << num1 << " = " << num * num1;
            break;
        case '/':
            std::cout << "\t\t\tYou choose divition: " << num << " / " << num1 << " = " << num / num1;
            break;
        default:
            std::cout << "\t\t\tInvalid Input";
            break;
    }
}

void vowel(){
	char ch;

	std::cout << "\n\t\t\t\t--> INDENTIFY IF IT'S VOWEL OR NOT <--\n" << std::endl;

	std::cout << "\t\tEnter the Letter: ";
   	std::cin >> ch;

	switch (ch) {
		case 'A':
		case 'a':
			std::cout << "\n\t\t\tYour character is A and a Vowel\n";
			break;

		case 'E':
		case 'e':
			std::cout << "\n\t\t\tYour character is E and a Vowel\n";
			break;

		case 'I':
		case 'i':
			std::cout << "\n\t\t\tYour character is I and a Vowel\n";
			break;

		case 'O':
		case 'o':
			std::cout << "\nt\t\tYour character is O and a Vowel\n";
			break;

		case 'U':
		case 'u':
			std::cout << "\n\t\t\tYour character is U and a Vowel\n";
			break;

		default: std::cout << "\n\t\t\tThe value you entered is not a vowel or make sure it must valid\n";
			break;
   }
}
