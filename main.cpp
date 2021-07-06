#include <iostream>
#include <string>
#include <stdlib.h>
#include "src/functions.h"
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
			
			cout<<"\t[A] ASTERISK PYRAMID\t\t\t[B] SUM AND FACTORIAL\t\t[C] REVERSE A NUMBER\n\n\t[D] MULTIPLICATION TABLE OF N \
		[E]COUNT DIGITS IN NUMBERS\t[F] FIBONACCI SERIES\n\n";
			
			cout<<"Enter letter (A/B/C/D/E/F): ";
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
				sumfac(); // <--- FUNCTION
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
			}else if(letter_con == 'c' || letter_con == 'C'){
				
				rev: // <--- CREATE LABEL
				reverse(); // <--- FUNCTION OF REVERSE
				cout<<"\n\n[1] TRY AGAIN?\t\t[2] TRY ANOTHER PROGRAM?\t\t[3] BACK TO MAIN MENU\t\t[4] QUIT";
				cout<<"\nPick a number: ";
				cin>>conc;
				
				switch(conc){
					case 1:
						goto rev;
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
			}else if(letter_con == 'd' || letter_con == 'D'){
				
				multiTable: // <--- CREATE LABEL
				multi_table(); // <--- FUNCTION OF MultiTable
				cout<<"\n\n[1] TRY AGAIN?\t\t[2] TRY ANOTHER PROGRAM?\t\t[3] BACK TO MAIN MENU\t\t[4] QUIT";
				cout<<"\nPick a number: ";
				cin>>conc;
				
				switch(conc){
					case 1:
						goto multiTable;
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
			}else if(letter_con == 'e' || letter_con == 'E'){
				
				count_digit: // <--- CREATE LABEL
				count(); // <--- FUNCTION OF COUNT
				cout<<"\n\n[1] TRY AGAIN?\t\t[2] TRY ANOTHER PROGRAM?\t\t[3] BACK TO MAIN MENU\t\t[4] QUIT";
				cout<<"\nPick a number: ";
				cin>>conc;
				
				switch(conc){
					case 1:
						goto count_digit;
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
			}else if(letter_con == 'f' || letter_con == 'F'){
				
				fibo: // <--- CREATE LABEL
				fibo_terms(); // <--- FUNCTION OF FIBONACCI
				cout<<"\n\n[1] TRY AGAIN?\t\t[2] TRY ANOTHER PROGRAM?\t\t[3] BACK TO MAIN MENU\t\t[4] QUIT";
				cout<<"\nPick a number: ";
				cin>>conc;
				
				switch(conc){
					case 1:
						goto fibo;
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
		case 2:
			piliCon: // <---- GOTO CONDITIONAL
			cout<<"\t\t===========================================================================\n";
			cout<<"\t\t\t\t\t--YOU CHOSE CONDITIONAL--\n";
			cout<<"\n\t\t\t\t    PROGRAMS IN CONDITIONAL STATEMENT\n";
			cout<<"\n\t\t===========================================================================\n\n";
			
			cout<<"\t[A] EQUIVALENT GRADE\t\t[B] TEMPERATURE DETECTOR\t[C] WEEKLY SALARY\n\n\t[D] REQUIRED AGE TO VOTE \
	[E] SIMPLE CALCULATOR\t\t[F] IDENTIFY VOWEL\n\n" << endl;
			
			cout<<"Enter letter (A/B/C/D/E/F): ";
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
			}else if(letter_con == 'e' || letter_con == 'E'){
	  			
	  			calcu: // <--- CREATE LABEL
	  			calcu(); // <----- FUNCTION FOR CALCULATOR
	  			cout<<"\n\n[1] TRY AGAIN?\t\t[2] TRY ANOTHER PROGRAM?\t\t[3] BACK TO MAIN MENU\t\t[4] QUIT";
				cout<<"\nPick a number: ";
				cin>>conc;
				
				switch(conc){
					case 1:
						goto calcu;
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
			}else if(letter_con == 'f' || letter_con == 'F'){
	  			
	  			find_vowel: // <--- CREATE LABEL
	  			vowel(); // <----- FUNCTION FOR VOWEL
	  			cout<<"\n\n[1] TRY AGAIN?\t\t[2] TRY ANOTHER PROGRAM?\t\t[3] BACK TO MAIN MENU\t\t[4] QUIT";
				cout<<"\nPick a number: ";
				cin>>conc;
				
				switch(conc){
					case 1:
						goto find_vowel;
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
			}
		case 3:
			piliArr: // <---- CREATE LABEL FOR ARRAY
			cout<<"\t\t===========================================================================\n";
			cout<<"\t\t\t\t\t--YOU CHOSE ARRAY--\n";
			cout<<"\n\t\t\t\t    PROGRAMS IN ARRAY USING ONE-DIMENSION\n";
			cout<<"\n\t\t===========================================================================\n\n";
			cout<<"\t[A] FACTORIAL OF NUMBER\t\t[B] SUM OF N\t\t\t[C] IDENTIFY IF POSTIVE OR NEGATIVE\n\n\t[D] LOWEST AND HIGHEST NUMBER \
	[E] COUNT HOW MANY APPEARED\t[F] FIND SPECIFIC NAME\n\n"<< endl;
			
			cout<<"Enter letter (A/B/C/D/E/F): ";
			cin>>letter_con;
			
			if(letter_con == 'A' || letter_con == 'a'){
				
				arrFac: // <--- CREATE LABEL FOR FIRST PROBELM IN ARRAY
				FacArr(); // <--- FUNCTION OF FACTORIAL OF AN ARRAY
				cout<<"\n\n[1] TRY AGAIN?\t\t[2] TRY ANOTHER PROGRAM?\t\t[3] BACK TO MAIN MENU\t\t[4] QUIT";
				cout<<"\nPick a number: ";
				cin>>conc;
				
				switch(conc){
					case 1:
						goto arrFac;
						break;
					case 2:
						system("PAUSE");
						system("CLS");
						goto piliArr;
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
			}else if(letter_con == 'B' || letter_con == 'b'){
				
				arrSum: // <--- CREATE LABEL 
				sumofN(); // <--- FUNCTION OF SUM OF AN ARRAY
				cout<<"\n\n[1] TRY AGAIN?\t\t[2] TRY ANOTHER PROGRAM?\t\t[3] BACK TO MAIN MENU\t\t[4] QUIT";
				cout<<"\nPick a number: ";
				cin>>conc;
				
				switch(conc){
					case 1:
						goto arrSum;
						break;
					case 2:
						system("PAUSE");
						system("CLS");
						goto piliArr;
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
				}else if(letter_con == 'C' || letter_con == 'c'){
				
				arrposNneg: // <--- CREATE LABEL 
				posNneg(); // <--- FUNCTION OF POSTIVE OF NEGATIVE NUMBERS OF AN ARRAY
				cout<<"\n\n[1] TRY AGAIN?\t\t[2] TRY ANOTHER PROGRAM?\t\t[3] BACK TO MAIN MENU\t\t[4] QUIT";
				cout<<"\nPick a number: ";
				cin>>conc;
				
				switch(conc){
					case 1:
						goto arrposNneg;
						break;
					case 2:
						system("PAUSE");
						system("CLS");
						goto piliArr;
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
				}else if(letter_con == 'D' || letter_con == 'd'){
				
				arr_low_high: // <--- CREATE LABEL 
				low_high(); // <--- FUNCTION OF LOW/HIGH
				cout<<"\n\n[1] TRY AGAIN?\t\t[2] TRY ANOTHER PROGRAM?\t\t[3] BACK TO MAIN MENU\t\t[4] QUIT";
				cout<<"\nPick a number: ";
				cin>>conc;
				
				switch(conc){
					case 1:
						goto arr_low_high;
						break;
					case 2:
						system("PAUSE");
						system("CLS");
						goto piliArr;
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
				}else if(letter_con == 'E' || letter_con == 'e'){
				
				arr_occur: // <--- CREATE LABEL 
				occur_n(); // <--- FUNCTION OF OCCUR
				cout<<"\n\n[1] TRY AGAIN?\t\t[2] TRY ANOTHER PROGRAM?\t\t[3] BACK TO MAIN MENU\t\t[4] QUIT";
				cout<<"\nPick a number: ";
				cin>>conc;
				
				switch(conc){
					case 1:
						goto arr_occur;
						break;
					case 2:
						system("PAUSE");
						system("CLS");
						goto piliArr;
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
				}else if(letter_con == 'F' || letter_con == 'f'){
				
				arr_find_name: // <--- CREATE LABEL 
				find_name(); // <--- FUNCTION OF FIND
				cout<<"\n\n[1] TRY AGAIN?\t\t[2] TRY ANOTHER PROGRAM?\t\t[3] BACK TO MAIN MENU\t\t[4] QUIT";
				cout<<"\nPick a number: ";
				cin>>conc;
				
				switch(conc){
					case 1:
						goto arr_find_name;
						break;
					case 2:
						system("PAUSE");
						system("CLS");
						goto piliArr;
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
		case 4:
			piliOpe: // <---- CREATE LABEL FOR OPERATOR
			cout<<"\t\t===========================================================================\n";
			cout<<"\t\t\t\t\t--YOU CHOSE OPERATOR--\n";
			cout<<"\n\t\t\t\t    PROGRAMS WITH OPERATORS \n";
			cout<<"\n\t\t===========================================================================\n\n";
			cout<<"\t[A] ARITHMETIC OPERATORS\t\t[B] RELATIONAL OPERATORS\t\t[C] LOGICAL OPERATORS\n\n\t[D] CURRENCY CONVERTER \
			[E] CONVERT UNITS OF MEASSUREMENT\t[F] CALENDAR DATE CONVERTER\n\n"<< endl;
			
			cout<<"Enter letter (A/B/C/D/E/F): ";
			cin>>letter_con;
			
			if(letter_con == 'A' || letter_con == 'a'){
				
				arith: // <--- CREATE LABEL FOR FIRST PROBELM IN OPERATOR
				arithmetic(); // <--- FUNCTION OF FIRST PROBLEM
				cout<<"\n\n[1] TRY AGAIN?\t\t[2] TRY ANOTHER PROGRAM?\t\t[3] BACK TO MAIN MENU\t\t[4] QUIT";
				cout<<"\nPick a number: ";
				cin>>conc;
				
				switch(conc){
					case 1:
						goto arith;
						break;
					case 2:
						system("PAUSE");
						system("CLS");
						goto piliOpe;
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
			}else if(letter_con == 'B' || letter_con == 'b'){
				
				relational: // <--- CREATE LABEL 
				relational(); // <--- FUNCTION OF SECOND PROBLEM
				cout<<"\n\n[1] TRY AGAIN?\t\t[2] TRY ANOTHER PROGRAM?\t\t[3] BACK TO MAIN MENU\t\t[4] QUIT";
				cout<<"\nPick a number: ";
				cin>>conc;
				
				switch(conc){
					case 1:
						goto relational;
						break;
					case 2:
						system("PAUSE");
						system("CLS");
						goto piliOpe;
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
				}else if(letter_con == 'C' || letter_con == 'c'){
				
				logical: // <--- CREATE LABEL 
				logical(); // <--- FUNCTION OF THIRD PROBLEM
				cout<<"\n\n[1] TRY AGAIN?\t\t[2] TRY ANOTHER PROGRAM?\t\t[3] BACK TO MAIN MENU\t\t[4] QUIT";
				cout<<"\nPick a number: ";
				cin>>conc;
				
				switch(conc){
					case 1:
						goto logical;
						break;
					case 2:
						system("PAUSE");
						system("CLS");
						goto piliOpe;
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
				}else if(letter_con == 'D' || letter_con == 'd'){
				
				convert: // <--- CREATE LABEL 
				convert(); // <--- FUNCTION OF FOURTH PROBLEM
				cout<<"\n\n[1] TRY AGAIN?\t\t[2] TRY ANOTHER PROGRAM?\t\t[3] BACK TO MAIN MENU\t\t[4] QUIT";
				cout<<"\nPick a number: ";
				cin>>conc;
				
				switch(conc){
					case 1:
						goto convert;
						break;
					case 2:
						system("PAUSE");
						system("CLS");
						goto piliOpe;
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
				}else if(letter_con == 'E' || letter_con == 'e'){
				
				conversion_unit: // <--- CREATE LABEL 
				conv_unit(); // <--- FUNCTION OF FIFTH PROBLEM
				cout<<"\n\n[1] TRY AGAIN?\t\t[2] TRY ANOTHER PROGRAM?\t\t[3] BACK TO MAIN MENU\t\t[4] QUIT";
				cout<<"\nPick a number: ";
				cin>>conc;
				
				switch(conc){
					case 1:
						goto conversion_unit;
						break;
					case 2:
						system("PAUSE");
						system("CLS");
						goto piliOpe;
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
				}else if(letter_con == 'F' || letter_con == 'f'){
				
				conversion_calendar: // <--- CREATE LABEL 
				conv_calendar_date(); // <--- FUNCTION OF SIXTH PROBLEM
				cout<<"\n\n[1] TRY AGAIN?\t\t[2] TRY ANOTHER PROGRAM?\t\t[3] BACK TO MAIN MENU\t\t[4] QUIT";
				cout<<"\nPick a number: ";
				cin>>conc;
				
				switch(conc){
					case 1:
						goto conversion_calendar;
						break;
					case 2:
						system("PAUSE");
						system("CLS");
						goto piliOpe;
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

			}
	return 0;
}
