//#include <iostream>
//#include <string>
//using namespace std;

void FacArr(){
    int number, factorial = 1;

    return_number:
    cout << "Enter a number: ";
    cin >> number;

    int myArray[number];

    if(number){
        for(int i = 1; i <= number; i++){
            myArray[i] = i;
            myArray[number] = myArray[i];
        }
    }else if(cin.fail()){
        //system("CLS");
        cin.clear(); cin.ignore(1024, '\n');
        goto return_number;
    }
    if(number >= 1){ 
        for(int j = 1; j <= number; j++) factorial *= myArray[j];
        cout << "The Factorial of N is: " << factorial;
    }
}

void sumofN(){
    int number, sum = 0;

    cout << "THE INPUTTED VALUE WILL REPEAT IF YOU ENTERED INVALID VALUES" << endl;

    return_number:
    cout << "Enter a size in number: ";
    cin >> number;

    if(number) ;
    else if(cin.fail()){
        cin.clear(); cin.ignore(1024, '\n');
        goto return_number;
    }

    int array[number];
    
    return_int:
    cout << "Enter a integers: ";
    for(int i = 0; i < number; i++){
        cin >> array[i];
        if(array[i]){
            ;
        }else if(cin.fail()){
            cin.clear(); cin.ignore(1024, '\n');
            cout << "Invalid input, Please enter again\n" << endl;
            goto return_int;
        }
    }

    for(int j = 0; j < number; j++) sum += array[j];
    cout << "The sum of N is: " << sum;
}
void posNneg(){
    int number[5];
    
    cout << "IDENTIFY IF POSITIVE OR NEGATIVE NUMBERS\n" << endl;
    cout << "THE INPUTTED VALUE WILL REPEAT IF YOU ENTERED INVALID VALUES" << endl;

    return_arr:
    cout << "Enter a Five Number, Must be Integer: ";
    for(int i = 0; i < 5; i++){
        cin >> number[i];
        if(number[i]) ;
        else if(cin.fail()){
            cin.clear(); cin.ignore(1024, '\n');
            cout << "Invalid input, Please enter again\n" << endl;
            goto return_arr;
        }
    }

    cout << "Positive Number/s: ";
    for(int j = 0; j < 5; j++){
        if(number[j] >= 0) cout << " " <<number[j];
    }
    cout << "\nNegative Number/s: ";
    for(int x = 0; x < 5; x++){
        if(number[x] < 0) cout << " " << number[x];
    }
}

void low_high(){
    int number;

    cout << "\n\t\t\t\t--> FIND LOWEST AND HIGHEST NUMBER <--\n" << endl;
    cout << "THE INPUTTED VALUE WILL REPEAT IF YOU ENTERED INVALID VALUES" << endl;

    return_number:
    cout << "Enter array size: ";
    cin >> number;

    if(number) ;
    else if(cin.fail()){
        cin.clear(); cin.ignore(1024, '\n');
        goto return_number;
    }
    int arr[number];

    return_arr:
    cout << "Enter a number: ";
    for(int i = 0; i < number; i++){
        cin >> arr[i];
        if(arr[i]) ;
        else if(cin.fail()){
            cin.clear(); cin.ignore(1024, '\n');
            cout << "Invalid input, Please enter again\n" << endl;
            goto return_arr;
        }
    }

    for(int i = 1; i < number; i++){
        if(arr[0] > arr[i]) arr[0] = arr[i]; //first element = lowest number
    }
    cout << "The lowest value is " << arr[0] << endl;

    for(int j = 1; j < number; j++){
        if(arr[0] < arr[j]) arr[0] = arr[j]; //first element = highest number
    }
    cout << "The highest value is " << arr[0] << endl;
}

void occur_n(){
    int number, to_search, occur = 0, myArray[10];

    cout << "\n\t\t\t\t--> COUNT OCCURRENCE/S OF N <--\n" << endl;
    cout << "THE INPUTTED VALUE WILL REPEAT IF YOU ENTERED INVALID VALUES" << endl;

    return_number:
    cout << "Enter 10 numbers: ";
    for(int i = 0; i < 10; ++i){
        cin >> myArray[i];
        if(myArray[i]) ;
        else if(cin.fail()){
            cin.clear(); cin.ignore(1024, '\n');
            goto return_number;
        }
    }
    return_search:
    cout << "Enter a number to search: ";
    cin >> to_search;

    if(to_search) for(int x = 0; x < 10; x++) if(myArray[x] == to_search) occur = occur + 1;
    else if(cin.fail()){
        cin.clear(); cin.ignore(1024, 'n');
        goto return_search;
    }
    cout << "Occurrence/s: " << occur;
}

void find_name(){
    bool is_found = false;
    string name_search;

    string common_names[20] = {"james", "robert", "john", "michael", "william", "david", "richard", "joseph",
    "thomas", "charles", "christopher", "daniel", "matthew", "anthony", "mark",
    "donald", "steven", "paul", "andrew", "joshua"};

    cout << "\n\t\t\t\t--> DETECT NAMES WHETHER IT IS COMMON OR NOT <--\n" << endl;

    cout << "\tEnter your name: ";
    cin >> name_search;

    for(int x = 0; x != 20; x++){
        if(common_names[x] == name_search){
            is_found = true;
            break;
        }else{
            is_found = false;
        }
    }
    if(is_found == true) cout << "\n\t\tYour name: " << name_search << " is in the top 20 common names of all time" << endl;
    else cout << "\n\t\tYour name: " << name_search << " is not on the list" << endl;

    cout << "\n\t\tTOP 20 COMMON NAMES\n" << endl;
    for(int i = 0; i < 20; i++){
        cout << "\t";
        cout << common_names[i] << "";
        if((i + 1) % 5 == 0) cout << endl;
    }
}