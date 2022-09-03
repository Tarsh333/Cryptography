#include"caesarcipher.h"
#include"multiplicativecipher.h"
string affinecipherencrypt(string s){
    return caesarcipherencrypt(multiplicativecipherencrypt(s));
}
string affinecipherdecrypt(string s){
    return multiplicativecipherdecrypt(caesarcipherdecrypt(s));
}