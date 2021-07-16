#include "color.hpp"
using namespace std;

// college grading system need
void grade_equi(){
	int gpurco, gdistru, gdbms, gnstp, gfildis, ginfom, giprog, ggepef, finalgrade;
	
	cout<<"\n\t***" << dye::yellow(" EQUIVALENT GRADE ") << "***\n" << endl;
	return_purco:
	cout<<dye::bright_white("Enter your grade in Purposive Communication: ");
	cin>>gpurco;
	if(gpurco) ;
    else if(cin.fail()){
        cin.clear(); cin.ignore(1024, '\n');
        goto return_purco;
    }
	return_distru:
	cout<<dye::bright_white("Enter your grade in Discrete Structure: ");
	cin>>gdistru;
	if(gdistru) ;
    else if(cin.fail()){
        cin.clear(); cin.ignore(1024, '\n');
        goto return_distru;
    }
	return_dbms:
	cout<<dye::bright_white("Enter your grade in Database Management: ");
	cin>>gdbms;
	if(gdbms) ;
    else if(cin.fail()){
        cin.clear(); cin.ignore(1024, '\n');
        goto return_dbms;
    }
	return_nstp:
	cout<<dye::bright_white("Enter your grade in National Service Training Program: ");
	cin>>gnstp;
	if(gnstp) ;
    else if(cin.fail()){
        cin.clear(); cin.ignore(1024, '\n');
        goto return_nstp;
    }
	return_fildis:
	cout<<dye::bright_white("Enter your grade in FILIPINO: ");
	cin>>gfildis;
	if(gfildis) ;
    else if(cin.fail()){
        cin.clear(); cin.ignore(1024, '\n');
        goto return_fildis;
    }
	return_infom:
	cout<<dye::bright_white("Enter your grade in INFORMATION MANAGEMENT: ");
	cin>>ginfom;
	if(ginfom) ;
    else if(cin.fail()){
        cin.clear(); cin.ignore(1024, '\n');
        goto return_infom;
    }
	return_iprog:
	cout<<dye::bright_white("Enter your grade in COMPUTER PROGRAMMING 2: ");
	cin>>giprog;
	if(giprog) ;
    else if(cin.fail()){
        cin.clear(); cin.ignore(1024, '\n');
        goto return_iprog;
    }
	return_gepef:
	cout<<dye::bright_white("Enter your grade in FITNESS EXERCISE: ");
	cin>>ggepef;
	if(ggepef) ;
    else if(cin.fail()){
        cin.clear(); cin.ignore(1024, '\n');
        goto return_gepef;
    }
	finalgrade = (gpurco+gdistru+gdbms+gnstp+gfildis+ginfom+giprog+ggepef)/8;
	if((finalgrade > 74) && (finalgrade < 101)){
		if(finalgrade > 89 && finalgrade < 95){
			cout<<"\n\tYour" << dye::aqua(" Final Grade ") << "is "<< finalgrade <<" and You Passed with Honors";
		}else if(finalgrade > 94 && finalgrade < 98){
			cout<<"\n\tYour" << dye::aqua(" Final Grade ") << "is "<< finalgrade <<" and You Passed with high Honors";
		}else if(finalgrade > 97 && finalgrade < 101){
			cout<<"\n\tYour" << dye::aqua(" Final Grade ") << "is "<< finalgrade <<" and You Passed with highest Honors";
		}else{
			cout<<"\n\tYour" << dye::aqua(" Final Grade ") << "is "<< finalgrade <<" and You Passed";
		}
	}else if(finalgrade < 75){
		cout<<"\n\tYour" << dye::aqua(" Final Grade ") << "is "<< finalgrade <<" and You Failed";
	}
}
void temper(){
	float temp, answer;
	int choose;
	
	cout<<"\n\t\t\t\t      ***" << dye::yellow(" TEMPERATURE CONVERTER ") << "***\n" << endl;
	return_home:
	cout << dye::light_yellow("\n\t[") << dye::yellow("1") << dye::light_yellow("] ") << dye::aqua("Celsius to Fahrenheit") << 
	dye::light_yellow("\t[") << dye::yellow("2") << dye::light_yellow("] ") << dye::aqua("Fahrenheit to Celsius") << 
	dye::light_yellow("\t[") << dye::yellow("3") << dye::light_yellow("] ") << dye::aqua("Kelvin to Celsius\n") << endl;
	cout << dye::light_yellow("\t[") << dye::yellow("4") << dye::light_yellow("] ") << dye::aqua("Celsius to Kelvin") << 
	dye::light_yellow("\t\t[") << dye::yellow("5") << dye::light_yellow("] ") << dye::aqua("Fahrenheit to Kelvin") <<
	dye::light_yellow("\t[") << dye::yellow("6") << dye::light_yellow("] ") << dye::aqua("Kelvin to Fahrenheit") << endl;
	cout << dye::light_yellow("\n\t\t\t\t\t\t[") << dye::yellow("0") << dye::light_yellow("] ") << dye::red("Terminate") << endl;
	
	return_chose:
	cout << dye::bright_white("\nPlease choose: ");
	cin >> choose;

	if(choose) ;
    else if(cin.fail()){
        cin.clear(); cin.ignore(1024, '\n');
        goto return_chose;
    }
	if(choose){
		if(choose == 1){
			cout << dye::bright_white("\nEnter Celsius in digit/s: ");
			cin >> temp;

			answer = temp * 9/5 + 32;
			cout << "\n\t" << temp << "C " << dye::aqua("is equal to ") << answer << "F\n";
			goto return_chose;
		}else if(choose == 2){
			cout << dye::bright_white("\nEnter Fahrenheit in digit/s: ");
			cin >> temp;

			answer = (temp - 32) * 5/9;
			cout << "\n\t" << temp << "F " << dye::aqua("is equal to ") << answer << "C\n";
			goto return_chose;
		}else if(choose == 3){
			cout << dye::bright_white("\nEnter Kelvin in digit/s: ");
			cin >> temp;

			answer = temp - 273.15;
			cout << "\n\t" << temp << "K " << dye::aqua("is equal to ") << answer << "C\n";
			goto return_chose;
		}else if(choose == 4){
			cout << dye::bright_white("\nEnter Celsius in digit/s: ");
			cin >> temp;

			answer = temp + 273.15;
			cout << "\n\t" << temp << "C " << dye::aqua("is equal to ") << answer << "K\n";
			goto return_chose;
		}else if(choose == 5){
			cout << dye::bright_white("\nEnter Fahrenheit in digit/s: ");
			cin >> temp;

			answer = (temp + 459.67) * 5/9;
			cout << "\n\t" << temp << "F " << dye::aqua("is equal to ") << answer << "K\n";
			goto return_chose;
		}else if(choose == 6){
			cout << dye::bright_white("\nEnter Kelvin in digit/s: ");
			cin >> temp;

			answer = temp *  9/5 - 459.67;
			cout << "\n\t" << temp << "K " << dye::aqua("is equal to ") << answer << "F\n";
			goto return_chose;
		}else if(choose > 6) goto return_chose;
	}else if(choose == 0) cout << " ";
}
void work_salary(){
	float hours, salary;
	
	cout<<"\n\t***" << dye::yellow(" WEEKLY SALARY ") << "***\n" << endl;

	return_ask:
	cout<<dye::bright_white("Enter the hours worked in a week: ");
	cin>>hours;

	if(hours) ;
    else if(cin.fail()){
        cin.clear(); cin.ignore(1024, '\n');
        goto return_ask;
    }
		
	if(hours <= 40){
		salary = 13.75 * hours;
	}else if(hours > 40 && hours <=60){
		salary = 16.50 * hours;
	}else if(hours > 60){
		salary = 18.00 * hours;
	}
		
	cout<<"\n\n------------------------\n";
	cout<<dye::yellow("\tPAYSLIP\n\n");
	cout<<endl << dye::aqua("Hours worked : ") << hours <<" hours";
	cout<<endl << dye::aqua("Week Salary  : ") << salary << " Php";
}

