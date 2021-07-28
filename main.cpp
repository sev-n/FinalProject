#include <iostream>
#include <string>
#include <sstream> // for converting string to integers
#include "src/functions.h"
using namespace std;

int main(){
    int num, aboutnum, conc;
    string letter_con, name, course;

    cout << "Enter your name: ";
    getline(cin, name);
    cout << "Enter your course: ";
    getline(cin, course);
    system("CLS");
    
    offmenu:
    menu(name, course);

    loop:
    cout << "\n\t\t\t\t\tEnter your choice: ";
    cin >> num;
    system("CLS");

    if(num){
        if(num == 1){
            piliLoop: // <--- CREATE A LABEL
            cout << "\t\t===========================================================================\n";
            cout << "\t\t\t\t\t--YOU CHOSE LOOPING TOPICS--\n";
            cout << "\n\t\t\t\t\tPROGRAMS IN LOOPING SECTION\n";
            cout << "\n\t\t===========================================================================\n\n";

            cout << "\t  [A] ASTERISK PYRAMID \t\t[B] SUM AND FACTORIAL " <<
            "\t\t[C] REVERSE A NUMBER \n\n\t\t[D] MULTIPLICATION TABLE OF N " <<
            "\t[E] COUNT DIGITS IN NUMBER \t[F] FIBONACCI SERIES " <<
            "\n\n\t\t\t[0] Back to main menu \t\t[1] Exit \n\n\n";

            cout << "Enter letter (A/B/C/D/E/F/G/H): ";
            cin >> letter_con;
            
            if(letter_con.size() != 1){
                system("CLS");
                goto piliLoop;
            }
            if(letter_con == "a" || letter_con == "A"){
                pyra: // <---- GOTO PYRA
                pyramid(); // <---- FUNCTION OF PYRAMID
                cout << "\n\n[1] Try again\t\t [2] Try another program\t\t [3] Back to main menu\t\t [4] Quit\n";
                ulitloopa:
                cout << "\nPick a number: ";
                cin >> conc;

                if(conc) ;      // each if
                else if(cin.fail()){
                    cin.clear(); cin.ignore(1024, '\n');
                    goto ulitloopa;
                }
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
                        system("CLS");
                        exit_message();
                        exit(0);
                        break;
                    default:
                        goto ulitloopa;
                        break;
                }
            }else if(letter_con == "b" || letter_con == "B"){
                sumfact: // <--- GOTO SUMFACT
                sumfac(); // <--- FUNCTION
                cout << "\n\n[1] Try again\t\t [2] Try another program\t\t [3] Back to main menu\t\t [4] Quit\n";
                ulitloopb:
                cout << ("\nPick a number: ");
                cin >> conc;

                if(conc) ;      // each if
                else if(cin.fail()){
                    cin.clear(); cin.ignore(1024, '\n');
                    goto ulitloopb;
                }

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
                        system("CLS");
                        exit_message();
                        exit(0);
                        break;
                    default:
                        goto ulitloopb;
                        break;
                }
            }else if(letter_con == "c" || letter_con == "C"){
                rev: // <--- CREATE LABEL
                reverse(); // <--- FUNCTION OF REVERSE
                cout << "\n\n[1] Try again\t\t [2] Try another program\t\t [3] Back to main menu\t\t [4] Quit\n";
                ulitloopc:
                cout << ("\nPick a number: ");
                cin >> conc;

                if(conc) ;      // each if
                else if(cin.fail()){
                    cin.clear(); cin.ignore(1024, '\n');
                    goto ulitloopc;
                }
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
                        system("CLS");
                        exit_message();
                        exit(0);
                        break;
                    default:
                        goto ulitloopc;
                        break;
                }
            }else if(letter_con == "d" || letter_con == "D"){
                multiTable: // <--- CREATE LABEL
                multi_table(); // <--- FUNCTION OF MultiTable
                cout << "\n\n[1] Try again\t\t [2] Try another program\t\t [3] Back to main menu\t\t [4] Quit\n";
                ulitloopd:
                cout << ("\nPick a number: ");
                cin >>conc;

                if(conc) ;      // each if
                else if(cin.fail()){
                    cin.clear(); cin.ignore(1024, '\n');
                    goto ulitloopd;
                }
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
                        system("CLS");
                        exit_message();
                        exit(0);
                        break;
                    default:
                        goto ulitloopd;
                        break;
                }
            }else if(letter_con == "e" || letter_con == "E"){
                count_digit: // <--- CREATE LABEL
                count(); // <--- FUNCTION OF COUNT 
                cout << "\n\n[1] Try again\t\t [2] Try another program\t\t [3] Back to main menu\t\t [4] Quit\n";
                ulitloope:
                cout<< ("\nPick a number: ");
                cin >> conc;

                if(conc) ;      // each if
                else if(cin.fail()){
                    cin.clear(); cin.ignore(1024, '\n');
                    goto ulitloope;
                }
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
                        system("CLS");
                        exit_message();
                        exit(0);
                        break;
                    default:
                        goto ulitloope;
                        break;
                }
            }else if(letter_con == "f" || letter_con == "F"){
                fibo: // <--- CREATE LABEL
                fibo_terms(); // <--- FUNCTION OF FIBONACCI
                cout << "\n\n[1] Try again\t\t [2] Try another program\t\t [3] Back to main menu\t\t [4] Quit\n";
                ulitloopf:
                cout<< ("\nPick a number: ");
                cin >> conc;

                if(conc) ;      // each if
                else if(cin.fail()){
                    cin.clear(); cin.ignore(1024, '\n');
                    goto ulitloopf;
                }
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
                        system("CLS");
                        exit_message();
                        exit(0);
                        break;
                    default:
                        goto ulitloopf;
                        break;
                }
            }else if(letter_con == "0"){
                system("CLS");
                goto offmenu;
            }else if(letter_con == "1"){
                system("CLS");
                exit_message();
                exit(0);
            }else{
                system("CLS");
                cin.ignore(512, '\n');
                goto piliLoop;
            }
        }
