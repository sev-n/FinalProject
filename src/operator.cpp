using namespace std;

void arithmetic(){
    int x, y;

    cout << "\n\t--> ARITHMETIC OPERATORS <--\n" << endl;
    cout << "\t% -> to perform modulus" << endl;
    cout << "\t* -> to perform multiplication" << endl;
    cout << "\t/ -> to perform division" << endl;
    cout << "\t+ -> to perform addition" << endl;
    cout << "\t- -> to perform subtraction" << endl;

    return_xy:
    cout << "\nEnter two numbers separated by space (x, y): ";
    cin >> x >> y;

    if(x && y){
        cout << "\n\tMod of x % y = " << (x % y) << endl;
        cout << "\tProduct of x * y = " << (x * y) << endl;
        cout << "\tQuotient  of x / y = " << (x / y) << endl;
        cout << "\tAddition of x + y = " << (x + y) << endl;
        cout << "\tSubtraction of x - y = " << (x - y) << endl;
    }else if(cin.fail()){
        cin.clear(); cin.ignore(1024, '\n');
        goto return_xy;
    }
}
void relational(){
    int x, y;

    cout << "\n\t--> RELATIONAL OPERATORS <--\n" << endl;

    cout << "\t<    less than -> expression -> x < y" << endl;
    cout << "\t<=   less than or equal to -> expression -> x <= y" << endl;
    cout << "\t>    greater than -> expression -> x > y" << endl;
    cout << "\t>=   greater than of equal to -> expression -> x >= y" << endl;
    cout << "\t==   equal to -> expression -> x == y" << endl;
    cout << "\t!=   not equal to -> expression -> x != y" << endl;

    return_xy:
    cout << "\nEnter two numbers separated by space to test (x, y): ";
    cin >> x >> y;

    if(x && y){
        if(x < y) cout << "\n\n\t" << x << " is less than to " << y << endl;
        if(x <= y) cout << "\n\t" << x << " is less than or equal to " << y << endl;
        if(x > y) cout << "\n\t" << x << " is greater than to " << y << endl;
        if(x >= y) cout << "\n\t" << x << " is greater than or equal to " << y << endl;
        if(x == y) cout << "\n\t" << x << " is equal to " << y << endl;
        if(x != y) cout << "\n\t" << x << " is not qual to " << y << endl;
    }else if(cin.fail()){
        cin.clear(); cin.ignore(1024, '\n');
        goto return_xy;
    }
}
void logical(){
    int x, y;

    cout << "\n\t--> LOGICAL OPERATORS <--\n" << endl;

    cout << "\t&&   AND -> expression -> x && y" << endl;
    cout << "\t||   OR -> expression -> x || y" << endl;
    cout << "\t!    NOT -> expression -> !x " << endl;

    return_xy:
    cout << "\nEnter two numbers separated by space to test (x, y): ";
    cin >> x >> y;

    if(x && y){
        if(x < y && y > x)
            cout << "\n\tx < y && y > x  -> return TRUE if both condition is true otherwise FALSE" << endl;
        if(x < y || y < x)
            cout << "\n\tx < y || y < x  -> return TRUE if one condition is true otherwise FALSE" << endl;
        if(!(x < y) || y > x)
            cout << "\n\t!(x < y) || y < x  -> return the opossite if true then FALSE, if false then TRUE" << endl;
    }else if(cin.fail()){
        cin.clear(); cin.ignore(1024, '\n');
        goto return_xy;
    }
}
void convert(){
    float php, usd = 0.020, jpy = 2.20;

    cout << "\n\t--> CAN CONVERT PHP TO US DOLLAR and JAPANESE YEN <--\n" << endl;

    return_php:
    cout << "\nEnter Philippine Peso (php): ";
    cin >> php;

    if(php){
        float to_usd = php * usd;
        float to_jpy = php * jpy;
        cout << "\n\t" << php << " PHP = " << to_usd << " US Dollar" << endl;
        cout << "\t" << php << " PHP = " << to_jpy << " Japanese Yen" << endl;
    }else if(cin.fail()){
        cin.clear(); cin.ignore(1024, '\n');
        goto return_php;
    }
}
void conv_unit(){
    double cm, mm, m;

    cout << "\n\t--> BASIC CONVERTS COMMON UNITS OF MEASSUREMENT <--\n" << endl;

    return_cm:
    cout << "Enter a value of centimeter/s to convert to millimeter and meter: ";
    cin >> cm;

    if(cm){
        double to_mm = cm *10;
        double to_m = cm / 100;
        cout << "\n\t"<< cm << " cm is equal to " << to_mm << " milimeter/s" << endl;
        cout << "\t"<< cm << " cm is equal to " << to_m << " meter/s" << endl;
    }else if(cin.fail()){
        cin.clear(); cin.ignore(1024, '\n');
        goto return_cm;
    }

    return_mm:
    cout << "\nEnter a value of milimeter/s to convert to centimeter and meter: ";
    cin >> mm;

    if(mm){
        double to_cm = mm / 10;
        double to_meter = mm / 1000;
        cout << "\n\t"<< mm << " mm is equal to " << to_cm << " centimeter/s" << endl;
        cout << "\t"<< mm << " mm is equal to " << to_meter << " meter/s" << endl;
    }else if(cin.fail()){
        cin.clear(); cin.ignore(1024, '\n');
        goto return_mm;
    }

    return_m:
    cout << "\nEnter a value of meter/s to convert to centimeter and milimeter: ";
    cin >> m;

    if(m){
        double to_centimeter = m * 100;
        double to_milimeter = m * 1000;
        cout << "\n\t"<< m << " meter/s is equal to " << to_centimeter << " centimeter/s" << endl;
        cout << "\t"<< m << " meter/s is equal to " << to_milimeter << " milimeter/s" << endl;
    }else if(cin.fail()){
        cin.clear(); cin.ignore(1024, '\n');
        goto return_m;
    }
}
void conv_calendar_date(){
    int days, month, year, num_day;

    cout << "\n\t--> CONVERTS DAYS TO YEARS, MONTHS AND REMAINING DAYS <--\n" << endl;

    return_numday:
    cout << "Enter number of days: ";
    cin >> num_day;
    
    if(num_day){
        year = num_day / 365;
        month = (num_day % 365) / 60;
        days = (num_day % 365) % 60;
        cout << "\n\tYear/s = " << year << endl;
        cout << "\tMonth/s = " << month << endl;
        cout << "\tDay/s = " << days;
    }else if(cin.fail()){
        cin.clear(); cin.ignore(1024, '\n');
        goto return_numday;
    }
}
