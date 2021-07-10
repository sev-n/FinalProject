#include <iostream>
#include <string>
#include <stdlib.h>
#include "src/functions.h"
using namespace std;


int main(){
    int num;
    int aboutnum;
    int conc; // <-- after trying the program
    char letter_con; // <-----  program choices
    string name, course;

    system("COLOR 6");

    cout<<"Enter your name: ";
    getline(cin, name);
    cout<<"Enter your course: ";
    getline(cin, course);
    system("CLS");

    offmenu:
    menu(name, course);

    loop:
    cout<<"\n\t\t\t\t\tEnter your choice: ";
    cin>>num;
    //system("PAUSE");
    system("CLS");

    // NEW UPDATE GUMAMIT AKO CCTYPE LIBRARY PARA MA-ACCESS NATIN ISDIGIT() FUNCTION

    if(num){
        if(num == 1){
            piliLoop: // <--- CREATE A LABEL
            cout<<"\t\t===========================================================================\n";
            cout<<"\t\t\t\t\t--YOU CHOSE LOOPING TOPICS--\n";
            cout<<"\n\t\t\t\t\tPROGRAMS IN LOOPING SECTION\n";
            cout<<"\n\t\t===========================================================================\n\n";

            cout<<"\t[A] ASTERISK PYRAMID\t\t\t[B] SUM AND FACTORIAL\t\t[C] REVERSE A NUMBER\n\n\t[D] MULTIPLICATION TABLE OF N \
        [E]COUNT DIGITS IN NUMBERS\t[F] FIBONACCI SERIES \
        \n\n\t[G] BACK TO MAIN MENU\t\t\t[H] Exit\n\n";

            cout<<"Enter letter (A/B/C/D/E/F/G/H): ";
            cin>>letter_con;

            if(letter_con){
                if(letter_con == 'a' || letter_con == 'A'){

                    pyra: // <---- GOTO PYRA
                    pyramid(); // <---- FUNCTION OF PYRAMID
                    ulitloopa:
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
                            goto ulitloopa;
                            break;
                    }
                }else if(letter_con == 'b' || letter_con == 'B'){

                    sumfact: // <--- GOTO SUMFACT
                    sumfac(); // <--- FUNCTION
                    ulitloopb:
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
                            goto ulitloopb;
                            break;
                    }
                }else if(letter_con == 'c' || letter_con == 'C'){

                    rev: // <--- CREATE LABEL
                    reverse(); // <--- FUNCTION OF REVERSE
                    ulitloopc:
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
                            goto ulitloopc;
                            break;
                    }
                }else if(letter_con == 'd' || letter_con == 'D'){

                    multiTable: // <--- CREATE LABEL
                    multi_table(); // <--- FUNCTION OF MultiTable
                    ulitloopd:
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
                            goto ulitloopd;
                            break;
                    }
                }else if(letter_con == 'e' || letter_con == 'E'){

                    count_digit: // <--- CREATE LABEL
                    count(); // <--- FUNCTION OF COUNT
                    ulitloope:
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
                            goto ulitloope;
                            break;
                    }
                }else if(letter_con == 'f' || letter_con == 'F'){

                    fibo: // <--- CREATE LABEL
                    fibo_terms(); // <--- FUNCTION OF FIBONACCI
                    ulitloopf:
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
                            goto ulitloopf;
                            break;
                    }
                }else if(letter_con == 'G' || letter_con == 'g'){
                    system("CLS");
                    goto offmenu;
                }else if(letter_con == 'H' || letter_con == 'h'){
                    cout<<"\n\t\t\t\tTHANKYOU FOR USING THE PROGRAM HAVE A NICE DAY AHEAD!";
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
            cout<<"\t\t===========================================================================\n";
            cout<<"\t\t\t\t\t--YOU CHOSE CONDITIONAL--\n";
            cout<<"\n\t\t\t\t    PROGRAMS IN CONDITIONAL STATEMENT\n";
            cout<<"\n\t\t===========================================================================\n\n";

            cout<<"\t[A] EQUIVALENT GRADE\t\t[B] TEMPERATURE DETECTOR\t[C] WEEKLY SALARY\n\n\t[D] REQUIRED AGE TO VOTE \
    [E] SIMPLE CALCULATOR\t\t[F] IDENTIFY VOWEL \
        \n\n\t[G] BACK TO MAIN MENU\t\t[H] Exit\n\n" << endl;

            cout<<"Enter letter (A/B/C/D/E/F/G/H): ";
            cin>>letter_con;
            if(letter_con){
                if(letter_con == 'A' || letter_con == 'a'){

                    equi: // <--- goto equivalent grade
                    grade_equi(); // <--- FUNCTION OF GRADE EQUIVALENT
                    ulitcondia:
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
                            goto ulitcondia;
                            break;
                    }
                }else if(letter_con == 'b' || letter_con == 'B'){

                    tmprtr: // <---- goto temperature detector
                    temper(); // <--- FUNCTION OF TEMPERATURE DETECTOR
                    ulitcondib:
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
                            goto ulitcondib;
                            break;
                    }
                }else if(letter_con == 'c' || letter_con == 'C'){

                    weeklySalary: // <--- GOTO WEEKLY SALARY
                    work_salary(); // <----- FUNCTION OF WEEKLY SALARY
                    ulitcondic:
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
                            goto ulitcondic;
                            break;
                    }
                }else if(letter_con == 'd' || letter_con == 'D'){

                    vote: // <--- CREATE LABEL
                    vote_reg(); // <----- FUNCTION FOR VOTE
                    ulitcondid:
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
                            goto ulitcondid;
                            break;
                    }
                }else if(letter_con == 'e' || letter_con == 'E'){

                    calcu: // <--- CREATE LABEL
                    calcu(); // <----- FUNCTION FOR CALCULATOR
                    ulitcondie:
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
                            goto ulitcondie;
                            break;
                    }
                }else if(letter_con == 'f' || letter_con == 'F'){

                    find_vowel: // <--- CREATE LABEL
                    vowel(); // <----- FUNCTION FOR VOWEL
                    ulitcondif:
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
                            goto ulitcondif;
                            break;
                    }
                }else if(letter_con == 'G' || letter_con == 'g'){
                    system("CLS");
                    goto offmenu;
                }else if(letter_con == 'H' || letter_con == 'h'){
                    cout<<"\n\t\t\t\tTHANKYOU FOR USING THE PROGRAM HAVE A NICE DAY AHEAD!";
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
            cout<<"\t\t===========================================================================\n";
            cout<<"\t\t\t\t\t--YOU CHOSE ARRAY--\n";
            cout<<"\n\t\t\t\t    PROGRAMS IN ARRAY USING ONE-DIMENSION\n";
            cout<<"\n\t\t===========================================================================\n\n";
            cout<<"\t[A] FACTORIAL OF NUMBER\t\t[B] SUM OF N\t\t\t[C] IDENTIFY IF POSTIVE OR NEGATIVE\n\n\t[D] LOWEST AND HIGHEST NUMBER \
    [E] COUNT HOW MANY APPEARED\t[F] FIND SPECIFIC NAME\
        \n\n\t[G] BACK TO MAIN MENU\t\t[H] Exit\n\n"<< endl;

            cout<<"Enter letter (A/B/C/D/E/F/G/H): ";
            cin>>letter_con;
            if(letter_con){
                if(letter_con == 'A' || letter_con == 'a'){

                    arrFac: // <--- CREATE LABEL FOR FIRST PROBELM IN ARRAY
                    FacArr(); // <--- FUNCTION OF FACTORIAL OF AN ARRAY
                    ulitarra:
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
                            goto ulitarra;
                            break;
                        }
                }else if(letter_con == 'B' || letter_con == 'b'){

                    arrSum: // <--- CREATE LABEL
                    sumofN(); // <--- FUNCTION OF SUM OF AN ARRAY
                    ulitarrb:
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
                            goto ulitarrb;
                            break;
                        }
                }else if(letter_con == 'C' || letter_con == 'c'){

                    arrposNneg: // <--- CREATE LABEL
                    posNneg(); // <--- FUNCTION OF POSTIVE OF NEGATIVE NUMBERS OF AN ARRAY
                    ulitarrc:
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
                            goto ulitarrc;
                            break;
                        }
                }else if(letter_con == 'D' || letter_con == 'd'){

                    arr_low_high: // <--- CREATE LABEL
                    low_high(); // <--- FUNCTION OF LOW/HIGH
                    ulitarrd:
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
                            goto ulitarrd;
                            break;
                        }
                }else if(letter_con == 'E' || letter_con == 'e'){

                    arr_occur: // <--- CREATE LABEL
                    occur_n(); // <--- FUNCTION OF OCCUR
                    ulitarre:
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
                            cout<<"\n(WARNING: Invalid Input)\n";
                            goto ulitarre;
                            break;
                        }
                }else if(letter_con == 'F' || letter_con == 'f'){

                    arr_find_name: // <--- CREATE LABEL
                    find_name(); // <--- FUNCTION OF FIND
                    ulitarrf:
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
                            goto ulitarrf;
                            break;
                        }
                }else if(letter_con == 'G' || letter_con == 'g'){
                    system("CLS");
                    goto offmenu;
                }else if(letter_con == 'H' || letter_con == 'h'){
                    cout<<"\n\t\t\t\tTHANKYOU FOR USING THE PROGRAM HAVE A NICE DAY AHEAD!";
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
            cout<<"\t\t===========================================================================\n";
            cout<<"\t\t\t\t\t--YOU CHOSE OPERATOR--\n";
            cout<<"\n\t\t\t\t    PROGRAMS WITH OPERATORS \n";
            cout<<"\n\t\t===========================================================================\n\n";
            cout<<"\t[A] ARITHMETIC OPERATORS\t[B] RELATIONAL OPERATORS\t[C] LOGICAL OPERATORS\n\n\t[D] CURRENCY CONVERTER \
        \t[E] CONVERT UNITS OF MEASUREMENT  [F] CALENDAR DATE CONVERTER\
        \n\n\t[G] BACK TO MAIN MENU\t\t[H] Exit\n\n"<< endl;

            cout<<"Enter letter (A/B/C/D/E/F/G/H): ";
            cin>>letter_con;
            if(letter_con){
                if(letter_con == 'A' || letter_con == 'a'){

                    arith: // <--- CREATE LABEL FOR FIRST PROBELM IN OPERATOR
                    arithmetic(); // <--- FUNCTION OF FIRST PROBLEM
                    ulitopea:
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
                            goto ulitopea;
                            break;
                        }
                }else if(letter_con == 'B' || letter_con == 'b'){

                    relational: // <--- CREATE LABEL
                    relational(); // <--- FUNCTION OF SECOND PROBLEM
                    ulitopeb:
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
                            goto ulitopeb;
                            break;
                        }
                }else if(letter_con == 'C' || letter_con == 'c'){

                    logical: // <--- CREATE LABEL
                    logical(); // <--- FUNCTION OF THIRD PROBLEM
                    ulitopec:
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
                            goto ulitopec;
                            break;
                        }
                }else if(letter_con == 'D' || letter_con == 'd'){

                    convert: // <--- CREATE LABEL
                    convert(); // <--- FUNCTION OF FOURTH PROBLEM
                    ulitoped:
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
                            goto ulitoped;
                            break;
                        }
                }else if(letter_con == 'E' || letter_con == 'e'){

                    conversion_unit: // <--- CREATE LABEL
                    conv_unit(); // <--- FUNCTION OF FIFTH PROBLEM
                    ulitopee:
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
                            goto ulitopee;
                            break;
                        }
                }else if(letter_con == 'F' || letter_con == 'f'){

                    conversion_calendar: // <--- CREATE LABEL
                    conv_calendar_date(); // <--- FUNCTION OF SIXTH PROBLEM
                    ulitopef:
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
                            goto ulitopef;
                            break;
                        }
                }else if(letter_con == 'G' || letter_con == 'g'){
                    system("CLS");
                    goto offmenu;
                }else if(letter_con == 'H' || letter_con == 'h'){
                    cout<<"\n\t\t\t\tTHANKYOU FOR USING THE PROGRAM HAVE A NICE DAY AHEAD!";
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
            cout<<"\n\n[1] BACK | [2] EXIT"<<endl;
            decabout:
            cout<<"\nEnter a number: ";
            cin>>aboutnum;

            switch(aboutnum){
                case 1:
                    system("CLS");
                    goto offmenu;
                    break;
                case 2:
                    cout<<"\n\t\t\t\tTHANKYOU FOR USING THE PROGRAM HAVE A NICE DAY AHEAD!";
                    exit(0);
                    break;
                default:
                    goto decabout;
                    break;
            }
        }
        else if(num > 5){                       // tol may binago ko sa part na to, kase naeencounter ko yung blinking if mag enter ng string
            system("CLS");                      // then sinama ko na rin yung input number greater than 5 narinig ko kase yun nung nakaraan HAHAHA
            goto offmenu;
        }
    }else if(cin.fail()){
        cin.clear(); cin.ignore(512, '\n');
        goto offmenu;
    }
    return 0;
}
