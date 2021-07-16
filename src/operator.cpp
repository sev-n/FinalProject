void arithmetic(){
    int x, y;

    cout << "\n\t-->" << dye::yellow(" ARITHMETIC OPERATORS ") << "<--\n" << endl;
    cout << dye::bright_white("\t% -> ") << dye::light_blue("to perform modulus") << endl;
    cout << dye::bright_white("\t* -> ") << dye::light_blue("to perform multiplication") << endl;
    cout << dye::bright_white("\t/ -> ") << dye::light_blue("to perform division") << endl;
    cout << dye::bright_white("\t+ -> ") << dye::light_blue("to perform addition") << endl;
    cout << dye::bright_white("\t- -> ") << dye::light_blue("to perform subtraction") << endl;

    return_xy:
    cout << dye::bright_white("\nEnter two numbers separated by space (x, y): ");
    cin >> x >> y;

    if(x && y){
        cout << dye::aqua("\n\tMod of x % y = ") << (x % y) << endl;
        cout << dye::aqua("\tProduct of x * y = ") << (x * y) << endl;
        cout << dye::aqua("\tQuotient  of x / y = ") << (x / y) << endl;
        cout << dye::aqua("\tAddition of x + y = ") << (x + y) << endl;
        cout << dye::aqua("\tSubtraction of x - y = ") << (x - y) << endl;
    }else if(cin.fail()){
        cin.clear(); cin.ignore(1024, '\n');
        goto return_xy;
    }
}
void relational(){
    int x, y;

    cout << "\n\t-->" << dye::yellow(" RELATIONAL OPERATORS ") <<  "<--\n" << endl;

    cout << "\t<    " << dye::light_blue("less than ") << "-> expression -> x < y" << endl;
    cout << "\t<=   " << dye::light_blue("less than or equal to ") << "-> expression -> x <= y" << endl;
    cout << "\t>    " << dye::light_blue("greater than ") << "-> expression -> x > y" << endl;
    cout << "\t>=   " << dye::light_blue("greater than of equal to ") << "-> expression -> x >= y" << endl;
    cout << "\t==   " << dye::light_blue("equal to ") << "-> expression -> x == y" << endl;
    cout << "\t!=   " << dye::light_blue("not equal to ") << "-> expression -> x != y" << endl;

    return_xy:
    cout << dye::bright_white("\nEnter two numbers separated by space to test (x, y): ");
    cin >> x >> y;

    if(x && y){
        if(x < y) cout << "\n\n\t" << x << dye::aqua(" is less than to ") << y << endl;
        if(x <= y) cout << "\n\t" << x << dye::aqua(" is less than or equal to ") << y << endl;
        if(x > y) cout << "\n\t" << x << dye::aqua(" is greater than to ") << y << endl;
        if(x >= y) cout << "\n\t" << x << dye::aqua(" is greater than or equal to ") << y << endl;
        if(x == y) cout << "\n\t" << x << dye::aqua(" is equal to ") << y << endl;
        if(x != y) cout << "\n\t" << x << dye::aqua(" is not qual to ") << y << endl;
    }else if(cin.fail()){
        cin.clear(); cin.ignore(1024, '\n');
        goto return_xy;
    }
}
void logical(){
    int x, y;

    cout << "\n\t-->" << dye::yellow(" LOGICAL OPERATORS ") << "<--\n" << endl;

    cout << "\t&&   " << dye::light_blue("AND ") << "-> expression -> x && y" << endl;
    cout << "\t||   " << dye::light_blue("OR ") << "-> expression -> x || y" << endl;
    cout << "\t!    " << dye::light_blue("NOT ") << "-> expression -> !x " << endl;

    return_xy:
    cout << dye::bright_white("\nEnter two numbers separated by space to test (x, y): ");
    cin >> x >> y;

    if(x && y){
        if(x < y && y > x)
            cout << "\n\tx < y && y > x  ->" << dye::aqua(" return TRUE if both condition is true otherwise FALSE") << endl;
        if(x < y || y < x)
            cout << "\n\tx < y || y < x  ->" << dye::aqua(" return TRUE if one condition is true otherwise FALSE") << endl;
        if(!(x < y) || y > x)
            cout << "\n\t!(x < y) || y < x  ->" << dye::aqua(" return the opossite if true then FALSE, if false then TRUE") << endl;
    }else if(cin.fail()){
        //system("CLS");
        cin.clear(); cin.ignore(1024, '\n');
        goto return_xy;
    }
}
void convert(){
    float php, usd = 0.021, jpy = 2.25;

    cout << "\n\t-->" << dye::yellow(" CAN CONVERT PHP TO US DOLLAR and JAPANESE YEN ") << "<--\n" << endl;

    return_php:
    cout << dye::bright_white("\nEnter Philippine Peso (php): ");
    cin >> php;

    if(php){
        float to_usd = php * usd;
        float to_jpy = php * jpy;
        cout << "\n\t" << php << dye::aqua(" PHP ") << "= " << to_usd << dye::aqua(" US Dollar") << endl;
        cout << "\t" << php << dye::aqua(" PHP ") << "= " << to_jpy << dye::aqua(" Japanese Yen") << endl;
    }else if(cin.fail()){
        //system("CLS");
        cin.clear(); cin.ignore(1024, '\n');
        goto return_php;
    }

    
}
void conv_unit(){
    double cm, mm, m;

    cout << "\n\t-->" << dye::yellow(" BASIC CONVERTS COMMON UNITS OF MEASSUREMENT ") << "<--\n" << endl;

    return_cm:
    cout << dye::bright_white("Enter a value of centimeter/s to convert to millimeter and meter: ");
    cin >> cm;

    if(cm){
        double to_mm = cm *10;
        double to_m = cm / 100;
        cout << "\n\t"<< cm << dye::aqua(" cm is equal to ") << to_mm << dye::aqua(" milimeter/s") << endl;
        cout << "\t"<< cm << dye::aqua(" cm is equal to ") << to_m << dye::aqua(" meter/s") << endl;
    }else if(cin.fail()){
        //system("CLS");
        cin.clear(); cin.ignore(1024, '\n');
        goto return_cm;
    }

    return_mm:
    cout << dye::bright_white("\nEnter a value of milimeter/s to convert to centimeter and meter: ");
    cin >> mm;

    if(mm){
        double to_cm = mm / 10;
        double to_meter = mm / 1000;
        cout << "\n\t"<< mm << dye::aqua(" mm is equal to ") << to_cm << dye::aqua(" centimeter/s") << endl;
        cout << "\t"<< mm << dye::aqua(" mm is equal to ") << to_meter << dye::aqua(" meter/s") << endl;
    }else if(cin.fail()){
        //system("CLS");
        cin.clear(); cin.ignore(1024, '\n');
        goto return_mm;
    }

    return_m:
    cout << dye::bright_white("\nEnter a value of meter/s to convert to centimeter and milimeter: ");
    cin >> m;

    if(m){
        double to_centimeter = m * 100;
        double to_milimeter = m * 1000;
        cout << "\n\t"<< m << dye::aqua(" meter/s is equal to ") << to_centimeter << dye::aqua(" centimeter/s") << endl;
        cout << "\t"<< m << dye::aqua(" meter/s is equal to ") << to_milimeter << dye::aqua(" milimeter/s") << endl;
    }else if(cin.fail()){
        //system("CLS");
        cin.clear(); cin.ignore(1024, '\n');
        goto return_m;
    }
}

void conv_calendar_date(){
    int days, month, year, num_day;

    cout << "\n\t-->" << dye::yellow(" CONVERTS DAYS TO YEARS, MONTHS AND REMAINING DAYS ") << "<--\n" << endl;

    return_numday:
    cout << dye::bright_white("Enter number of days: ");
    cin >> num_day;
    
    if(num_day){
        year = num_day / 365;
        month = (num_day % 365) / 60;
        days = (num_day % 365) % 60;
        cout << dye::aqua("\n\tYear/s = ") << year << endl;
        cout << dye::aqua("\tMonth/s = ") << month << endl;
        cout << dye::aqua("\tDay/s = ") << days;
    }else if(cin.fail()){
        //system("CLS");
        cin.clear(); cin.ignore(1024, '\n');
        goto return_numday;
    }
}