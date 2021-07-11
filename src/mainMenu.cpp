#include "color.hpp" // text color
#include <stdlib.h>
#include <iostream>
#include <string>
using namespace std;

void menu(string name, string course){
    
    cout<< dye::light_blue("\t\t===========================================================================\n");
    cout<< dye::grey("\t\t\tNAME: ") << dye::white(name) << dye::grey("\t\t\t\tCOURSE: ") << dye::white(course);
    cout<< dye::light_blue("\n\t\t===========================================================================\n\n");

    cout<<"\n\t\t " << dye::red("   WARNING") << dye::bright_white(": IF INVALID INPUT IS ENTERED THE MAIN MENU WILL JUST RELOAD\n\n");
    cout<<"\n\t\t\t\t\t\t " << dye::yellow("WELCOME!")<< "\n";

    cout<< dye::light_blue("\t===========================================================================================\n");
    cout<< dye::light_blue("\t||---------------------*************") << dye::yellow("CHOOSE ONE TOPIC") << dye::light_blue("**************-----------------------||\n");
    cout<< dye::light_blue("\t||                                                                                       ||\n");
    cout<< dye::light_blue("\t||                                                                                       ||\n");
    cout<< dye::light_blue("\t||                                                                                       ||\n");
    cout<< dye::light_blue("\t||") << dye::bright_white("\t\t\t\t\t    | \t\t\t\t\t\t ") << dye::light_blue("||\n");
    cout<< dye::light_blue("\t||\t\t\t     ") << dye::light_yellow("[") << dye::yellow("1") << dye::light_yellow("] ") << dye::aqua("LOOPING ") << dye::bright_white("   |\t ") << dye::light_yellow("[") << dye::yellow("2") << dye::light_yellow("] ") << dye::aqua("CONDITIONAL\t\t\t ") << dye::light_blue("||\n");
    cout<< dye::light_blue("\t||") << dye::bright_white(" \t\t       _____________________|_____________________\t\t\t ") << dye::light_blue("||\n");
    cout<< dye::light_blue("\t||") << dye::bright_white("\t\t\t\t\t    | \t\t\t\t\t\t ") << dye::light_blue("||\n");
    cout<< dye::light_blue("\t||\t\t\t     ") << dye::light_yellow("[") << dye::yellow("3") << dye::light_yellow("] ") << dye::aqua("ARRAY\t ") << dye::bright_white("   |\t ")<< dye::light_yellow("[") << dye::yellow("4") << dye::light_yellow("] ") << dye::aqua("OPERATOR\t\t\t\t ") << dye::light_blue("||\n");
    cout<< dye::light_blue("\t||") << dye::bright_white("\t\t\t\t\t    | \t\t\t\t\t\t ") << dye::light_blue("||\n");
    cout<< dye::light_blue("\t||                                                                                       ||\n");
    cout<< dye::light_blue("\t||\t\t\t\t      ") << dye::light_yellow("[") << dye::yellow("5") << dye::light_yellow("] ") << dye::aqua("About Us\t\t\t\t\t ") << dye::light_blue("||\n");
    cout<< dye::light_blue("\t||                                                                                       ||\n");
    cout<< dye::light_blue("\t||---------------------*******************************************-----------------------||\n");
    cout<< dye::light_blue("\t===========================================================================================\n");

}