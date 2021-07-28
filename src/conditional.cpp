using namespace std;

// college grading system need
void grade_equi(){
	int gpurco, gdistru, gdbms, gnstp, gfildis, ginfom, giprog, ggepef, finalgrade;
	
	cout << "\n\t*** EQUIVALENT GRADE ***\n" << endl;
	return_purco:
	cout << "Enter your grade in Purposive Communication: ";
	cin >> gpurco;

	if(gpurco) ;
    else if(cin.fail()){
        cin.clear(); cin.ignore(1024, '\n');
        goto return_purco;
    }
	return_distru:
	cout << "Enter your grade in Discrete Structure: ";
	cin >> gdistru;

	if(gdistru) ;
    else if(cin.fail()){
        cin.clear(); cin.ignore(1024, '\n');
        goto return_distru;
    }
	return_dbms:
	cout << "Enter your grade in Database Management: ";
	cin >> gdbms;

	if(gdbms) ;
    else if(cin.fail()){
        cin.clear(); cin.ignore(1024, '\n');
        goto return_dbms;
    }
	return_nstp:
	cout << "Enter your grade in National Service Training Program: ";
	cin >> gnstp;

	if(gnstp) ;
    else if(cin.fail()){
        cin.clear(); cin.ignore(1024, '\n');
        goto return_nstp;
    }
	return_fildis:
	cout << "Enter your grade in FILIPINO: ";
	cin >> gfildis;

	if(gfildis) ;
    else if(cin.fail()){
        cin.clear(); cin.ignore(1024, '\n');
        goto return_fildis;
    }
	return_infom:
	cout << "Enter your grade in INFORMATION MANAGEMENT: ";
	cin >> ginfom;

	if(ginfom) ;
    else if(cin.fail()){
        cin.clear(); cin.ignore(1024, '\n');
        goto return_infom;
    }
	return_iprog:
	cout << "Enter your grade in COMPUTER PROGRAMMING 2: ";
	cin >> giprog;

	if(giprog) ;
    else if(cin.fail()){
        cin.clear(); cin.ignore(1024, '\n');
        goto return_iprog;
    }
	return_gepef:
	cout << "Enter your grade in FITNESS EXERCISE: ";
	cin >> ggepef;

	if(ggepef) ;
    else if(cin.fail()){
        cin.clear(); cin.ignore(1024, '\n');
        goto return_gepef;
    }
	finalgrade = (gpurco + gdistru + gdbms + gnstp + gfildis + ginfom + giprog + ggepef)/8;
	if((finalgrade > 74) && (finalgrade < 101)){
		if(finalgrade > 89 && finalgrade < 95) cout << "\n\tYour Final Grade is "<< finalgrade << " and You Passed with Honors";
		else if(finalgrade > 94 && finalgrade < 98) cout << "\n\tYour Final Grade is " << finalgrade << " and You Passed with high Honors";
		else if(finalgrade > 97 && finalgrade < 101) cout << "\n\tYour Final Grade is " << finalgrade << " and You Passed with highest Honors";
		else cout << "\n\tYour Final Grade is " << finalgrade << " and You Passed";
	}else if(finalgrade < 75) cout << "\n\tYour Final Grade is " << finalgrade << " and You Failed";
}
void temper(){
	float temp, answer;
	int choose;
	
	cout<<"\n\t\t\t\t      *** TEMPERATURE CONVERTER ***\n" << endl;
	return_home:
	cout << "\n\t[1] Celsius to Fahrenheit" <<
	"\t[2] Fahrenheit to Celsius" <<
	"\t[3] Kelvin to Celsius\n" << endl;
	cout << "\t[4] Celsius to Kelvin" <<
	"\t\t[5] Fahrenheit to Kelvin" <<
	"\t[6] Kelvin to Fahrenheit" << endl;
	cout << "\n\t\t\t\t\t\t[0] Terminate" << endl;
	
	return_chose:
	cout << "\nPlease choose: ";
	cin >> choose;

	if(choose) ;
    else if(cin.fail()){
        cin.clear(); cin.ignore(1024, '\n');
        goto return_chose;
    }
	if(choose){
		if(choose == 1){
			return_cel:
			cout << "\nEnter Celsius in digit/s: ";
			cin >> temp;

			if(temp) ;
			else if(cin.fail()){
				cin.clear(); cin.ignore(1024, '\n');
				goto return_cel;
			}
			answer = temp * 9/5 + 32;
			cout << "\n\t" << temp << " Degree/s Celsuis is equal to " << answer << " Degree/s Fahrenheit\n";
			goto return_chose;
		}else if(choose == 2){
			return_fah:
			cout << "\nEnter Fahrenheit in digit/s: ";
			cin >> temp;

			if(temp) ;
			else if(cin.fail()){
				cin.clear(); cin.ignore(1024, '\n');
				goto return_fah;
			}
			answer = (temp - 32) * 5/9;
			cout << "\n\t" << temp << " Degree/s Fahrenheit is equal to " << answer << " Degree/s Celsuis\n";
			goto return_chose;
		}else if(choose == 3){
			return_kel:
			cout << "\nEnter Kelvin in digit/s: ";
			cin >> temp;

			if(temp) ;
			else if(cin.fail()){
				cin.clear(); cin.ignore(1024, '\n');
				goto return_kel;
			}
			answer = temp - 273.15;
			cout << "\n\t" << temp << " Degree/s Kelvin is equal to " << answer << " Degree/s Celsuis\n";
			goto return_chose;
		}else if(choose == 4){
			return_cel_1:
			cout << "\nEnter Celsius in digit/s: ";
			cin >> temp;

			if(temp) ;
			else if(cin.fail()){
				cin.clear(); cin.ignore(1024, '\n');
				goto return_cel_1;
			}
			answer = temp + 273.15;
			cout << "\n\t" << temp << " Degree/s Celsuis is equal to " << answer << " Degree/s Kelvin\n";
			goto return_chose;
		}else if(choose == 5){
			return_fah_1:
			cout << "\nEnter Fahrenheit in digit/s: ";
			cin >> temp;

			if(temp) ;
			else if(cin.fail()){
				cin.clear(); cin.ignore(1024, '\n');
				goto return_fah_1;
			}
			answer = (temp + 459.67) * 5/9;
			cout << "\n\t" << temp << " Degree/s Fahrenheit is equal to " << answer << " Degree/s Kelvin\n";
			goto return_chose;
		}else if(choose == 6){
			return_kel_1:
			cout << "\nEnter Kelvin in digit/s: ";
			cin >> temp;

			if(temp) ;
			else if(cin.fail()){
				cin.clear(); cin.ignore(1024, '\n');
				goto return_kel_1;
			}
			answer = temp *  9/5 - 459.67;
			cout << "\n\t" << temp << " Degree/s Kelvin is equal to " << answer << " Degree/s Fahrenheit\n";
			goto return_chose;
		}else if(choose > 6) goto return_chose;
	}else if(choose == 0) cout << " ";
}
void work_salary(){
	float hours, salary;
	
	cout<<"\n\t*** WEEKLY SALARY ***\n" << endl;

	return_ask:
	cout << "Enter the hours worked in a week: ";
	cin >> hours;

	if(hours) ;
    else if(cin.fail()){
        cin.clear(); cin.ignore(1024, '\n');
        goto return_ask;
    }
		
	if(hours <= 40) salary = 13.75 * hours;
	else if(hours > 40 && hours <=60) salary = 16.50 * hours;
	else if(hours > 60) salary = 18.00 * hours;

	cout << "\n\n------------------------\n";
	cout << "\tPAYSLIP\n\n";
	cout << endl << "Hours worked : " << hours <<" hours";
	cout << endl << "Week Salary  : " << salary << " Php";
}
void vote_reg(){
	int age;

	cout<<"\n\t*** VOTER'S AGE VALIDATION ***\n" << endl;
	
	return_age:
	cout << "Enter your age: ";
	cin >> age;

	if(age) ;
    else if(cin.fail()){
        cin.clear(); cin.ignore(1024, '\n');
        goto return_age;
    }
	if(age < 18) cout << "\n\t[MINOR ALERT!!!] You are NOT eligible to vote";
	else cout << "\n\tYou are QUALIFIED to vote";
}
void calcu(){
	char op;
    double num, num1;
	cout << "\n\t*** SIMPLE CALCULATOR ***\n" << endl;

    cout << "Enter an operator" << " ( + - * / ): ";
    cin >> op;

	return_xy:
    cout << "\nEnter two numbers separated by space: ";
    cin >> num >> num1;

	if(num && num1) ;
    else if(cin.fail()){
        cin.clear(); cin.ignore(1024, '\n');
        goto return_xy;
    }
	switch (op) {
		case '+':
			cout << "\n\tYou choose addtion: " << num << " + " << num1 << " = " << num + num1;
			break;
		case '-':
			cout << "\n\tYou choose subtraction: " << num << " - " << num1 << " = " << num - num1;
			break;
		case '*':
			cout << "\n\tYou choose multiplication: " << num << " * " << num1 << " = " << num * num1;
			break;
		case '/':
			cout << "\n\tYou choose divition: " << num << " / " << num1 << " = " << num / num1;
			break;
		default:
			cout << "\n\tInvalid Operator";
			break;
	}
}
void vowel(){
	string ch;
	int number = 0;

	cout << "\n\t*** INDENTIFY IF IT'S VOWEL OR CONSONANT ***\n" << endl;

	return_ch:
	cout << "Enter a Letter: ";
   	cin >> ch;

   	stringstream geek(ch); // convert inputted string into integer.
   	geek >> number; // variable(number) will hold the value since the object is int data type.

   	if(number) goto return_ch;
	if(ch.size() != 1) goto return_ch;

	if(ch == "a" || ch == "e" || ch == "i" || ch == "o" || ch == "u" \
	|| ch == "A" || ch == "E" || ch == "I" || ch == "O" || ch == "U")
		cout << "\n\t" << ch << " is a vowel";
	else cout << "\n\t" << ch << " is consonant";

}