// |---------------------------------------------------------------------------------------------------------------------------------------|
        else if(num == 2){
            piliCon: // <---- GOTO CONDITIONAL
            cout << "\t\t===========================================================================\n";
            cout << "\t\t\t\t\t--YOU CHOSE CONDITIONAL--\n";
            cout << "\n\t\t\t\t    PROGRAMS IN CONDITIONAL STATEMENT\n";
            cout << "\n\t\t===========================================================================\n\n";

            cout << "\t  [A] EQUIVALENT GRADE \t\t[B] TEMPERATURE DETECTOR " <<
            "\t[C] WEEKLY SALARY \n\n\t\t[D] REQUIRED AGE TO VOTE " <<
            "\t[E] SIMPLE CALCULATOR \t\t[F] IDENTIFY VOWEL AND CONSONANT " <<
            "\n\n\t\t\t[0] Back to main menu \t\t[1] Exit \n\n\n";
            
            cout << "Enter letter (A/B/C/D/E/F/G/H): ";
            cin >> letter_con;
            if(letter_con.size() != 1){
                system("CLS");
                goto piliCon;
            }

            if(letter_con == "a" || letter_con == "A"){
                equi: // <--- goto equivalent grade
                grade_equi(); // <--- FUNCTION OF GRADE EQUIVALENT
                cout << "\n\n[1] Try again\t\t [2] Try another program\t\t [3] Back to main menu\t\t [4] Quit\n";
                ulitcondia:
                cout << ("\nPick a number: ");
                cin >> conc;

                if(conc) ;      // each if
                else if(cin.fail()){
                    cin.clear(); cin.ignore(1024, '\n');
                    goto ulitcondia;
                }
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
                        system("CLS");
                        exit_message();
                        exit(0);
                        break;
                    default:
                        goto ulitcondia;
                        break;
                }
            }else if(letter_con == "b" || letter_con == "B"){
                tmprtr: // <---- goto temperature detector
                temper(); // <--- FUNCTION OF TEMPERATURE DETECTOR                    
                cout << "\n\n[1] Try again\t\t [2] Try another program\t\t [3] Back to main menu\t\t [4] Quit\n";
                ulitcondib:
                cout << ("\nPick a number: ");
                cin >> conc;

                if(conc) ;      // each if
                else if(cin.fail()){
                    cin.clear(); cin.ignore(1024, '\n');
                    goto ulitcondib;
                }
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
                        system("CLS");
                        exit_message();
                        exit(0);
                        break;
                    default:
                        goto ulitcondib;
                        break;
                }
            }else if(letter_con == "c" || letter_con == "C"){
                weeklySalary: // <--- GOTO WEEKLY SALARY
                work_salary(); // <----- FUNCTION OF WEEKLY SALARY                    
                cout << "\n\n[1] Try again\t\t [2] Try another program\t\t [3] Back to main menu\t\t [4] Quit\n";
                ulitcondic:
                cout << ("\nPick a number: ");
                cin >> conc;

                if(conc) ;      // each if
                else if(cin.fail()){
                    cin.clear(); cin.ignore(1024, '\n');
                    goto ulitcondic;
                }
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
                        system("CLS");
                        exit_message();
                        exit(0);
                        break;
                    default:
                        goto ulitcondic;
                        break;
                }
            }else if(letter_con == "d" || letter_con == "D"){
                vote: // <--- CREATE LABEL
                vote_reg(); // <----- FUNCTION FOR VOTE                    
                cout << "\n\n[1] Try again\t\t [2] Try another program\t\t [3] Back to main menu\t\t [4] Quit\n";
                ulitcondid:
                cout << ("\nPick a number: ");
                cin >> conc;

                if(conc) ;      // each if
                else if(cin.fail()){
                    cin.clear(); cin.ignore(1024, '\n');
                    goto ulitcondid;
                }
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
                        system("CLS");
                        exit_message();
                        exit(0);
                        break;
                    default:
                        goto ulitcondid;
                        break;
                }
            }else if(letter_con == "e" || letter_con == "E"){
                calcu: // <--- CREATE LABEL
                calcu(); // <----- FUNCTION FOR CALCULATOR
                cout << "\n\n[1] Try again\t\t [2] Try another program\t\t [3] Back to main menu\t\t [4] Quit\n";
                ulitcondie:
                cout << ("\nPick a number: ");
                cin >> conc;

                if(conc) ;      // each if
                else if(cin.fail()){
                    cin.clear(); cin.ignore(1024, '\n');
                    goto ulitcondie;
                }
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
                        system("CLS");
                        exit_message();
                        exit(0);
                        break;
                    default:
                        goto ulitcondie;
                        break;
                }
            }else if(letter_con == "f" || letter_con == "F"){
                find_vowel: // <--- CREATE LABEL
                vowel(); // <----- FUNCTION FOR VOWEL 
                cout << "\n\n[1] Try again\t\t [2] Try another program\t\t [3] Back to main menu\t\t [4] Quit\n";
                ulitcondif:
                cout << ("\nPick a number: ");
                cin >> conc;

                if(conc) ;      // each if
                else if(cin.fail()){
                    cin.clear(); cin.ignore(1024, '\n');
                    goto ulitcondif;
                }
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
                        system("CLS");
                        exit_message();
                        exit(0);
                        break;
                    default:
                        goto ulitcondif;
                        break;
                }
            }else if(letter_con == "0"){
                system("CLS");
                goto offmenu;
            }else if(letter_con == "1"){
                system("CLS");
                exit_message();
                exit(0);
            }else{
                system("CLS");
                cin.ignore(512, '\n');
                goto piliCon;
            }
        }
