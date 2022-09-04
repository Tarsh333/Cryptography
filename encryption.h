using namespace std;
void printencr(string s)
{
    cout << "Your encrypted string is " << s << endl;
}

void encryption()
{
    string inputstr;
    cout << "Enter string to be encrypted" << endl;
    cin >> inputstr;
    int algo;
algoenter:
    cout << "Enter \n 1 for affine cipher \n 2 for caesar cipher \n 3 for multiplicative cipher \n 4 for autokey cipher \n 5 for vignere cipher \n 6 for rotor cipher \n 7 for rail fence cipher"<<endl;
    cin >> algo;
    switch (algo)
    {
    case 1:
        printencr(affinecipherencrypt(inputstr));
        break;
    case 2:
        printencr(caesarcipherencrypt(inputstr));
        break;
    case 3:
        printencr(multiplicativecipherencrypt(inputstr));
        break;
    case 4:
        printencr(autokeycipherencrypt(inputstr));
        break;
    case 5:
        printencr(vigenerecipherencrypt(inputstr));
        break;
    case 6:
        printencr(rotorcipherencrypt(inputstr));
        break;
    case 7:
        printencr(railfencecipherencrypt(inputstr));
        break;
    default:
    cout<<"Invalid!!! "<<endl;
        goto algoenter;
        break;
    }
}