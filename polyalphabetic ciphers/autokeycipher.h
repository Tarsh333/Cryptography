using namespace std;
string autokeycipherencrypt(string s){
    int key=12;
    int size=s.size();
    for(int i=0;i<size;i++){
        s[i]-='a';
        int temp=s[i];
        s[i]=((s[i]+key)+26)%26;
        s[i]+='a';
        key=temp;
    }
    return s;
}
string autokeycipherdecrypt(string s){
    int key=12;
    int size=s.size();
    for(int i=0;i<size;i++){
        s[i]-='a';
        s[i]=((s[i]-key)+26)%26;
        key=s[i];
        s[i]+='a';
    }
    return s;
}