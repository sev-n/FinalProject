#include <iostream>
#include <string>
#include <sstream> // for converting string to integer
#include "src/functions.h"
using namespace std;

int main(){
    int num, aboutnum, conc;
    string letter_con, name, course;

    cout << dye::grey("Enter your name: ");
    getline(cin, name);
    cout << dye::grey("Enter your course: ");
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
            cout << dye::light_blue("\t\t===========================================================================\n");
            cout << dye::light_blue("\t\t\t\t\t--") << dye::yellow("YOU CHOSE LOOPING TOPICS") << dye::light_blue("--\n");
            cout << dye::yellow("\n\t\t\t\t\tPROGRAMS IN LOOPING SECTION\n");
            cout << dye::light_blue("\n\t\t===========================================================================\n\n");

            cout << dye::light_yellow("\t  [") << dye::yellow("A") << dye::light_yellow("] ") << dye::aqua("ASTERISK PYRAMID ") << dye::light_yellow("\t\t[") << dye::yellow("B") << dye::light_yellow("] ") << dye::aqua("SUM AND FACTORIAL ") <<
            dye::light_yellow("\t\t[") << dye::yellow("C") << dye::light_yellow("] ") << dye::aqua("REVERSE A NUMBER \n\n") << dye::light_yellow("\t\t[") << dye::yellow("D") << dye::light_yellow("] ") << dye::aqua("MULTIPLICATION TABLE OF N ") <<
            dye::light_yellow("\t[") << dye::yellow("E") << dye::light_yellow("] ") << dye::aqua("COUNT DIGITS IN NUMBER ") << dye::light_yellow("\t[") << dye::yellow("F") << dye::light_yellow("] ") << dye::aqua("FIBONACCI SERIES ") <<
            dye::light_yellow("\n\n\t\t\t[") << dye::yellow("0") << dye::light_yellow("] ") << dye::red("Back to main menu ") << dye::light_yellow("\t\t[") << dye::yellow("1") << dye::light_yellow("] ") << dye::red("Exit \n\n\n");

            cout << dye::bright_white("Enter letter") << dye::bright_white(" (") << dye::yellow('A') << '/' << dye::yellow('B') << '/' << dye::yellow('C') << '/' <<
            dye::yellow('D') << '/' << dye::yellow('E') << '/' << dye::yellow('F') << '/' << dye::yellow('0') << '/' << dye::yellow('1') << dye::bright_white("): ");
            cin >> letter_con;
            
            if(letter_con.size() != 1){
                system("CLS");
                goto piliLoop;
            }
            if(letter_con == "a" || letter_con == "A"){

                pyra: // <---- GOTO PYRA
                pyramid(); // <---- FUNCTION OF PYRAMID
                cout << dye::light_yellow("\n\n[") << dye::yellow('1') << dye::light_yellow(']') << dye::red("Try again\t\t") << dye::light_yellow('[') << dye::yellow('2') << dye::light_yellow(']') << dye::red("Try another program\t\t") << dye::light_yellow('[') << dye::yellow('3') << dye::light_yellow(']') <<
                dye::red("Back to main menu\t\t") << dye::light_yellow('[') << dye::yellow('4') << dye::light_yellow(']') << dye::red("Quit\n");
                ulitloopa:
                cout << dye::bright_white("\nPick a number: ");
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
                cout << dye::light_yellow("\n\n[") << dye::yellow('1') << dye::light_yellow(']') << dye::red("Try again\t\t") << dye::light_yellow('[') << dye::yellow('2') << dye::light_yellow(']') << dye::red("Try another program\t\t") << dye::light_yellow('[') << dye::yellow('3') << dye::light_yellow(']') <<
                dye::red("Back to main menu\t\t") << dye::light_yellow('[') << dye::yellow('4') << dye::light_yellow(']') << dye::red("Quit\n");
                ulitloopb:
                cout << dye::bright_white("\nPick a number: ");
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
                cout << dye::light_yellow("\n\n[") << dye::yellow('1') << dye::light_yellow(']') << dye::red("Try again\t\t") << dye::light_yellow('[') << dye::yellow('2') << dye::light_yellow(']') << dye::red("Try another program\t\t") << dye::light_yellow('[') << dye::yellow('3') << dye::light_yellow(']') <<
                dye::red("Back to main menu\t\t") << dye::light_yellow('[') << dye::yellow('4') << dye::light_yellow(']') << dye::red("Quit\n");
                ulitloopc:
                cout << dye::bright_white("\nPick a number: ");
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
                cout << dye::light_yellow("\n\n[") << dye::yellow('1') << dye::light_yellow(']') << dye::red("Try again\t\t") << dye::light_yellow('[') << dye::yellow('2') << dye::light_yellow(']') << dye::red("Try another program\t\t") << dye::light_yellow('[') << dye::yellow('3') << dye::light_yellow(']') <<
                dye::red("Back to main menu\t\t") << dye::light_yellow('[') << dye::yellow('4') << dye::light_yellow(']') << dye::red("Quit\n");
                ulitloopd:
                cout << dye::bright_white("\nPick a number: ");
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
                cout << dye::light_yellow("\n\n[") << dye::yellow('1') << dye::light_yellow(']') << dye::red("Try again\t\t") << dye::light_yellow('[') << dye::yellow('2') << dye::light_yellow(']') << dye::red("Try another program\t\t") << dye::light_yellow('[') << dye::yellow('3') << dye::light_yellow(']') <<
                dye::red("Back to main menu\t\t") << dye::light_yellow('[') << dye::yellow('4') << dye::light_yellow(']') << dye::red("Quit\n");
                ulitloope:
                cout<< dye::bright_white("\nPick a number: ");
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
                cout << dye::light_yellow("\n\n[") << dye::yellow('1') << dye::light_yellow(']') << dye::red("Try again\t\t") << dye::light_yellow('[') << dye::yellow('2') << dye::light_yellow(']') << dye::red("Try another program\t\t") << dye::light_yellow('[') << dye::yellow('3') << dye::light_yellow(']') <<
                dye::red("Back to main menu\t\t") << dye::light_yellow('[') << dye::yellow('4') << dye::light_yellow(']') << dye::red("Quit\n");
                ulitloopf:
                cout<< dye::bright_white("\nPick a number: ");
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
            cout << dye::light_blue("\t\t===========================================================================\n");
            cout << dye::light_blue("\t\t\t\t\t--") << dye::yellow("YOU CHOSE CONDITIONAL") << dye::light_blue("--\n");
            cout << dye::yellow("\n\t\t\t\t    PROGRAMS IN CONDITIONAL STATEMENT\n");
            cout << dye::light_blue("\n\t\t===========================================================================\n\n");

            cout << dye::light_yellow("\t  [") << dye::yellow("A") << dye::light_yellow("] ") << dye::aqua("EQUIVALENT GRADE ") << dye::light_yellow("\t\t[") << dye::yellow("B") << dye::light_yellow("] ") << dye::aqua("TEMPERATURE CONVERTER ") <<
            dye::light_yellow("\t[") << dye::yellow("C") << dye::light_yellow("] ") << dye::aqua("WEEKLY SALARY \n\n") << dye::light_yellow("\t\t[") << dye::yellow("D") << dye::light_yellow("] ") << dye::aqua("REQUIRED AGE TO VOTE ") <<
            dye::light_yellow("\t[") << dye::yellow("E") << dye::light_yellow("] ") << dye::aqua("SIMPLE CALCULATOR ") << dye::light_yellow("\t\t[") << dye::yellow("F") << dye::light_yellow("] ") << dye::aqua("IDENTIFY VOWEL AND CONSONANT ") <<
            dye::light_yellow("\n\n\t\t\t[") << dye::yellow("0") << dye::light_yellow("] ") << dye::red("Back to main menu ") << dye::light_yellow("\t\t[") << dye::yellow("1") << dye::light_yellow("] ") << dye::red("Exit \n\n\n");
            
            cout << dye::bright_white("Enter letter") << dye::bright_white(" (") << dye::yellow('A') << '/' << dye::yellow('B') << '/' << dye::yellow('C') << '/' << dye::yellow('D') << '/' << dye::yellow('E') << '/' << dye::yellow('F') << '/' << dye::yellow('0') << '/' << dye::yellow('1') << dye::bright_white("): ");
            cin >> letter_con;
            if(letter_con.size() != 1){
                system("CLS");
                goto piliCon;
            }

            if(letter_con == "a" || letter_con == "A"){

                equi: // <--- goto equivalent grade
                grade_equi(); // <--- FUNCTION OF GRADE EQUIVALENT
                cout<< dye::light_yellow("\n\n[") << dye::yellow('1') << dye::light_yellow(']') << dye::red("Try again\t\t") << dye::light_yellow('[') << dye::yellow('2') << dye::light_yellow(']') << dye::red("Try another program\t\t") << dye::light_yellow('[') << dye::yellow('3') << dye::light_yellow(']') << 
                dye::red("Back to main menu\t\t") << dye::light_yellow('[') << dye::yellow('4') << dye::light_yellow(']') << dye::red("Quit\n");
                ulitcondia:
                cout << dye::bright_white("\nPick a number: ");
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
                cout << dye::light_yellow("\n\n[") << dye::yellow('1') << dye::light_yellow(']') << dye::red("Try again\t\t") << dye::light_yellow('[') << dye::yellow('2') << dye::light_yellow(']') << dye::red("Try another program\t\t") << dye::light_yellow('[') << dye::yellow('3') << dye::light_yellow(']') <<
                dye::red("Back to main menu\t\t") << dye::light_yellow('[') << dye::yellow('4') << dye::light_yellow(']') << dye::red("Quit\n");
                ulitcondib:
                cout << dye::bright_white("\nPick a number: ");
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
                cout << dye::light_yellow("\n\n[") << dye::yellow('1') << dye::light_yellow(']') << dye::red("Try again\t\t") << dye::light_yellow('[') << dye::yellow('2') << dye::light_yellow(']') << dye::red("Try another program\t\t") << dye::light_yellow('[') << dye::yellow('3') << dye::light_yellow(']') <<
                dye::red("Back to main menu\t\t") << dye::light_yellow('[') << dye::yellow('4') << dye::light_yellow(']') << dye::red("Quit\n");
                ulitcondic:
                cout << dye::bright_white("\nPick a number: ");
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
                cout<< dye::light_yellow("\n\n[") << dye::yellow('1') << dye::light_yellow(']') << dye::red("Try again\t\t") << dye::light_yellow('[') << dye::yellow('2') << dye::light_yellow(']') << dye::red("Try another program\t\t") << dye::light_yellow('[') << dye::yellow('3') << dye::light_yellow(']') << 
                dye::red("Back to main menu\t\t") << dye::light_yellow('[') << dye::yellow('4') << dye::light_yellow(']') << dye::red("Quit\n");
                ulitcondid:
                cout << dye::bright_white("\nPick a number: ");
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
                cout << dye::light_yellow("\n\n[") << dye::yellow('1') << dye::light_yellow(']') << dye::red("Try again\t\t") << dye::light_yellow('[') << dye::yellow('2') << dye::light_yellow(']') << dye::red("Try another program\t\t") << dye::light_yellow('[') << dye::yellow('3') << dye::light_yellow(']') <<
                dye::red("Back to main menu\t\t") << dye::light_yellow('[') << dye::yellow('4') << dye::light_yellow(']') << dye::red("Quit\n");
                ulitcondie:
                cout << dye::bright_white("\nPick a number: ");
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
                cout << dye::light_yellow("\n\n[") << dye::yellow('1') << dye::light_yellow(']') << dye::red("Try again\t\t") << dye::light_yellow('[') << dye::yellow('2') << dye::light_yellow(']') << dye::red("Try another program\t\t") << dye::light_yellow('[') << dye::yellow('3') << dye::light_yellow(']') <<
                dye::red("Back to main menu\t\t") << dye::light_yellow('[') << dye::yellow('4') << dye::light_yellow(']') << dye::red("Quit\n");
                ulitcondif:
                cout << dye::bright_white("\nPick a number: ");
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
            cout << dye::light_blue("\t\t===========================================================================\n");
            cout << dye::light_blue("\t\t\t\t\t--") << dye::yellow("YOU CHOSE ARRAY") << dye::light_blue("--\n");
            cout << dye::yellow("\n\t\t\t\tPROGRAMS IN ARRAY USING ONE-DIMENSION\n");
            cout << dye::light_blue("\n\t\t===========================================================================\n\n");
            
            cout << dye::light_yellow("\t\t\t[") << dye::yellow("A") << dye::light_yellow("] ") << dye::aqua("REMOVE ELEMENT IN ARRAY ") << dye::light_yellow("\t[") << dye::yellow("B") << dye::light_yellow("] ") << dye::aqua("SUM OF NUMBER ") <<
            dye::light_yellow("\t[") << dye::yellow("C") << dye::light_yellow("] ") << dye::aqua("POSITIVE OR NEGATIVE \n\n") << dye::light_yellow("\t\t[") << dye::yellow("D") << dye::light_yellow("] ") << dye::aqua("LOWEST AND HIGHEST NUMBER ") <<
            dye::light_yellow("\t[") << dye::yellow("E") << dye::light_yellow("] ") << dye::aqua("COUNT OCCURRENCE/s ") << dye::light_yellow("\t[") << dye::yellow("F") << dye::light_yellow("] ") << dye::aqua("FIND SPECIFIC NAME ") <<
            dye::light_yellow("\n\n\t[") << dye::yellow("0") << dye::light_yellow("] ") << dye::red("Back to main menu ") << dye::light_yellow("\t\t[") << dye::yellow("1") << dye::light_yellow("] ") << dye::red("Exit \n\n\n");

            cout << dye::bright_white("Enter letter") << dye::bright_white(" (") << dye::yellow('A') << '/' << dye::yellow('B') << '/' << dye::yellow('C') << '/' << dye::yellow('D') << '/' << dye::yellow('E') << '/' << dye::yellow('F') << '/' << dye::yellow('0') << '/' << dye::yellow('1') << dye::bright_white("): ");
            cin >> letter_con;
            if(letter_con.size() != 1){
                system("CLS");
                goto piliArr;
            }
            
            if(letter_con == "A" || letter_con == "a"){

                arrRem: // <--- CREATE LABEL FOR FIRST PROBELM IN ARRAY
                remove(); // <--- FUNCTION OF FACTORIAL OF AN ARRAY                    
                cout << dye::light_yellow("\n\n[") << dye::yellow('1') << dye::light_yellow(']') << dye::red("Try again\t\t") << dye::light_yellow('[') << dye::yellow('2') << dye::light_yellow(']') << dye::red("Try another program\t\t") << dye::light_yellow('[') << dye::yellow('3') << dye::light_yellow(']') <<
                dye::red("Back to main menu\t\t") << dye::light_yellow('[') << dye::yellow('4') << dye::light_yellow(']') << dye::red("Quit\n");
                ulitarra:
                cout << dye::bright_white("\nPick a number: ");
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
                
                cout << dye::light_yellow("\n\n[") << dye::yellow('1') << dye::light_yellow(']') << dye::red("Try again\t\t") << dye::light_yellow('[') << dye::yellow('2') << dye::light_yellow(']') << dye::red("Try another program\t\t") << dye::light_yellow('[') << dye::yellow('3') << dye::light_yellow(']') <<
                dye::red("Back to main menu\t\t") << dye::light_yellow('[') << dye::yellow('4') << dye::light_yellow(']') << dye::red("Quit\n");
                ulitarrb:
                cout << dye::bright_white("\nPick a number: ");
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
                cout << dye::light_yellow("\n\n[") << dye::yellow('1') << dye::light_yellow(']') << dye::red("Try again\t\t") << dye::light_yellow('[') << dye::yellow('2') << dye::light_yellow(']') << dye::red("Try another program\t\t") << dye::light_yellow('[') << dye::yellow('3') << dye::light_yellow(']') <<
                dye::red("Back to main menu\t\t") << dye::light_yellow('[') << dye::yellow('4') << dye::light_yellow(']') << dye::red("Quit\n");
                ulitarrc:
                cout << dye::bright_white("\nPick a number: ");
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
                cout << dye::light_yellow("\n\n[") << dye::yellow('1') << dye::light_yellow(']') << dye::red("Try again\t\t") << dye::light_yellow('[') << dye::yellow('2') << dye::light_yellow(']') << dye::red("Try another program\t\t") << dye::light_yellow('[') << dye::yellow('3') << dye::light_yellow(']') <<
                dye::red("Back to main menu\t\t") << dye::light_yellow('[') << dye::yellow('4') << dye::light_yellow(']') << dye::red("Quit\n");
                ulitarrd:
                cout << dye::bright_white("\nPick a number: ");
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
                cout << dye::light_yellow("\n\n[") << dye::yellow('1') << dye::light_yellow(']') << dye::red("Try again\t\t") << dye::light_yellow('[') << dye::yellow('2') << dye::light_yellow(']') << dye::red("Try another program\t\t") << dye::light_yellow('[') << dye::yellow('3') << dye::light_yellow(']') <<
                dye::red("Back to main menu\t\t") << dye::light_yellow('[') << dye::yellow('4') << dye::light_yellow(']') << dye::red("Quit\n");
                ulitarre:
                cout << dye::bright_white("\nPick a number: ");
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
                cout << dye::light_yellow("\n\n[") << dye::yellow('1') << dye::light_yellow(']') << dye::red("Try again\t\t") << dye::light_yellow('[') << dye::yellow('2') << dye::light_yellow(']') << dye::red("Try another program\t\t") << dye::light_yellow('[') << dye::yellow('3') << dye::light_yellow(']') <<
                dye::red("Back to main menu\t\t") << dye::light_yellow('[') << dye::yellow('4') << dye::light_yellow(']') << dye::red("Quit\n");
                ulitarrf:
                cout << dye::bright_white("\nPick a number: ");
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
            cout << dye::light_blue("\t\t===========================================================================\n");
            cout << dye::light_blue("\t\t\t\t\t--") << dye::yellow("YOU CHOSE OPERATOR") << dye::light_blue("--\n");
            cout << dye::yellow("\n\t\t\t\t\tPROGRAMS WITH OPERATORS \n");
            cout << dye::light_blue("\n\t\t===========================================================================\n\n");
            
            cout << dye::light_yellow("\t\t\t[") << dye::yellow("A") << dye::light_yellow("] ") << dye::aqua("ARITHMETIC OPERATORS ") << dye::light_yellow("  [") << dye::yellow("B") << dye::light_yellow("] ") << dye::aqua("RELATIONAL OPERATORS ") <<
            dye::light_yellow("\t[") << dye::yellow("C") << dye::light_yellow("] ") << dye::aqua("LOGICAL OPERATORS \n\n") << dye::light_yellow("\t\t[") << dye::yellow("D") << dye::light_yellow("] ") << dye::aqua("CURRENCY CONVERTER ") <<
            dye::light_yellow("\t  [") << dye::yellow("E") << dye::light_yellow("] ") << dye::aqua("METRIC CONVERSION ") << dye::light_yellow("\t  [") << dye::yellow("F") << dye::light_yellow("] ") << dye::aqua("CALENDAR DATE CONVERTER ") <<
            dye::light_yellow("\n\n\t[") << dye::yellow("0") << dye::light_yellow("] ") << dye::red("Back to main menu ") << dye::light_yellow("\t  [") << dye::yellow("1") << dye::light_yellow("] ") << dye::red("Exit \n\n\n");

            cout << dye::bright_white("Enter letter") << dye::bright_white(" (") << dye::yellow('A') << '/' << dye::yellow('B') << '/' << dye::yellow('C') << '/' << dye::yellow('D') << '/' << dye::yellow('E') << '/' << dye::yellow('F') << '/' << dye::yellow('0') << '/' << dye::yellow('1') << dye::bright_white("): ");
            cin >> letter_con;
            if(letter_con.size() != 1){
                system("CLS");
                goto piliOpe;
            }
            
            if(letter_con == "A" || letter_con == "a"){
                arith: // <--- CREATE LABEL FOR FIRST PROBELM IN OPERATOR
                arithmetic(); // <--- FUNCTION OF FIRST PROBLEM
                
                cout << dye::light_yellow("\n\n[") << dye::yellow('1') << dye::light_yellow(']') << dye::red("Try again\t\t") << dye::light_yellow('[') << dye::yellow('2') << dye::light_yellow(']') << dye::red("Try another program\t\t") << dye::light_yellow('[') << dye::yellow('3') << dye::light_yellow(']') <<
                dye::red("Back to main menu\t\t") << dye::light_yellow('[') << dye::yellow('4') << dye::light_yellow(']') << dye::red("Quit\n");
                ulitopea:
                cout << dye::bright_white("\nPick a number: ");
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
                
                cout << dye::light_yellow("\n\n[") << dye::yellow('1') << dye::light_yellow(']') << dye::red("Try again\t\t") << dye::light_yellow('[') << dye::yellow('2') << dye::light_yellow(']') << dye::red("Try another program\t\t") << dye::light_yellow('[') << dye::yellow('3') << dye::light_yellow(']') <<
                dye::red("Back to main menu\t\t") << dye::light_yellow('[') << dye::yellow('4') << dye::light_yellow(']') << dye::red("Quit\n");
                ulitopeb:
                cout << dye::bright_white("\nPick a number: ");
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
                
                cout << dye::light_yellow("\n\n[") << dye::yellow('1') << dye::light_yellow(']') << dye::red("Try again\t\t") << dye::light_yellow('[') << dye::yellow('2') << dye::light_yellow(']') << dye::red("Try another program\t\t") << dye::light_yellow('[') << dye::yellow('3') << dye::light_yellow(']') <<
                dye::red("Back to main menu\t\t") << dye::light_yellow('[') << dye::yellow('4') << dye::light_yellow(']') << dye::red("Quit\n");
                ulitopec:
                cout << dye::bright_white("\nPick a number: ");
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
                
                cout << dye::light_yellow("\n\n[") << dye::yellow('1') << dye::light_yellow(']') << dye::red("Try again\t\t") << dye::light_yellow('[') << dye::yellow('2') << dye::light_yellow(']') << dye::red("Try another program\t\t") << dye::light_yellow('[') << dye::yellow('3') << dye::light_yellow(']') <<
                dye::red("Back to main menu\t\t") << dye::light_yellow('[') << dye::yellow('4') << dye::light_yellow(']') << dye::red("Quit\n");
                ulitoped:
                cout << dye::bright_white("\nPick a number: ");
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
                
                cout << dye::light_yellow("\n\n[") << dye::yellow('1') << dye::light_yellow(']') << dye::red("Try again\t\t") << dye::light_yellow('[') << dye::yellow('2') << dye::light_yellow(']') << dye::red("Try another program\t\t") << dye::light_yellow('[') << dye::yellow('3') << dye::light_yellow(']') <<
                dye::red("Back to main menu\t\t") << dye::light_yellow('[') << dye::yellow('4') << dye::light_yellow(']') << dye::red("Quit\n");
                ulitopee:
                cout << dye::bright_white("\nPick a number: ");
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
                
                cout << dye::light_yellow("\n\n[") << dye::yellow('1') << dye::light_yellow(']') << dye::red("Try again\t\t") << dye::light_yellow('[') << dye::yellow('2') << dye::light_yellow(']') << dye::red("Try another program\t\t") << dye::light_yellow('[') << dye::yellow('3') << dye::light_yellow(']') <<
                dye::red("Back to main menu\t\t") << dye::light_yellow('[') << dye::yellow('4') << dye::light_yellow(']') << dye::red("Quit\n");
                ulitopef:
                cout << dye::bright_white("\nPick a number: ");
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
            cout << dye::light_yellow("\n\n[") << dye::yellow("1") << dye::light_yellow("] ") << dye::red("Back ") << '|' << dye::light_yellow("  [") << dye::yellow("2") << dye::light_yellow("] ") << dye::red("Exit \n") << endl;
            decabout:
            cout<< dye::bright_white("Enter a number: ");
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
