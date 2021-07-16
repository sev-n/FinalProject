#include "color.hpp"
using namespace std;

void pyramid(){
	int num, i, j;
	
    cout<<"\n\t***" << dye::yellow(" ASTERISK PYRAMID ") << "***\n" << endl;

	return_num:
    cout<<dye::bright_white("Enter a number: ");
	cin>>num;

    if(num) ;
    else if(cin.fail()){
        cin.clear(); cin.ignore(1024, '\n');
        goto return_num;
    }
	cout << "\n";
	for(i = 1; i<=num; i++){
        cout << "\t";
		for(j = 1; j<=num-i; j++){
			cout<<" ";
		}
		for(j = 1; j<=2*i-1; j++){
			cout<< dye::blue("*");
		}
		cout<<"\n";
	}
}
void sumfac(){
	int num, i, sum = 0, f = 1, sumSquared = 0;
	
    cout<<"\n\t***" << dye::yellow(" SUM OF N | SUM OF THE SQUARED OF N | FACTORIAL OF N ") << "***\n" << endl;
	return_num:
    cout<<dye::bright_white("Enter a number: ");
	cin>>num;

    if(num) ;
    else if(cin.fail()){
        cin.clear(); cin.ignore(1024, '\n');
        goto return_num;
    }
	
	for(i = 0; i <= num; i++){
		sum = sum + i;
	}cout<<endl<< dye::aqua("\tThe sum of Num is: ")<<sum;
			
	for(i = 0; i <= num; i++){
		sumSquared += (i*i);
	}cout<<endl<< dye::aqua("\tThe sum of the squared of Num is: ") <<sumSquared;
		
	for(i = 1; i <= num; i++){
		f *= i;
	}cout<<endl<< dye::aqua("\tThe factorial of Num is: ") <<f;
	
}
void reverse(){
    int rev, n = 0, rem;
    cout<<"\n\t***" << dye::yellow(" REVERSE ") << "***\n" << endl;

    return_rev:
    cout << dye::bright_white("Please enter a number you want to reverse: ");
    cin >> rev;

    if(rev) ;
    else if(cin.fail()){
        cin.clear(); cin.ignore(1024, '\n');
        goto return_rev;
    }

    while (rev != 0)
    {
          n = n * 10;
          n = n + rev % 10;
          rev = rev / 10;
    }
    cout << dye::aqua("\n\tThe reverse number is: ") << n;
}
void multi_table(){
	int number, product;
    cout<<"\n\t***" << dye::yellow(" PRINT MULTIPLICATION TABLE OF A GIVEN NUMBER ") << "***\n" << endl;

    return_multi:
    cout << dye::bright_white("Enter a number: ");
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
    cout<<"\n\t***" << dye::yellow(" COUNT THE TOTAL NUMBER OF DIGITS IN A NUMBER ") << "***\n" << endl;

    return_number:
    cout << dye::bright_white("Enter a number: ");
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
    cout << dye::aqua("\n\tTotal digits are: ") << count;
}
void fibo_terms(){
	int n, first_term = 0, second_term = 1, count = 0;
    cout<<"\n\t***" << dye::yellow(" DISPLAY FIBONACCI SERIES UP TO N terms ") << "***\n" << endl;

    return_fibo:
    cout << dye::bright_white("Enter a number of terms: ");
    cin >> n;

    if(n) ;
    else if(cin.fail()){
        cin.clear(); cin.ignore(1024, '\n');
        goto return_fibo;
    }
    
    while(count < n){
        cout << "\t" <<first_term << " ";
        int temp = first_term + second_term;
        first_term = second_term; // update
        second_term = temp;
        count += 1;
    }
}
