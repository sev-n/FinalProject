#include <iostream>
#include <string>
//#include <stdlib.h>
#include "src/functions.h"
using namespace std;


int main(){
    int num;
    int aboutnum;
    int conc; // <-- after trying the program
    char letter_con; // <-----  program choices
    string name, course;


    cout<< dye::grey("Enter your name: ");
    getline(cin, name);
    cout<< dye::grey("Enter your course: ");
    getline(cin, course);
    system("CLS");

    offmenu:
    menu(name, course);

    loop:
    cout<<"\n\t\t\t\t\tEnter your choice: ";
    cin>>num;
    //system("PAUSE");
    system("CLS");

    if(num){
        if(num == 1){
            piliLoop: // <--- CREATE A LABEL
            cout<< dye::light_blue("\t\t===========================================================================\n");
            cout<< dye::light_blue("\t\t\t\t\t--") << dye::yellow("YOU CHOSE LOOPING TOPICS") << dye::light_blue("--\n");
            cout<< dye::yellow("\n\t\t\t\t\tPROGRAMS IN LOOPING SECTION\n");
            cout<<dye::light_blue("\n\t\t===========================================================================\n\n");

            cout<< dye::light_yellow("\t  [") << dye::yellow("A") << dye::light_yellow("] ") << dye::aqua("ASTERISK PYRAMID ") << dye::light_yellow("\t\t[") << dye::yellow("B") << dye::light_yellow("] ") << dye::aqua("SUM AND FACTORIAL ") << 
            dye::light_yellow("\t\t[") << dye::yellow("C") << dye::light_yellow("] ") << dye::aqua("REVERSE A NUMBER \n\n") << dye::light_yellow("\t\t[") << dye::yellow("D") << dye::light_yellow("] ") << dye::aqua("MULTIPLICATION TABLE OF N ") <<
            dye::light_yellow("\t[") << dye::yellow("E") << dye::light_yellow("] ") << dye::aqua("COUNT DIGITS IN NUMBER ") << dye::light_yellow("\t[") << dye::yellow("F") << dye::light_yellow("] ") << dye::aqua("FIBONACCI SERIES ") <<
            dye::light_yellow("\n\n\t\t\t[") << dye::yellow("G") << dye::light_yellow("] ") << dye::red("Back to main menu ") << dye::light_yellow("\t\t[") << dye::yellow("H") << dye::light_yellow("] ") << dye::red("Exit \n\n\n");

            cout<< dye::bright_white("Enter letter") << dye::bright_white(" (") << dye::yellow('A') << '/' << dye::yellow('B') << '/' << dye::yellow('C') << '/' << dye::yellow('D') << '/' << dye::yellow('E') << '/' << dye::yellow('F') << '/' << dye::yellow('G') << '/' << dye::yellow('H') << dye::bright_white("): ");
            cin>>letter_con;

            if(letter_con){
                if(letter_con == 'a' || letter_con == 'A'){

                    pyra: // <---- GOTO PYRA
                    pyramid(); // <---- FUNCTION OF PYRAMID
                    ulitloopa:
                    cout<< dye::light_yellow("\n\n[") << dye::yellow('1') << dye::light_yellow(']') << dye::red("Try again\t\t") << dye::light_yellow('[') << dye::yellow('2') << dye::light_yellow(']') << dye::red("Try another program\t\t") << dye::light_yellow('[') << dye::yellow('3') << dye::light_yellow(']') << 
                    dye::red("Back to main menu\t\t") << dye::light_yellow('[') << dye::yellow('4') << dye::light_yellow(']') << dye::red("Quit\n");
                    cout<< dye::bright_white("\nPick a number: ");
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
                            cout<< dye::yellow("\nThankyou For using the program");
                            exit(0);
                            break;
                        default:
                            goto ulitloopa;
                            break;
                    }
                }else if(letter_con == 'b' || letter_con == 'B'){

                    sumfact: // <--- GOTO SUMFACT
                    sumfac(); // <--- FUNCTION
                    ulitloopb:
                    cout<< dye::light_yellow("\n\n[") << dye::yellow('1') << dye::light_yellow(']') << dye::red("Try again\t\t") << dye::light_yellow('[') << dye::yellow('2') << dye::light_yellow(']') << dye::red("Try another program\t\t") << dye::light_yellow('[') << dye::yellow('3') << dye::light_yellow(']') << 
                    dye::red("Back to main menu\t\t") << dye::light_yellow('[') << dye::yellow('4') << dye::light_yellow(']') << dye::red("Quit\n");
                    cout<< dye::bright_white("\nPick a number: ");
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
                            cout<< dye::yellow("\nThankyou For using the program");
                            exit(0);
                            break;
                        default:
                            goto ulitloopb;
                            break;
                    }
                }else if(letter_con == 'c' || letter_con == 'C'){

                    rev: // <--- CREATE LABEL
                    reverse(); // <--- FUNCTION OF REVERSE
                    ulitloopc:
                    cout<< dye::light_yellow("\n\n[") << dye::yellow('1') << dye::light_yellow(']') << dye::red("Try again\t\t") << dye::light_yellow('[') << dye::yellow('2') << dye::light_yellow(']') << dye::red("Try another program\t\t") << dye::light_yellow('[') << dye::yellow('3') << dye::light_yellow(']') << 
                    dye::red("Back to main menu\t\t") << dye::light_yellow('[') << dye::yellow('4') << dye::light_yellow(']') << dye::red("Quit\n");
                    cout<< dye::bright_white("\nPick a number: ");
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
                            cout<< dye::yellow("\nThankyou For using the program");
                            exit(0);
                            break;
                        default:
                            goto ulitloopc;
                            break;
                    }
                }else if(letter_con == 'd' || letter_con == 'D'){

                    multiTable: // <--- CREATE LABEL
                    multi_table(); // <--- FUNCTION OF MultiTable
                    ulitloopd:
                    cout<< dye::light_yellow("\n\n[") << dye::yellow('1') << dye::light_yellow(']') << dye::red("Try again\t\t") << dye::light_yellow('[') << dye::yellow('2') << dye::light_yellow(']') << dye::red("Try another program\t\t") << dye::light_yellow('[') << dye::yellow('3') << dye::light_yellow(']') << 
                    dye::red("Back to main menu\t\t") << dye::light_yellow('[') << dye::yellow('4') << dye::light_yellow(']') << dye::red("Quit\n");
                    cout<< dye::bright_white("\nPick a number: ");
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
                            cout<< dye::yellow("\nThankyou For using the program");
                            exit(0);
                            break;
                        default:
                            goto ulitloopd;
                            break;
                    }
                }else if(letter_con == 'e' || letter_con == 'E'){

                    count_digit: // <--- CREATE LABEL
                    count(); // <--- FUNCTION OF COUNT
                    ulitloope:
                    cout<< dye::light_yellow("\n\n[") << dye::yellow('1') << dye::light_yellow(']') << dye::red("Try again\t\t") << dye::light_yellow('[') << dye::yellow('2') << dye::light_yellow(']') << dye::red("Try another program\t\t") << dye::light_yellow('[') << dye::yellow('3') << dye::light_yellow(']') << 
                    dye::red("Back to main menu\t\t") << dye::light_yellow('[') << dye::yellow('4') << dye::light_yellow(']') << dye::red("Quit\n");
                    cout<< dye::bright_white("\nPick a number: ");
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
                            cout<< dye::yellow("\nThankyou For using the program");
                            exit(0);
                            break;
                        default:
                            goto ulitloope;
                            break;
                    }
                }else if(letter_con == 'f' || letter_con == 'F'){

                    fibo: // <--- CREATE LABEL
                    fibo_terms(); // <--- FUNCTION OF FIBONACCI
                    ulitloopf:
                    cout<< dye::light_yellow("\n\n[") << dye::yellow('1') << dye::light_yellow(']') << dye::red("Try again\t\t") << dye::light_yellow('[') << dye::yellow('2') << dye::light_yellow(']') << dye::red("Try another program\t\t") << dye::light_yellow('[') << dye::yellow('3') << dye::light_yellow(']') << 
                    dye::red("Back to main menu\t\t") << dye::light_yellow('[') << dye::yellow('4') << dye::light_yellow(']') << dye::red("Quit\n");
                    cout<< dye::bright_white("\nPick a number: ");
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
                            cout<< dye::yellow("\nThankyou For using the program");
                            exit(0);
                            break;
                        default:
                            goto ulitloopf;
                            break;
                    }
                }else if(letter_con == 'G' || letter_con == 'g'){
                    system("CLS");
                    goto offmenu;
                }else if(letter_con == 'H' || letter_con == 'h'){
                    cout<< dye::yellow("\n\t\t\t\tTHANKYOU FOR USING THE PROGRAM HAVE A NICE DAY AHEAD!");
                    exit(0);
                }else{
                    system("CLS");
                    cin.ignore(512, '\n');
                    goto piliLoop;
                }
            }
        }
