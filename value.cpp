#include <iostream>
using namespace std;
void getMoney (double balance , double amount) 
//both are value parameters. when we run morisAccount, it is not updated in the main function.
{ 
    balance = balance - amount; // here balance become 950.
    cout << "inside function: " << balance << endl; //we print our 950.
}

int main () 
{
    double morisAccount = 1'000;  
    getMoney (morisAccount, 50); 
    cout << "outside function: " << morisAccount << endl; //here we print out 1,000 bc value parameters do not update morisAccount.
}
