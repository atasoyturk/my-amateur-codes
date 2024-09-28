#include <iostream>

using namespace std;

int main()
{
    int n1, n2;
    int i=1, ebob, ekok;
    
    cout << "Enter first number: ";
    cin >> n1;
    cout << "Enter second number: ";
    cin >> n2;

    if (n1>n2)
    {
        while (i<=n2)
        {
            if ((n1%i==0)&&(n2%i==0))
            {
                ebob = i;
            }
            i++;
        }
    }else{
        while (i<=n1)
        {
            if ((n1%i==0)&&(n2%i==0))
            {
                ebob = i;
            }
            i++;
        }
    }

    ekok = (n1*n2)/ebob;
    cout << "EBOB: " << ebob << endl;
    cout <<"\nEKOK: " << ekok << endl;

    return 0;
    
    
}