//--------------------------------------------------------------------------------------------------------------------------
        else if(num == 3){
            piliArr: // <---- CREATE LABEL FOR ARRAY
            cout << "\t\t===========================================================================\n";
            cout << "\t\t\t\t\t--YOU CHOSE ARRAY--\n";
            cout << "\n\t\t\t\tPROGRAMS IN ARRAY USING ONE-DIMENSION\n";
            cout << "\n\t\t===========================================================================\n\n";
            
            cout << "\t\t\t[A] REMOVE ELEMENT IN ARRAY \t[B] SUM OF NUMBER " <<
            "\t[C] POSITIVE OR NEGATIVE \n\n\t\t[D] LOWEST AND HIGHEST NUMBER " <<
            "\t[" << "E" << "] " << "COUNT OCCURRENCE/s " << "\t[" << "F" << "] " << "FIND SPECIFIC NAME " <<
            "\n\n\t[0] Back to main menu \t\t[1] Exit \n\n\n";

            cout << "Enter letter (A/B/C/D/E/F/G/H): ";
            cin >> letter_con;
            if(letter_con.size() != 1){
                system("CLS");
                goto piliArr;
            }
            
            if(letter_con == "A" || letter_con == "a"){
                arrRem: // <--- CREATE LABEL FOR FIRST PROBELM IN ARRAY
                remove(); // <--- FUNCTION OF FACTORIAL OF AN ARRAY                    
                cout << "\n\n[1] Try again\t\t [2] Try another program\t\t [3] Back to main menu\t\t [4] Quit\n";
                ulitarra:
                cout << ("\nPick a number: ");
                cin >> conc;

                if(conc) ;      // each if
                else if(cin.fail()){
                    cin.clear(); cin.ignore(1024, '\n');
                    goto ulitarra;
                }
                switch(conc){
                    case 1:
                        goto arrRem;
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
                        system("CLS");
                        exit_message();
                        exit(0);
                        break;
                    default:
                        goto ulitarra;
                        break;
                    }
            }else if(letter_con == "B" || letter_con == "b"){
                arrSum: // <--- CREATE LABEL
                sumofN(); // <--- FUNCTION OF SUM OF AN ARRAY
                cout << "\n\n[1] Try again\t\t [2] Try another program\t\t [3] Back to main menu\t\t [4] Quit\n";
                ulitarrb:
                cout << ("\nPick a number: ");
                cin >> conc;

                if(conc) ;      // each if
                else if(cin.fail()){
                    cin.clear(); cin.ignore(1024, '\n');
                    goto ulitarrb;
                }
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
                        system("CLS");
                        exit_message();
                        exit(0);
                        break;
                    default:
                        goto ulitarrb;
                        break;
                    }
            }else if(letter_con == "c" || letter_con == "C"){
                arrposNneg: // <--- CREATE LABEL
                posNneg(); // <--- FUNCTION OF POSTIVE OF NEGATIVE NUMBERS OF AN ARRAY
                cout << "\n\n[1] Try again\t\t [2] Try another program\t\t [3] Back to main menu\t\t [4] Quit\n";
                ulitarrc:
                cout << ("\nPick a number: ");
                cin >> conc;

                if(conc) ;      // each if
                else if(cin.fail()){
                    cin.clear(); cin.ignore(1024, '\n');
                    goto ulitarrc;
                }
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
                        system("CLS");
                        exit_message();
                        exit(0);
                        break;
                    default:
                        goto ulitarrc;
                        break;
                    }
            }else if(letter_con == "D" || letter_con == "d"){
                arr_low_high: // <--- CREATE LABEL
                low_high(); // <--- FUNCTION OF LOW/HIGH
                cout << "\n\n[1] Try again\t\t [2] Try another program\t\t [3] Back to main menu\t\t [4] Quit\n";
                ulitarrd:
                cout << ("\nPick a number: ");
                cin >> conc;

                if(conc) ;      // each if
                else if(cin.fail()){
                    cin.clear(); cin.ignore(1024, '\n');
                    goto ulitarrd;
                }
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
                        system("CLS");
                        exit_message();
                        exit(0);
                        break;
                    default:
                        goto ulitarrd;
                        break;
                    }
            }else if(letter_con == "E" || letter_con == "e"){
                arr_occur: // <--- CREATE LABEL
                occur_n(); // <--- FUNCTION OF OCCUR
                cout << "\n\n[1] Try again\t\t [2] Try another program\t\t [3] Back to main menu\t\t [4] Quit\n";
                ulitarre:
                cout << ("\nPick a number: ");
                cin >> conc;

                if(conc) ;      // each if
                else if(cin.fail()){
                    cin.clear(); cin.ignore(1024, '\n');
                    goto ulitarre;
                }
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
                        system("CLS");
                        exit_message();
                        exit(0);
                        break;
                    default:
                        cout<<"\n(WARNING: Invalid Input)\n";
                        goto ulitarre;
                        break;
                    }
            }else if(letter_con == "F" || letter_con == "f"){
                arr_find_name: // <--- CREATE LABEL
                find_name(); // <--- FUNCTION OF FIND
                cout << "\n\n[1] Try again\t\t [2] Try another program\t\t [3] Back to main menu\t\t [4] Quit\n";
                ulitarrf:
                cout << ("\nPick a number: ");
                cin >> conc;

                if(conc) ;      // each if
                else if(cin.fail()){
                    cin.clear(); cin.ignore(1024, '\n');
                    goto ulitarrf;
                }
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
                        system("CLS");
                        exit_message();
                        exit(0);
                        break;
                    default:
                        goto ulitarrf;
                        break;
                    }
            }else if(letter_con == "0"){
                system("CLS");
                goto offmenu;
            }else if(letter_con == "1"){
                system("CLS");
                exit_message();
                exit(0);
            }else{
                system("CLS");
                cin.ignore(512, '\n');
                goto piliArr;
            }
        }