void vote_reg(){
	int age;

	cout<<"\n\t***" << dye::yellow(" VOTER'S AGE VALIDATION ") << "***\n" << endl;
	
	return_age:
	cout<<dye::bright_white("Enter your age: ");
	cin>>age;

	if(age) ;
    else if(cin.fail()){
        cin.clear(); cin.ignore(1024, '\n');
        goto return_age;
    }
	
	if(age < 18){
		cout<<dye::red("\n\t[MINOR ALERT!!!] ") << "You are NOT eligible to vote";
	}else{
		cout<<"\n\tYou are" << dye::aqua(" QUALIFIED ") << "to vote";
	}
}
void calcu(){
	char op;
    double num, num1;
	cout<<"\n\t***" << dye::yellow(" SIMPLE CALCULATOR ") << "***\n" << endl;

    cout << dye::bright_white("Enter an operator") << " (" << dye::yellow(" + - * / ") << "): ";
    cin >> op;

	return_xy:
    cout << dye::bright_white("\nEnter two numbers separated by space: ");
    cin >> num >> num1;

	if(num && num1) ;
    else if(cin.fail()){
        cin.clear(); cin.ignore(1024, '\n');
        goto return_xy;
    }
	switch (op) {
		case '+':
			cout << "\n\tYou choose addtion: " << num << dye::red(" + ") << num1 << dye::red(" = ") << num + num1;
			break;
		case '-':
			cout << "\n\tYou choose subtraction: " << num << dye::red(" - ") << num1 << dye::red(" = ") << num - num1;
			break;
		case '*':
			cout << "\n\tYou choose multiplication: " << num << dye::red(" * ") << num1 << dye::red(" = ") << num * num1;
			break;
		case '/':
			cout << "\n\tYou choose divition: " << num << dye::red(" / ") << num1 << dye::red(" = ") << num / num1;
			break;
		default:
			cout << dye::red("\n\tInvalid Operator");
			break;
	}
}
void vowel(){
	char ch;

	cout<<"\n\t***" << dye::yellow(" INDENTIFY IF IT'S VOWEL OR CONSONANT ") << "***\n" << endl;

	cout << dye::bright_white("Enter a Letter: ");
   	cin >> ch;

	if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' \
	|| ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
		cout << "\n\t" << ch << dye::aqua(" is a vowel");
	else cout << "\n\t" <<ch << dye::aqua(" is consonant");

}
