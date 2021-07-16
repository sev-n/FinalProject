void remove(){
    int size_num, delete_n, count=0;

    cout << "\n\t-->" << dye::yellow(" REMOVE ELEMENT ") << "<--\n"<< endl;

    return_size:
    cout << dye::bright_white("\nEnter array size: ");
    cin >> size_num;

    if(size_num) ;
    else if(cin.fail()){
        cin.clear(); cin.ignore(1024, '\n');
        goto return_size;
    }

    int arr[size_num];

    return_int:
    cout << dye::bright_white("\nEnter array elements\n");
    for(int i = 0; i < size_num; i++){
        cout << dye::grey(">> ");
        cin >> arr[i];
        if(arr[i]){
            ;
        }else if(cin.fail()){
            cin.clear(); cin.ignore(1024, '\n');
            cout << dye::red("Invalid input") << ", Please enter again\n" << endl;
            goto return_int;
        }
    }
    return_del:
    cout << dye::bright_white("Enter element to be delete: ");
    cin >> delete_n;

    if(delete_n) ;
    else if(cin.fail()){
        cin.clear(); cin.ignore(1024, '\n');
        goto return_del;
    }
    for(int i = 0; i < size_num; i++){
        if(arr[i] == delete_n){
            for(int j = i; j < (size_num-1); j++){
                arr[j] = arr[j+1];
            }
            count++;
            break;
        }
    }
    if(count == 0){
        cout << dye::aqua("\n\tElement not found\n");
    }else{
        cout << dye::aqua("\n\tUpdated array ") << dye::light_blue(">> ");
        for(int i = 0; i < (size_num-1); i++) cout << arr[i] << " ";
    }
}
void sumofN(){
    int number, sum = 0;

    cout << "\n\t-->" << dye::yellow(" SUM OF NUMBERS IN ARRAY ") << "<--\n" << endl;
    cout << "\n\tTHE " << dye::red("INPUTTED") << " VALUE WILL REPEAT IF YOU ENTERED INVALID VALUES" << endl;

    return_number:
    cout << dye::bright_white("\nEnter a size in number: ");
    cin >> number;

    if(number) ;
    else if(cin.fail()){
        cin.clear(); cin.ignore(1024, '\n');
        goto return_number;
    }

    int array[number];
    
    return_int:
    cout << dye::bright_white("\nEnter a integers\n");
    for(int i = 0; i < number; i++){
        cout << dye::grey(">> ");
        cin >> array[i];
        if(array[i]){
            ;
        }else if(cin.fail()){
            cin.clear(); cin.ignore(1024, '\n');
            cout << dye::red("Invalid input") << ", Please enter again\n" << endl;
            goto return_int;
        }
    }

    for(int j = 0; j < number; j++) sum += array[j];
    cout << dye::aqua("\tThe sum of N is") << ": " << sum;
}
void posNneg(){
    int number[5];
    
    cout << "\n\t-->" << dye::yellow(" IDENTIFY IF POSITIVE OR NEGATIVE NUMBERS ") << "<--\n" << endl;
    cout << "\n\tTHE " << dye::red("INPUTTED") << " VALUE WILL REPEAT IF YOU ENTERED INVALID VALUES" << endl;

    return_arr:
    cout << dye::bright_white("\nEnter a Five Number, Must be Integer\n");
    for(int i = 0; i < 5; i++){
        cout << dye::grey(">> ");
        cin >> number[i];
        if(number[i]) ;
        else if(cin.fail()){
            cin.clear(); cin.ignore(1024, '\n');
            cout << dye::red("Invalid input") << ", Please enter again\n" << endl;
            goto return_arr;
        }
    }

    cout << dye::aqua("\n\tPositive Number/s: ");
    for(int j = 0; j < 5; j++){
        if(number[j] >= 0) cout << " " <<number[j];
    }
    cout << dye::aqua("\n\tNegative Number/s: ");
    for(int x = 0; x < 5; x++){
        if(number[x] < 0) cout << " " << number[x];
    }
}
void low_high(){
    int number;

    cout << "\n\t-->" << dye::yellow(" FIND LOWEST AND HIGHEST NUMBER ") << "<--\n" << endl;
    cout << "\n\tTHE " << dye::red("INPUTTED") << " VALUE WILL REPEAT IF YOU ENTERED INVALID VALUES" << endl;

    return_number:
    cout << dye::bright_white("\nEnter array size: ");
    cin >> number;

    if(number) ;
    else if(cin.fail()){
        cin.clear(); cin.ignore(1024, '\n');
        goto return_number;
    }
    int arr[number];

    return_arr:
    cout << "Enter a number\n";
    for(int i = 0; i < number; i++){
        cout << dye::grey(">> ");
        cin >> arr[i];
        if(arr[i]) ;
        else if(cin.fail()){
            cin.clear(); cin.ignore(1024, '\n');
            cout << dye::red("Invalid input") << ", Please enter again\n" << endl;
            goto return_arr;
        }
    }
    for(int i = 1; i < number; i++){
        if(arr[0] > arr[i]) arr[0] = arr[i]; //first element = lowest number
    }
    cout << dye::aqua("\n\tThe lowest value is ") << arr[0] << endl;

    for(int j = 1; j < number; j++){
        if(arr[0] < arr[j]) arr[0] = arr[j]; //first element = highest number
    }
    cout << dye::aqua("\tThe highest value is ") << arr[0] << endl;
}
void occur_n(){
    int number, to_search, occur = 0, myArray[10];

    cout << "\n\t-->" << dye::yellow(" COUNT OCCURRENCE/S OF N ") << "<--\n" << endl;
    cout << "\n\tTHE " << dye::red("INPUTTED") << " VALUE WILL REPEAT IF YOU ENTERED INVALID VALUES" << endl;

    return_number:
    cout << dye::bright_white("\nEnter 10 numbers\n");
    for(int i = 0; i < 10; ++i){
        cout << dye::grey(">> ");
        cin >> myArray[i];
        if(myArray[i]) ;
        else if(cin.fail()){
            cin.clear(); cin.ignore(1024, '\n');
            goto return_number;
        }
    }
    return_search:
    cout << dye::bright_white("Enter a number to search: ");
    cin >> to_search;

    if(to_search) for(int x = 0; x < 10; x++) if(myArray[x] == to_search) occur = occur + 1;
    else if(cin.fail()){
        cin.clear(); cin.ignore(1024, 'n');
        goto return_search;
    }
    cout << dye::aqua("\n\tOccurrence/s: ") << occur;
}

void find_name(){
    bool is_found = false;
    string name_search;

    string common_names[20] = {"james", "robert", "john", "michael", "william", "david", "richard", "joseph",
    "thomas", "charles", "christopher", "daniel", "matthew", "anthony", "mark",
    "donald", "steven", "paul", "andrew", "joshua"};

    cout << "\n\t-->" << dye::yellow(" DETECT NAMES WHETHER IT IS COMMON OR NOT ") << "<--\n" << endl;

    cout << dye::bright_white("Enter your name: ");
    cin >> name_search;

    for(int x = 0; x != 20; x++){
        if(common_names[x] == name_search){
            is_found = true;
            break;
        }else{
            is_found = false;
        }
    }
    if(is_found == true) cout << dye::aqua("\n\tYour name: ") << name_search << " is in the top 20 common names of all time" << endl;
    else cout << dye::aqua("\n\t\tYour name: ") << name_search << " is not on the list" << endl;

    cout << dye::light_blue("\n\tTOP 20 COMMON NAMES\n") << endl;
    for(int i = 0; i < 20; i++){
        cout << "\t";
        cout << common_names[i] << "";
        if((i + 1) % 5 == 0) cout << endl;
    }
}