using namespace std;
int rotorkey1[26], rotorkey2[26]={1,19,10,14,26,20,8,16,7,22,4,11,5,17,9,12,23,18,2,25,6,24,13,21,3,15};

int find(int arr[], int n, int k)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == k)
        {
            return i;
        }
    }
}


string rotorcipherencrypt(string s)
{
    for (int i = 0; i < 26; i++)
    {
        rotorkey1[i] = i+1;
    }

    for (int i = 0; i < s.size(); i++)
    {
        int index = s[i] - 'a' ;
        int charatindex=rotorkey1[index];
        int corrseponding=find(rotorkey2,26,charatindex);
        s[i] = corrseponding + 'a';
        rotate(rotorkey1,rotorkey1+26-1,rotorkey1+26);
        rotate(rotorkey2,rotorkey2+26-1,rotorkey2+26);
    }
    return s;
}
string rotorcipherdecrypt(string s)
{
    for (int i = 0; i < 26; i++)
    {
        rotorkey1[i]=rotorkey2[i];
        rotorkey2[i]=i+1;
    }
    int rotor = 0;
    for (int i = 0; i < s.size(); i++)
    {
        int j=rotorkey1[(s[i] - 'a')] ;
        int index=find(rotorkey2,26,j);
        s[i]=index+'a';
        rotate(rotorkey1,rotorkey1+26-1,rotorkey1+26);
        rotate(rotorkey2,rotorkey2+26-1,rotorkey2+26);
    }
    return s;
}