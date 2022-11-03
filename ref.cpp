#include <iostream>
using namespace std;
void getMoney (double& balance , double amount) 
//double& balace becomes a reference parameter. when we run morisAccount, morisAccount is also updated to balance's new value.
{ 
    balance = balance - amount; // here balance become 950.
    cout << "inside function: " << balance << endl; //we still print our 950.
}

int main () 
{
    double morisAccount = 1'000;  
    getMoney (morisAccount, 50); 
    cout << "outside function: " << morisAccount << endl; //now we print 950 bc ref parameter update morisAccount.
}