// |---------------------------------------------------------------------------------------------------------------------------------------|
        else if(num == 2){
            piliCon: // <---- GOTO CONDITIONAL
            cout<< dye::light_blue("\t\t===========================================================================\n");
            cout<< dye::light_blue("\t\t\t\t\t--") << dye::yellow("YOU CHOSE CONDITIONAL") << dye::light_blue("--\n");
            cout<< dye::yellow("\n\t\t\t\t    PROGRAMS IN CONDITIONAL STATEMENT\n");
            cout<< dye::light_blue("\n\t\t===========================================================================\n\n");

            cout<< dye::light_yellow("\t  [") << dye::yellow("A") << dye::light_yellow("] ") << dye::aqua("EQUIVALENT GRADE ") << dye::light_yellow("\t\t[") << dye::yellow("B") << dye::light_yellow("] ") << dye::aqua("TEMPERATURE DETECTOR ") << 
            dye::light_yellow("\t[") << dye::yellow("C") << dye::light_yellow("] ") << dye::aqua("WEEKLY SALARY \n\n") << dye::light_yellow("\t\t[") << dye::yellow("D") << dye::light_yellow("] ") << dye::aqua("REQUIRED AGE TO VOTE ") <<
            dye::light_yellow("\t[") << dye::yellow("E") << dye::light_yellow("] ") << dye::aqua("SIMPLE CALCULATOR ") << dye::light_yellow("\t\t[") << dye::yellow("F") << dye::light_yellow("] ") << dye::aqua("IDENTIFY VOWEL ") <<
            dye::light_yellow("\n\n\t\t\t[") << dye::yellow("G") << dye::light_yellow("] ") << dye::red("Back to main menu ") << dye::light_yellow("\t\t[") << dye::yellow("H") << dye::light_yellow("] ") << dye::red("Exit \n\n\n");

            cout<< dye::bright_white("Enter letter") << dye::bright_white(" (") << dye::yellow('A') << '/' << dye::yellow('B') << '/' << dye::yellow('C') << '/' << dye::yellow('D') << '/' << dye::yellow('E') << '/' << dye::yellow('F') << '/' << dye::yellow('G') << '/' << dye::yellow('H') << dye::bright_white("): ");
            cin>>letter_con;

            if(letter_con){
                if(letter_con == 'A' || letter_con == 'a'){

                    equi: // <--- goto equivalent grade
                    grade_equi(); // <--- FUNCTION OF GRADE EQUIVALENT
                    ulitcondia:
                    cout<< dye::light_yellow("\n\n[") << dye::yellow('1') << dye::light_yellow(']') << dye::red("Try again\t\t") << dye::light_yellow('[') << dye::yellow('2') << dye::light_yellow(']') << dye::red("Try another program\t\t") << dye::light_yellow('[') << dye::yellow('3') << dye::light_yellow(']') << 
                    dye::red("Back to main menu\t\t") << dye::light_yellow('[') << dye::yellow('4') << dye::light_yellow(']') << dye::red("Quit\n");
                    cout<< dye::bright_white("\nPick a number: ");
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
                            cout<< dye::yellow("\nThankyou For using the program");
                            exit(0);
                            break;
                        default:
                            goto ulitcondia;
                            break;
                    }
                }else if(letter_con == 'b' || letter_con == 'B'){

                    tmprtr: // <---- goto temperature detector
                    temper(); // <--- FUNCTION OF TEMPERATURE DETECTOR
                    ulitcondib:
                    cout<< dye::light_yellow("\n\n[") << dye::yellow('1') << dye::light_yellow(']') << dye::red("Try again\t\t") << dye::light_yellow('[') << dye::yellow('2') << dye::light_yellow(']') << dye::red("Try another program\t\t") << dye::light_yellow('[') << dye::yellow('3') << dye::light_yellow(']') << 
                    dye::red("Back to main menu\t\t") << dye::light_yellow('[') << dye::yellow('4') << dye::light_yellow(']') << dye::red("Quit\n");
                    cout<< dye::bright_white("\nPick a number: ");
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
                            cout<< dye::yellow("\nThankyou For using the program");
                            exit(0);
                            break;
                        default:
                            goto ulitcondib;
                            break;
                    }
                }else if(letter_con == 'c' || letter_con == 'C'){

                    weeklySalary: // <--- GOTO WEEKLY SALARY
                    work_salary(); // <----- FUNCTION OF WEEKLY SALARY
                    ulitcondic:
                    cout<< dye::light_yellow("\n\n[") << dye::yellow('1') << dye::light_yellow(']') << dye::red("Try again\t\t") << dye::light_yellow('[') << dye::yellow('2') << dye::light_yellow(']') << dye::red("Try another program\t\t") << dye::light_yellow('[') << dye::yellow('3') << dye::light_yellow(']') << 
                    dye::red("Back to main menu\t\t") << dye::light_yellow('[') << dye::yellow('4') << dye::light_yellow(']') << dye::red("Quit\n");
                    cout<< dye::bright_white("\nPick a number: ");
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
                            cout<< dye::yellow("\nThankyou For using the program");
                            exit(0);
                            break;
                        default:
                            goto ulitcondic;
                            break;
                    }
                }else if(letter_con == 'd' || letter_con == 'D'){

                    vote: // <--- CREATE LABEL
                    vote_reg(); // <----- FUNCTION FOR VOTE
                    ulitcondid:
                    cout<< dye::light_yellow("\n\n[") << dye::yellow('1') << dye::light_yellow(']') << dye::red("Try again\t\t") << dye::light_yellow('[') << dye::yellow('2') << dye::light_yellow(']') << dye::red("Try another program\t\t") << dye::light_yellow('[') << dye::yellow('3') << dye::light_yellow(']') << 
                    dye::red("Back to main menu\t\t") << dye::light_yellow('[') << dye::yellow('4') << dye::light_yellow(']') << dye::red("Quit\n");
                    cout<< dye::bright_white("\nPick a number: ");
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
                            cout<< dye::yellow("\nThankyou For using the program");
                            exit(0);
                            break;
                        default:
                            goto ulitcondid;
                            break;
                    }
                }else if(letter_con == 'e' || letter_con == 'E'){

                    calcu: // <--- CREATE LABEL
                    calcu(); // <----- FUNCTION FOR CALCULATOR
                    ulitcondie:
                    cout<< dye::light_yellow("\n\n[") << dye::yellow('1') << dye::light_yellow(']') << dye::red("Try again\t\t") << dye::light_yellow('[') << dye::yellow('2') << dye::light_yellow(']') << dye::red("Try another program\t\t") << dye::light_yellow('[') << dye::yellow('3') << dye::light_yellow(']') << 
                    dye::red("Back to main menu\t\t") << dye::light_yellow('[') << dye::yellow('4') << dye::light_yellow(']') << dye::red("Quit\n");
                    cout<< dye::bright_white("\nPick a number: ");
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
                            cout<< dye::yellow("\nThankyou For using the program");
                            exit(0);
                            break;
                        default:
                            goto ulitcondie;
                            break;
                    }
                }else if(letter_con == 'f' || letter_con == 'F'){

                    find_vowel: // <--- CREATE LABEL
                    vowel(); // <----- FUNCTION FOR VOWEL
                    ulitcondif:
                    cout<< dye::light_yellow("\n\n[") << dye::yellow('1') << dye::light_yellow(']') << dye::red("Try again\t\t") << dye::light_yellow('[') << dye::yellow('2') << dye::light_yellow(']') << dye::red("Try another program\t\t") << dye::light_yellow('[') << dye::yellow('3') << dye::light_yellow(']') << 
                    dye::red("Back to main menu\t\t") << dye::light_yellow('[') << dye::yellow('4') << dye::light_yellow(']') << dye::red("Quit\n");
                    cout<< dye::bright_white("\nPick a number: ");
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
                            cout<< dye::yellow("\nThankyou For using the program");
                            exit(0);
                            break;
                        default:
                            goto ulitcondif;
                            break;
                    }
                }else if(letter_con == 'G' || letter_con == 'g'){
                    system("CLS");
                    goto offmenu;
                }else if(letter_con == 'H' || letter_con == 'h'){
                    cout<< dye::yellow("\n\t\t\t\tTHANKYOU FOR USING THE PROGRAM HAVE A NICE DAY AHEAD!");
                    exit(0);
                }else{
                    system("CLS");
                    cin.ignore(512, '\n');
                    goto piliCon;
                }
            }
        }

