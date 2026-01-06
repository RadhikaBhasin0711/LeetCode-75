class Solution {
public:
int getgcd(int n, int m){
    if(m==0) return n;
    return getgcd(m,n%m);
}
    string gcdOfStrings(string str1, string str2) {
        if(str1+str2!=str2+str1) return "";
        int n1=str1.length();
        int n2=str2.length();

        int gcd=getgcd(n1,n2);
        return str1.substr(0,gcd);
    }
};
