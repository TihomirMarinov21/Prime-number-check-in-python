#include <iostream>
#include <limits> // needed for the numeric limit

/*
The following code takes user input which should be a number. If it's not we have build in a error handling system.
The number given is tested whether or not it is a prime. */ 

using namespace std;

int user_input;
string prime = "";

bool check_prime(int n){
    if(n < 2){
        return false;
    }
    
    for(int i = 2; i < n; i++){
        if(n % i == 0){
            return false;
        }
    }

    return true;
}

int main(){
cout << "Choose a number which you would like to check if it is a prime number: ";

while(!( cin >> user_input)){
    cin.clear(); // clears the error flag
    cin.ignore(numeric_limits<streamsize>::max(), '\n'); // ignore the rest of the line
    cout << "Invalid! Please choose a number which you would like to check if it is a prime number: ";
}

// the following if statemnt uses the output out of the function and prints an message to inform the user about the result
if (check_prime(user_input)){
    prime = "a prime number";
} 
else {
    prime = "not a prime number";
}

    cout << "The number " << user_input << " is " << prime; // informations message
    return 0;
}