//--------------------------------------------------------------------------------------------------------------------------
        else if(num == 3){
            piliArr: // <---- CREATE LABEL FOR ARRAY
            cout<< dye::light_blue("\t\t===========================================================================\n");
            cout<< dye::light_blue("\t\t\t\t\t--") << dye::yellow("YOU CHOSE ARRAY") << dye::light_blue("--\n");
            cout<< dye::yellow("\n\t\t\t\tPROGRAMS IN ARRAY USING ONE-DIMENSION\n");
            cout<< dye::light_blue("\n\t\t===========================================================================\n\n");
            
            cout<< dye::light_yellow("\t\t\t[") << dye::yellow("A") << dye::light_yellow("] ") << dye::aqua("FACTORIAL OF NUMBER ") << dye::light_yellow("\t[") << dye::yellow("B") << dye::light_yellow("] ") << dye::aqua("SUM OF NUMBER ") << 
            dye::light_yellow("\t[") << dye::yellow("C") << dye::light_yellow("] ") << dye::aqua("POSITIVE OR NEGATIVE \n\n") << dye::light_yellow("\t\t[") << dye::yellow("D") << dye::light_yellow("] ") << dye::aqua("LOWEST AND HIGHEST NUMBER ") <<
            dye::light_yellow("\t[") << dye::yellow("E") << dye::light_yellow("] ") << dye::aqua("COUNT OCCURRENCE/s ") << dye::light_yellow("\t[") << dye::yellow("F") << dye::light_yellow("] ") << dye::aqua("FIND SPECIFIC NAME ") <<
            dye::light_yellow("\n\n\t[") << dye::yellow("G") << dye::light_yellow("] ") << dye::red("Back to main menu ") << dye::light_yellow("\t\t[") << dye::yellow("H") << dye::light_yellow("] ") << dye::red("Exit \n\n\n");

            cout<< dye::bright_white("Enter letter") << dye::bright_white(" (") << dye::yellow('A') << '/' << dye::yellow('B') << '/' << dye::yellow('C') << '/' << dye::yellow('D') << '/' << dye::yellow('E') << '/' << dye::yellow('F') << '/' << dye::yellow('G') << '/' << dye::yellow('H') << dye::bright_white("): ");
            cin>>letter_con;
            if(letter_con){
                if(letter_con == 'A' || letter_con == 'a'){

                    arrFac: // <--- CREATE LABEL FOR FIRST PROBELM IN ARRAY
                    FacArr(); // <--- FUNCTION OF FACTORIAL OF AN ARRAY
                    ulitarra:
                    cout<< dye::light_yellow("\n\n[") << dye::yellow('1') << dye::light_yellow(']') << dye::red("Try again\t\t") << dye::light_yellow('[') << dye::yellow('2') << dye::light_yellow(']') << dye::red("Try another program\t\t") << dye::light_yellow('[') << dye::yellow('3') << dye::light_yellow(']') << 
                    dye::red("Back to main menu\t\t") << dye::light_yellow('[') << dye::yellow('4') << dye::light_yellow(']') << dye::red("Quit\n");
                    cout<< dye::bright_white("\nPick a number: ");
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
                            cout<< dye::yellow("\nThankyou For using the program");
                            exit(0);
                            break;
                        default:
                            goto ulitarra;
                            break;
                        }
                }else if(letter_con == 'B' || letter_con == 'b'){

                    arrSum: // <--- CREATE LABEL
                    sumofN(); // <--- FUNCTION OF SUM OF AN ARRAY
                    ulitarrb:
                    cout<< dye::light_yellow("\n\n[") << dye::yellow('1') << dye::light_yellow(']') << dye::red("Try again\t\t") << dye::light_yellow('[') << dye::yellow('2') << dye::light_yellow(']') << dye::red("Try another program\t\t") << dye::light_yellow('[') << dye::yellow('3') << dye::light_yellow(']') << 
                    dye::red("Back to main menu\t\t") << dye::light_yellow('[') << dye::yellow('4') << dye::light_yellow(']') << dye::red("Quit\n");
                    cout<< dye::bright_white("\nPick a number: ");
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
                            cout<< dye::yellow("\nThankyou For using the program");
                            exit(0);
                            break;
                        default:
                            goto ulitarrb;
                            break;
                        }
                }else if(letter_con == 'C' || letter_con == 'c'){

                    arrposNneg: // <--- CREATE LABEL
                    posNneg(); // <--- FUNCTION OF POSTIVE OF NEGATIVE NUMBERS OF AN ARRAY
                    ulitarrc:
                    cout<< dye::light_yellow("\n\n[") << dye::yellow('1') << dye::light_yellow(']') << dye::red("Try again\t\t") << dye::light_yellow('[') << dye::yellow('2') << dye::light_yellow(']') << dye::red("Try another program\t\t") << dye::light_yellow('[') << dye::yellow('3') << dye::light_yellow(']') << 
                    dye::red("Back to main menu\t\t") << dye::light_yellow('[') << dye::yellow('4') << dye::light_yellow(']') << dye::red("Quit\n");
                    cout<< dye::bright_white("\nPick a number: ");
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
                            cout<< dye::yellow("\nThankyou For using the program");
                            exit(0);
                            break;
                        default:
                            goto ulitarrc;
                            break;
                        }
                }else if(letter_con == 'D' || letter_con == 'd'){

                    arr_low_high: // <--- CREATE LABEL
                    low_high(); // <--- FUNCTION OF LOW/HIGH
                    ulitarrd:
                    cout<< dye::light_yellow("\n\n[") << dye::yellow('1') << dye::light_yellow(']') << dye::red("Try again\t\t") << dye::light_yellow('[') << dye::yellow('2') << dye::light_yellow(']') << dye::red("Try another program\t\t") << dye::light_yellow('[') << dye::yellow('3') << dye::light_yellow(']') << 
                    dye::red("Back to main menu\t\t") << dye::light_yellow('[') << dye::yellow('4') << dye::light_yellow(']') << dye::red("Quit\n");
                    cout<< dye::bright_white("\nPick a number: ");
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
                            cout<< dye::yellow("\nThankyou For using the program");
                            exit(0);
                            break;
                        default:
                            goto ulitarrd;
                            break;
                        }
                }else if(letter_con == 'E' || letter_con == 'e'){

                    arr_occur: // <--- CREATE LABEL
                    occur_n(); // <--- FUNCTION OF OCCUR
                    ulitarre:
                    cout<< dye::light_yellow("\n\n[") << dye::yellow('1') << dye::light_yellow(']') << dye::red("Try again\t\t") << dye::light_yellow('[') << dye::yellow('2') << dye::light_yellow(']') << dye::red("Try another program\t\t") << dye::light_yellow('[') << dye::yellow('3') << dye::light_yellow(']') << 
                    dye::red("Back to main menu\t\t") << dye::light_yellow('[') << dye::yellow('4') << dye::light_yellow(']') << dye::red("Quit\n");
                    cout<< dye::bright_white("\nPick a number: ");
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
                            cout<< dye::yellow("\nThankyou For using the program");
                            exit(0);
                            break;
                        default:
                            cout<<"\n(WARNING: Invalid Input)\n";
                            goto ulitarre;
                            break;
                        }
                }else if(letter_con == 'F' || letter_con == 'f'){

                    arr_find_name: // <--- CREATE LABEL
                    find_name(); // <--- FUNCTION OF FIND
                    ulitarrf:
                    cout<< dye::light_yellow("\n\n[") << dye::yellow('1') << dye::light_yellow(']') << dye::red("Try again\t\t") << dye::light_yellow('[') << dye::yellow('2') << dye::light_yellow(']') << dye::red("Try another program\t\t") << dye::light_yellow('[') << dye::yellow('3') << dye::light_yellow(']') << 
                    dye::red("Back to main menu\t\t") << dye::light_yellow('[') << dye::yellow('4') << dye::light_yellow(']') << dye::red("Quit\n");
                    cout<< dye::bright_white("\nPick a number: ");
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
                            cout<< dye::yellow("\nThankyou For using the program");
                            exit(0);
                            break;
                        default:
                            goto ulitarrf;
                            break;
                        }
                }else if(letter_con == 'G' || letter_con == 'g'){
                    system("CLS");
                    goto offmenu;
                }else if(letter_con == 'H' || letter_con == 'h'){
                    cout<< dye::yellow("\n\t\t\t\tTHANKYOU FOR USING THE PROGRAM HAVE A NICE DAY AHEAD!");
                    exit(0);
                }else{
                system("CLS");
                cin.ignore(512, '\n');
                goto piliArr;
                }
            }
        }
