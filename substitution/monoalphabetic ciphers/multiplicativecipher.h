using namespace std;
string multiplicativecipherencrypt(string s)
{
    int key = 7;// a key that exists in Z26*
    int size = s.size();
    for (int i = 0; i < size; i++)
    {
        s[i]=s[i]-'a';//map b/w 0 to 25
        s[i] = ((s[i] * key)+26)%26;
        s[i]+='a';
    }
    return s;
}
string multiplicativecipherdecrypt(string s)
{
    int key = 15;//multiplicative inverse of key specified above
    int size = s.size();
    for (int i = 0; i < size; i++)
    {
        s[i]=s[i]-'a';//map b/w 0 to 25
        s[i] = ((s[i] * key)+26)%26;
        s[i]+='a';
    }
    return s;
}