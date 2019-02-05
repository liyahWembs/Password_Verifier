//  Password Verifier
//  This program verifies a user password that should meet the criteria of having at least six characters, 
// at least one uppercase and one lower case, and at least one digit.
//  Created by Gemima Lydie W on 9/28/16.



#include <iostream>
#include <cctype>
#include <cstring>

using namespace std;

int main()
{
    const int LENGTH = 101;
    char list[LENGTH];
    int Upper, Lower, Digit;
    
    // Prompt user to create a password
    cout << " * Create your password.\n";
    cout << " * The password must meet the following criteria:\n";
    cout << " * The password should be at least six characters long.\n";
    cout << " * The password should contain at least one uppercase and at least one lowercase letter.\n";
    cout << " * The password should have at least one digit.\n";
    
    cout << "\n-----------------------------------------------------------------\n";
    do
    {
        Upper = Lower = Digit = 0;
        
        cout  << "Enter password: ";
        cin.getline(list, LENGTH);      //Reading user's input for the password
        //cin >> list[LENGTH];
        
        for (int i = 0; i < strlen(list); i++)
            
        {
            if (isupper(list[i]))
                Upper++;
            if (islower(list[i]))
                Lower++;
            if(isdigit(list[i]))
                Digit++;
        }
        
        if (strlen(list) <= 6)           //Verifying length of the password
            cout << "Password is not at least six characters long.\n";
        
        if (Upper == 0)                 //Verifying for at leat one uppercase letter
            cout  << "Password does not contain at least one uppercase letter.\n";
        
        if (Lower == 0)                 //Verifying for at least one lowercase letter
            cout  << "Password does not contain at least one lowercase letter.\n";
        
        if (Digit == 0)                 //Verifying for at least one digit
            cout << "Password does not have at least one digit.\n";
    }
    while (Upper == 0 || Lower == 0 || Digit == 0 || strlen(list) <= 6);
    
    cout << "Password is validated " << " \nyour password is: "  << list << endl;

	system("pause");
    return 0;
}
