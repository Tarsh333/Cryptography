using namespace std;
void printdecr(string s)
{
    cout << "Your decrypted string is " << s << endl;
}

void decryption()
{
    string inputstr;
    cout << "Enter string to be decrypted" << endl;
    cin >> inputstr;
    int algo;
algoenter:
    cout << "Enter \n 1 for affine cipher \n 2 for caesar cipher \n 3 for multiplicative cipher \n 4 for autokey cipher \n 5 for vignere cipher" << endl;
    cin >> algo;
    switch (algo)
    {
    case 1:
        printdecr(affinecipherdecrypt(inputstr));
        break;
    case 2:
        printdecr(caesarcipherdecrypt(inputstr));
        break;
    case 3:
        printdecr(multiplicativecipherdecrypt(inputstr));
        break;
    case 4:
        printdecr(autokeycipherdecrypt(inputstr));
        break;
    case 5:
        printdecr(vigenerecipherdecrypt(inputstr));
        break;
    default:
        cout << "Invalid!!! " << endl;
        goto algoenter;
        break;
    }
}