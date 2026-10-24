#include <iostream>
using namespace std;

int main()
{
    int a, b, c;

    // Take two numbers from the user
    cout << "Enter 2 numbers: " << endl;
    cin >> a >> b;

    try
    {
        // Check for division by zero
        if(b == 0)
        {
            throw b;  // Throw an exception
        }

        c = a / b;
        cout << "Division is: " << c << endl;
    }

    // Catch the arithmetic exception
    catch(int x)
    {
        cout << "Arithmetic error\n";
        cout << "Divide by: " << x << endl;
    }

    // This statement executes after try-catch
    cout << "After Division operation";

    return 0;  
}
