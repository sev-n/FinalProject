#include <iostream>
#include <string>
#include <stdlib.h>
#include "functions.h"
//#include "vote.cpp"
using namespace std;

int main(){
	int num; // <----------main menu
	int conc; // <-- after trying the program 
	char letter_con; // <-----  program choices
	string name, course;

	system("COLOR 6");
	
	cout<<"Enter your name: ";
	getline(cin, name);
	cout<<"Enter your course: ";
	getline(cin, course);
	system("CLS");

	menu(name, course);
	
	loop:
	cout<<"\n\t\t\t\t\tEnter your choice: ";
	cin>>num;
	system("PAUSE");
	system("CLS");
	
	switch(num){
		case 1:
			piliLoop: // <--- CREATE A LABEL
			cout<<"\t\t===========================================================================\n";
			cout<<"\t\t\t\t\t--YOU CHOSE LOOPING TOPICS--\n";
			cout<<"\n\t\t\t\t\tPROGRAMS IN LOOPING SECTION\n";
			cout<<"\n\t\t===========================================================================\n\n";
			
			cout<<"\t[A] ASTERISK PYRAMID\t\t[B] SUM AND FACTORIAL\t\t[C] VOTER'S REGISTRATION\n\n";
			
			cout<<"Enter letter (A/B/C): ";
			cin>>letter_con;
			if(letter_con == 'a' || letter_con == 'A'){
				
				pyra: // <---- GOTO PYRA
				pyramid(); // <---- FUNCTION OF PYRAMID
				cout<<"\n\n[1] TRY AGAIN?\t\t[2] TRY ANOTHER PROGRAM?\t\t[3] BACK TO MAIN MENU\t\t[4] QUIT";
				cout<<"\nPick a number: ";
				cin>>conc;
				
				switch(conc){
					case 1:
						goto pyra;
						break;
					case 2:
						system("PAUSE");
						system("CLS");
						goto piliLoop;
						break;
					case 3:
						system("PAUSE");
						system("CLS");
						menu(name, course);
						goto loop;
						break;
					case 4:
						cout<<"\nThankyou For using the program";
						exit(0);
						break;
					default:
						cout<<"\n1-4 only";
						break;
				}
			}else if(letter_con == 'b' || letter_con == 'B'){
				
				sumfact: // <--- GOTO SUMFACT
				factorial(); // <--- FUNCTION OF FACTORIAL
				cout<<"\n\n[1] TRY AGAIN?\t\t[2] TRY ANOTHER PROGRAM?\t\t[3] BACK TO MAIN MENU\t\t[4] QUIT";
				cout<<"\nPick a number: ";
				cin>>conc;
				
				switch(conc){
					case 1:
						goto sumfact;
						break;
					case 2:
						system("PAUSE");
						system("CLS");
						goto piliLoop;
						break;
					case 3:
						system("PAUSE");
						system("CLS");
						menu(name, course);
						goto loop;
						break;
					case 4:
						cout<<"\nThankyou For using the program";
						exit(0);
						break;
					default:
						cout<<"\n1-4 only";
						break;
				}
			}
			break;
		case 2:
			piliCon: // <---- GOTO CONDITIONAL
			cout<<"\t\t===========================================================================\n";
			cout<<"\t\t\t\t\t--YOU CHOSE CONDITIONAL--\n";
			cout<<"\n\t\t\t\t    PROGRAMS IN CONDITIONAL STATEMENT\n";
			cout<<"\n\t\t===========================================================================\n\n";
			
			cout<<"\t[A] EQUIVALENT GRADE\t\t[B] TEMPERATURE DETECTOR\t\t[C] WEEKLY SALARY\n\n\t[D] REQUIRED AGE TO VOTE\n\n" << endl;
			
			cout<<"Enter letter (A/B/C/D): ";
			cin>>letter_con;
			if(letter_con == 'A' || letter_con == 'a'){
				
				equi: // <--- goto equivalent grade
				grade_equi(); // <--- FUNCTION OF GRADE EQUIVALENT
				cout<<"\n\n[1] TRY AGAIN?\t\t[2] TRY ANOTHER PROGRAM?\t\t[3] BACK TO MAIN MENU\t\t[4] QUIT";
				cout<<"\nPick a number: ";
				cin>>conc;
				
				switch(conc){
					case 1:
						goto equi;
						break;
					case 2:
						system("PAUSE");
						system("CLS");
						goto piliCon;
						break;
					case 3:
						system("PAUSE");
						system("CLS");
						menu(name, course);
						goto loop;
						break;
					case 4:
						cout<<"\nThankyou For using the program";
						exit(0);
						break;
					default:
						cout<<"\n1-4 only";
						break;
				}
				
			}else if(letter_con == 'b' || letter_con == 'B'){
				
				tmprtr: // <---- goto temperature detector
				temper(); // <--- FUNCTION OF TEMPERATURE DETECTOR
				cout<<"\n\n[1] TRY AGAIN?\t\t[2] TRY ANOTHER PROGRAM?\t\t[3] BACK TO MAIN MENU\t\t[4] QUIT";
				cout<<"\nPick a number: ";
				cin>>conc;
				
				switch(conc){
					case 1:
						goto tmprtr;
						break;
					case 2:
						system("PAUSE");
						system("CLS");
						goto piliCon;
						break;
					case 3:
						system("PAUSE");
						system("CLS");
						menu(name, course);
						goto loop;
						break;
					case 4:
						cout<<"\nThankyou For using the program";
						exit(0);
						break;
					default:
						cout<<"\n1-4 only";
						break;
				}
				
	  		}else if(letter_con == 'c' || letter_con == 'C'){
	  			
	  			weeklySalary: // <--- GOTO WEEKLY SALARY
	  			work_salary(); // <----- FUNCTION OF WEEKLY SALARY
	  			cout<<"\n\n[1] TRY AGAIN?\t\t[2] TRY ANOTHER PROGRAM?\t\t[3] BACK TO MAIN MENU\t\t[4] QUIT";
				cout<<"\nPick a number: ";
				cin>>conc;
				
				switch(conc){
					case 1:
						goto weeklySalary;
						break;
					case 2:
						system("PAUSE");
						system("CLS");
						goto piliCon;
						break;
					case 3:
						system("PAUSE");
						system("CLS");
						menu(name, course);
						goto loop;
						break;
					case 4:
						cout<<"\nThankyou For using the program";
						exit(0);
						break;
					default:
						cout<<"\n1-4 only";
						break;
				}
			}else if(letter_con == 'd' || letter_con == 'D'){
	  			
	  			vote: // <--- CREATE LABEL
	  			vote_reg(); // <----- FUNCTION FOR VOTE
	  			cout<<"\n\n[1] TRY AGAIN?\t\t[2] TRY ANOTHER PROGRAM?\t\t[3] BACK TO MAIN MENU\t\t[4] QUIT";
				cout<<"\nPick a number: ";
				cin>>conc;
				
				switch(conc){
					case 1:
						goto vote;
						break;
					case 2:
						system("PAUSE");
						system("CLS");
						goto piliCon;
						break;
					case 3:
						system("PAUSE");
						system("CLS");
						menu(name, course);
						goto loop;
						break;
					case 4:
						cout<<"\nThankyou For using the program";
						exit(0);
						break;
					default:
						cout<<"\n1-4 only";
						break;
				}
			}else{
				cout<<"\nA/B/C only!!";
			}
			break; // <---- END OF CASE 2 CONDITIONAL
		case 3:
			cout<<"array";
			break;
		case 4:
			cout<<"operators";
			break;
		default:
			cout<<"\t\t\t\t\tEnter only 1-4";
			break;
	}
	
	
	return 0;
}