// |------------------------------------------------------------------------------------------------------------------------------------|
        else if(num == 4){
            piliOpe: // <---- CREATE LABEL FOR OPERATOR
            cout << "\t\t===========================================================================\n";
            cout << "\t\t\t\t\t--YOU CHOSE OPERATOR--\n";
            cout << "\n\t\t\t\t\tPROGRAMS WITH OPERATORS \n";
            cout << "\n\t\t===========================================================================\n\n";
            
            cout << "\t\t\t[A] ARITHMETIC OPERATORS   [B] RELATIONAL OPERATORS " <<
            "\t[C] LOGICAL OPERATORS \n\n\t\t[D] CURRENCY CONVERTER " <<
            "\t  [E] METRIC CONVERSION \t  [F] CALENDAR DATE CONVERTER " <<
            "\n\n\t[0] Back to main menu \t  [1] Exit \n\n\n";

            cout << "Enter letter (A/B/C/D/E/F/G/H): ";
            cin >> letter_con;
            if(letter_con.size() != 1){
                system("CLS");
                goto piliOpe;
            }
            
            if(letter_con == "A" || letter_con == "a"){
                arith: // <--- CREATE LABEL FOR FIRST PROBELM IN OPERATOR
                arithmetic(); // <--- FUNCTION OF FIRST PROBLEM
                cout << "\n\n[1] Try again\t\t [2] Try another program\t\t [3] Back to main menu\t\t [4] Quit\n";
                ulitopea:
                cout << ("\nPick a number: ");
                cin >> conc;

                if(conc) ;      // each if
                else if(cin.fail()){
                    cin.clear(); cin.ignore(1024, '\n');
                    goto ulitopea;
                }
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
                        system("CLS");
                        exit_message();
                        exit(0);
                        break;
                    default:
                        goto ulitopea;
                        break;
                    }
            }else if(letter_con == "B" || letter_con == "b"){
                relational: // <--- CREATE LABEL
                relational(); // <--- FUNCTION OF SECOND PROBLEM
                cout << "\n\n[1] Try again\t\t [2] Try another program\t\t [3] Back to main menu\t\t [4] Quit\n";
                ulitopeb:
                cout << ("\nPick a number: ");
                cin >> conc;

                if(conc) ;      // each if
                else if(cin.fail()){
                    cin.clear(); cin.ignore(1024, '\n');
                    goto ulitopeb;
                }
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
                        system("CLS");
                        exit_message();
                        exit(0);
                        break;
                    default:
                        goto ulitopeb;
                        break;
                    }
            }else if(letter_con == "C" || letter_con == "c"){
                logical: // <--- CREATE LABEL
                logical(); // <--- FUNCTION OF THIRD PROBLEM
                cout << "\n\n[1] Try again\t\t [2] Try another program\t\t [3] Back to main menu\t\t [4] Quit\n";
                ulitopec:
                cout << ("\nPick a number: ");
                cin >> conc;

                if(conc) ;      // each if
                else if(cin.fail()){
                    cin.clear(); cin.ignore(1024, '\n');
                    goto ulitopec;
                }
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
                        system("CLS");
                        exit_message();
                        exit(0);
                        break;
                    default:
                        goto ulitopec;
                        break;
                    }
            }else if(letter_con == "D" || letter_con == "d"){
                convert: // <--- CREATE LABEL
                convert(); // <--- FUNCTION OF FOURTH PROBLEM
                cout << "\n\n[1] Try again\t\t [2] Try another program\t\t [3] Back to main menu\t\t [4] Quit\n";
                ulitoped:
                cout << ("\nPick a number: ");
                cin >> conc;

                if(conc) ;      // each if
                else if(cin.fail()){
                    cin.clear(); cin.ignore(1024, '\n');
                    goto ulitoped;
                }
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
                        system("CLS");
                        exit_message();
                        exit(0);
                        break;
                    default:
                        goto ulitoped;
                        break;
                    }
            }else if(letter_con == "E" || letter_con == "e"){
                conversion_unit: // <--- CREATE LABEL
                conv_unit(); // <--- FUNCTION OF FIFTH PROBLEM
                cout << "\n\n[1] Try again\t\t [2] Try another program\t\t [3] Back to main menu\t\t [4] Quit\n";
                ulitopee:
                cout << ("\nPick a number: ");
                cin >> conc;

                if(conc) ;      // each if
                else if(cin.fail()){
                    cin.clear(); cin.ignore(1024, '\n');
                    goto ulitopee;
                }
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
                        system("CLS");
                        exit_message();
                        exit(0);
                        break;
                    default:
                        goto ulitopee;
                        break;
                    }
            }else if(letter_con == "F" || letter_con == "f"){
                conversion_calendar: // <--- CREATE LABEL
                conv_calendar_date(); // <--- FUNCTION OF SIXTH PROBLEM
                cout << "\n\n[1] Try again\t\t [2] Try another program\t\t [3] Back to main menu\t\t [4] Quit\n";
                ulitopef:
                cout << ("\nPick a number: ");
                cin >> conc;

                if(conc) ;      // each if
                else if(cin.fail()){
                    cin.clear(); cin.ignore(1024, '\n');
                    goto ulitopef;
                }
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
                        system("CLS");
                        exit_message();
                        exit(0);
                        break;
                    default:
                        goto ulitopef;
                        break;
                    }
            }else if(letter_con == "0"){
                system("CLS");
                goto offmenu;
            }else if(letter_con == "1"){
                system("CLS");
                exit_message();
                exit(0);
            }else{
                system("CLS");
                cin.ignore(512, '\n');
                goto piliOpe;
            }
        }
// |------------------------------------------------------------------------------------------------------------------------------------|
        else if(num == 5){
            about_us();
            cout << "\n\n[1] Back |  [2] Exit \n" << endl;
            decabout:
            cout<< "Enter a number: ";
            cin >> aboutnum;

            if(aboutnum) ;      // each if
            else if(cin.fail()){
                cin.clear(); cin.ignore(1024, '\n');
                goto decabout;
            }
            switch(aboutnum){
                case 1:
                    system("CLS");
                    goto offmenu;
                    break;
                case 2:
                    system("CLS");
                    exit_message();
                    exit(0);
                    break;
                default:
                    goto decabout;
                    break;
            }
        }
        else if(num > 5){                       
            system("CLS");
            goto offmenu;
        }
    }else if(cin.fail()){
        cin.clear(); cin.ignore(1024, '\n');
        goto offmenu;
    }
    return 0;
}