// |------------------------------------------------------------------------------------------------------------------------------------|
        else if(num == 4){
            piliOpe: // <---- CREATE LABEL FOR OPERATOR
            cout<< dye::light_blue("\t\t===========================================================================\n");
            cout<< dye::light_blue("\t\t\t\t\t--") << dye::yellow("YOU CHOSE OPERATOR") << dye::light_blue("--\n");
            cout<< dye::yellow("\n\t\t\t\t\tPROGRAMS WITH OPERATORS \n");
            cout<< dye::light_blue("\n\t\t===========================================================================\n\n");
            
            cout<< dye::light_yellow("\t\t\t[") << dye::yellow("A") << dye::light_yellow("] ") << dye::aqua("ARITHMETIC OPERATORS ") << dye::light_yellow("  [") << dye::yellow("B") << dye::light_yellow("] ") << dye::aqua("RELATIONAL OPERATORS ") << 
            dye::light_yellow("\t[") << dye::yellow("C") << dye::light_yellow("] ") << dye::aqua("LOGICAL OPERATORS \n\n") << dye::light_yellow("\t\t[") << dye::yellow("D") << dye::light_yellow("] ") << dye::aqua("CURRENCY CONVERTER ") <<
            dye::light_yellow("\t  [") << dye::yellow("E") << dye::light_yellow("] ") << dye::aqua("METRIC CONVERSION ") << dye::light_yellow("\t  [") << dye::yellow("F") << dye::light_yellow("] ") << dye::aqua("CALENDAR DATE CONVERTER ") <<
            dye::light_yellow("\n\n\t[") << dye::yellow("G") << dye::light_yellow("] ") << dye::red("Back to main menu ") << dye::light_yellow("\t  [") << dye::yellow("H") << dye::light_yellow("] ") << dye::red("Exit \n\n\n");

            cout<< dye::bright_white("Enter letter") << dye::bright_white(" (") << dye::yellow('A') << '/' << dye::yellow('B') << '/' << dye::yellow('C') << '/' << dye::yellow('D') << '/' << dye::yellow('E') << '/' << dye::yellow('F') << '/' << dye::yellow('G') << '/' << dye::yellow('H') << dye::bright_white("): ");
            cin>>letter_con;
            if(letter_con){
                if(letter_con == 'A' || letter_con == 'a'){

                    arith: // <--- CREATE LABEL FOR FIRST PROBELM IN OPERATOR
                    arithmetic(); // <--- FUNCTION OF FIRST PROBLEM
                    ulitopea:
                    cout<< dye::light_yellow("\n\n[") << dye::yellow('1') << dye::light_yellow(']') << dye::red("Try again\t\t") << dye::light_yellow('[') << dye::yellow('2') << dye::light_yellow(']') << dye::red("Try another program\t\t") << dye::light_yellow('[') << dye::yellow('3') << dye::light_yellow(']') << 
                    dye::red("Back to main menu\t\t") << dye::light_yellow('[') << dye::yellow('4') << dye::light_yellow(']') << dye::red("Quit\n");
                    cout<< dye::bright_white("\nPick a number: ");
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
                            cout<< dye::yellow("\nThankyou For using the program");
                            exit(0);
                            break;
                        default:
                            goto ulitopea;
                            break;
                        }
                }else if(letter_con == 'B' || letter_con == 'b'){

                    relational: // <--- CREATE LABEL
                    relational(); // <--- FUNCTION OF SECOND PROBLEM
                    ulitopeb:
                    cout<< dye::light_yellow("\n\n[") << dye::yellow('1') << dye::light_yellow(']') << dye::red("Try again\t\t") << dye::light_yellow('[') << dye::yellow('2') << dye::light_yellow(']') << dye::red("Try another program\t\t") << dye::light_yellow('[') << dye::yellow('3') << dye::light_yellow(']') << 
                    dye::red("Back to main menu\t\t") << dye::light_yellow('[') << dye::yellow('4') << dye::light_yellow(']') << dye::red("Quit\n");
                    cout<< dye::bright_white("\nPick a number: ");
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
                            cout<< dye::yellow("\nThankyou For using the program");
                            exit(0);
                            break;
                        default:
                            goto ulitopeb;
                            break;
                        }
                }else if(letter_con == 'C' || letter_con == 'c'){

                    logical: // <--- CREATE LABEL
                    logical(); // <--- FUNCTION OF THIRD PROBLEM
                    ulitopec:
                    cout<< dye::light_yellow("\n\n[") << dye::yellow('1') << dye::light_yellow(']') << dye::red("Try again\t\t") << dye::light_yellow('[') << dye::yellow('2') << dye::light_yellow(']') << dye::red("Try another program\t\t") << dye::light_yellow('[') << dye::yellow('3') << dye::light_yellow(']') << 
                    dye::red("Back to main menu\t\t") << dye::light_yellow('[') << dye::yellow('4') << dye::light_yellow(']') << dye::red("Quit\n");
                    cout<< dye::bright_white("\nPick a number: ");
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
                            cout<< dye::yellow("\nThankyou For using the program");
                            exit(0);
                            break;
                        default:
                            goto ulitopec;
                            break;
                        }
                }else if(letter_con == 'D' || letter_con == 'd'){

                    convert: // <--- CREATE LABEL
                    convert(); // <--- FUNCTION OF FOURTH PROBLEM
                    ulitoped:
                    cout<< dye::light_yellow("\n\n[") << dye::yellow('1') << dye::light_yellow(']') << dye::red("Try again\t\t") << dye::light_yellow('[') << dye::yellow('2') << dye::light_yellow(']') << dye::red("Try another program\t\t") << dye::light_yellow('[') << dye::yellow('3') << dye::light_yellow(']') << 
                    dye::red("Back to main menu\t\t") << dye::light_yellow('[') << dye::yellow('4') << dye::light_yellow(']') << dye::red("Quit\n");
                    cout<< dye::bright_white("\nPick a number: ");
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
                            cout<< dye::yellow("\nThankyou For using the program");
                            exit(0);
                            break;
                        default:
                            goto ulitoped;
                            break;
                        }
                }else if(letter_con == 'E' || letter_con == 'e'){

                    conversion_unit: // <--- CREATE LABEL
                    conv_unit(); // <--- FUNCTION OF FIFTH PROBLEM
                    ulitopee:
                    cout<< dye::light_yellow("\n\n[") << dye::yellow('1') << dye::light_yellow(']') << dye::red("Try again\t\t") << dye::light_yellow('[') << dye::yellow('2') << dye::light_yellow(']') << dye::red("Try another program\t\t") << dye::light_yellow('[') << dye::yellow('3') << dye::light_yellow(']') << 
                    dye::red("Back to main menu\t\t") << dye::light_yellow('[') << dye::yellow('4') << dye::light_yellow(']') << dye::red("Quit\n");
                    cout<< dye::bright_white("\nPick a number: ");
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
                            cout<< dye::yellow("\nThankyou For using the program");
                            exit(0);
                            break;
                        default:
                            goto ulitopee;
                            break;
                        }
                }else if(letter_con == 'F' || letter_con == 'f'){

                    conversion_calendar: // <--- CREATE LABEL
                    conv_calendar_date(); // <--- FUNCTION OF SIXTH PROBLEM
                    ulitopef:
                    cout<< dye::light_yellow("\n\n[") << dye::yellow('1') << dye::light_yellow(']') << dye::red("Try again\t\t") << dye::light_yellow('[') << dye::yellow('2') << dye::light_yellow(']') << dye::red("Try another program\t\t") << dye::light_yellow('[') << dye::yellow('3') << dye::light_yellow(']') << 
                    dye::red("Back to main menu\t\t") << dye::light_yellow('[') << dye::yellow('4') << dye::light_yellow(']') << dye::red("Quit\n");
                    cout<< dye::bright_white("\nPick a number: ");
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
                            cout<< dye::yellow("\nThankyou For using the program");
                            exit(0);
                            break;
                        default:
                            goto ulitopef;
                            break;
                        }
                }else if(letter_con == 'G' || letter_con == 'g'){
                    system("CLS");
                    goto offmenu;
                }else if(letter_con == 'H' || letter_con == 'h'){
                    cout<< dye::yellow("\n\t\t\t\tTHANKYOU FOR USING THE PROGRAM HAVE A NICE DAY AHEAD!");
                    exit(0);
                }else{
                    system("CLS");
                    cin.ignore(512, '\n');
                    goto piliOpe;
                }
            }
        }
// |------------------------------------------------------------------------------------------------------------------------------------|
        else if(num == 5){
            about_us();
            cout << dye::light_yellow("\n\n[") << dye::yellow("1") << dye::light_yellow("] ") << dye::red("Back ") << '|' << dye::light_yellow("\t  [") << dye::yellow("2") << dye::light_yellow("] ") << dye::red("Exit \n");
            decabout:
            cout<< dye::bright_white("\nEnter a number: ");
            cin>>aboutnum;

            switch(aboutnum){
                case 1:
                    system("CLS");
                    goto offmenu;
                    break;
                case 2:
                    cout<< dye::yellow("\n\t\t\t\tTHANKYOU FOR USING THE PROGRAM HAVE A NICE DAY AHEAD!");
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
        cin.clear(); cin.ignore(512, '\n');
        goto offmenu;
    }
    return 0;
}
