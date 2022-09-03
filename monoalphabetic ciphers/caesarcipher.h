using namespace std;
string caesarcipherencrypt(string s){
    int caesarsecret=2;
    int size=s.size();
    for(int i=0;i<size;i++){
        s[i]-='a';
        s[i]=((s[i]+caesarsecret)+26)%26;//+26 so that it is never -ve . c++ can return -ve num as modulo
        s[i]+='a';
    }
    return s;
}
string caesarcipherdecrypt(string s){
    int caesarsecret=2;
    int size=s.size();
    for(int i=0;i<size;i++){
        s[i]-='a';
        s[i]=((s[i]-caesarsecret)+26)%26;
        s[i]+='a';
    }
    return s;
}