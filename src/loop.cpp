using namespace std;

void pyramid(){
	int num, i, j;
	
    cout << "\n\t*** ASTERISK PYRAMID ***\n" << endl;
	return_num:
    cout << "Enter a number: ";
	cin >> num;

    if(num) ;
    else if(cin.fail()){
        cin.clear(); cin.ignore(1024, '\n');
        goto return_num;
    }
	cout << "\n";
	for(i = 1; i<=num; i++){
        cout << "\t";
		for(j = 1; j<=num-i; j++) cout << " ";
		for(j = 1; j<=2*i-1; j++) cout << "*";
		cout << "\n";
	}
}
void sumfac(){
	int num, i, sum = 0, f = 1, sumSquared = 0;
	
    cout << "\n\t*** SUM OF N | SUM OF THE SQUARED OF N | FACTORIAL OF N ***\n" << endl;
	return_num:
    cout << "Enter a number: ";
	cin >> num;

    if(num) ;
    else if(cin.fail()){
        cin.clear(); cin.ignore(1024, '\n');
        goto return_num;
    }
	for(i = 0; i <= num; i++) sum = sum + i;
	cout << endl << "\tThe sum of Num is: " << sum;
			
	for(i = 0; i <= num; i++) sumSquared += (i*i);
	cout << endl << "\tThe sum of the squared of Num is: " << sumSquared;
		
	for(i = 1; i <= num; i++) f *= i;
	cout << endl << "\tThe factorial of Num is: " << f;
}
void reverse(){
    int rev, n = 0, rem;

    cout << "\n\t*** REVERSE AN INTEGER/s ***\n" << endl;
    return_rev:
    cout << "Please enter a number you want to reverse: ";
    cin >> rev;

    if(rev) ;
    else if(cin.fail()){
        cin.clear(); cin.ignore(1024, '\n');
        goto return_rev;
    }
    while (rev != 0){
          n = n * 10;
          n = n + rev % 10;
          rev = rev / 10;
    }
    cout << "\n\tThe reverse number is: " << n;
}
void multi_table(){
	int number, product;

    cout << "\n\t*** PRINT MULTIPLICATION TABLE OF A GIVEN NUMBER ***\n" << endl;
    return_multi:
    cout << "Enter a number: ";
    cin >> number;

    if(number) ;
    else if(cin.fail()){
        cin.clear(); cin.ignore(1024, '\n');
        goto return_multi;
    }
    cout << "\n";
    for(int i = 1; i < 11; i++){
        product = number * i;
        cout << "\t" << product << " ";
    }
}
void count(){
	int number, count = 0;
    cout << "\n\t*** COUNT THE TOTAL NUMBER OF DIGITS IN A NUMBER ***\n" << endl;

    return_number:
    cout << "Enter a number: ";
    cin >> number;

    if(number) ;
    else if(cin.fail()){
        cin.clear(); cin.ignore(1024, '\n');
        goto return_number;
    }

     while(number != 0){
        count++;
        number /= 10;
    }
    cout << "\n\tTotal digits are: " << count;
}
void fibo_terms(){
	int n, first_term = 0, second_term = 1, count = 0;
    cout << "\n\t*** DISPLAY FIBONACCI SERIES UP TO N terms ***\n" << endl;

    return_fibo:
    cout << "Enter a number of terms: ";
    cin >> n;

    if(n) ;
    else if(cin.fail()){
        cin.clear(); cin.ignore(1024, '\n');
        goto return_fibo;
    }
    while(count < n){
        cout << "\t" << first_term << " ";
        int temp = first_term + second_term;
        first_term = second_term; // update
        second_term = temp;
        count += 1;
    }
}
