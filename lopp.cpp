#include <iostream>
using namespace std;
 
void pypart(int n)
{
   
    for (int i = n; i > 0; i--) {
 
        // Inner loop to handle number of columns
        // values changing acc. to outer loop
        for (int j = 0; j < i; j++) {
 
            // Printing stars
            cout << "* ";
        }
 
        // Ending line after each row
        cout << endl;
    }
}
 
// Driver Function
int main()
{
    int n = 5;
    pypart(n);
    return 0;
}