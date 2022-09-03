#include <bits/stdc++.h>
#include "includes.h"
using namespace std;

int main()
{
    char decision;
    cout << "Enter e for encryption and d for decryption" << endl;
    cin >> decision;
    while (decision != 'd' && decision != 'e')
    {
        cout << "Invalid input!!! Enter e for encryption and d for decryption" << endl;
        cin >> decision;
    }
    if (decision == 'e')
        encryption();
    else
        decryption();
    return 0;
}