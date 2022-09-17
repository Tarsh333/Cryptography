#include <bits/stdc++.h>
#include "includes.h"
using namespace std;

int main()
{
    char decision;
    cout << "Enter e for encryption and d for decryption and anything else to exit" << endl;
    cin >> decision;
    while (decision == 'e' || decision == 'E' || decision == 'D' || decision == 'd')
    {
        if (decision == 'e' || decision == 'E')
            encryption();
        else if (decision == 'd' || decision == 'D')
            decryption();
        cout << "Enter e for encryption and d for decryption and anything else to exit" << endl;
        cin >> decision;
    }
    cout << "Exited !!!!";
    return 0;
}