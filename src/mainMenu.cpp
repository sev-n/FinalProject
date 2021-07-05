#include "color.hpp" // text color
#include <stdlib.h>
#include <iostream>
#include <string>
using namespace std;

void menu(string name, string course){
    
    system("COLOR 3");
    cout<<"\t\t===========================================================================";
    cout<<"\n\t\t\t\t\t\t" << dye::yellow("!!WELCOME!!")<< "\n";
    cout<<"\t\t\tNAME: "<< dye::yellow(name) << "\t\t\t\tCOURSE: "<< dye::yellow(course);
    cout<<"\n\t\t===========================================================================\n\n";


    cout<<"\t===========================================================================================\n";
    cout<<"\t||---------------------************* CHOOSE 1 TOPIC **************-----------------------||\n";
    cout<<"\t||                                                                                       ||\n";
    cout<<"\t||                                                                                       ||\n";
    cout<<"\t||                                                                                       ||\n";
    cout<<"\t||                                          |                                            ||\n";
    cout<<"\t||\t\t\t     " << dye::yellow("[1] ") << "LOOPING    |\t " << dye::yellow("[2] ") << "CONDITIONAL\t\t\t ||\n";
    cout<<"\t||                     _____________________|_____________________                       ||\n";
    cout<<"\t||                                          |                                            ||\n";
    cout<<"\t||\t\t\t     " << dye::yellow("[3] ") << "ARRAY      |    " << dye::yellow("[4] ") << "OPERATORS \t\t\t\t ||\n";
    cout<<"\t||                                          |                                            ||\n";
    cout<<"\t||                                                                                       ||\n";
    cout<<"\t||                                   [A] About us                                        ||\n";
    cout<<"\t||                                                                                       ||\n";
    cout<<"\t||---------------------------------------------------------------------------------------||\n";
    cout<<"\t===========================================================================================";

}