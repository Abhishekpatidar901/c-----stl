#include<bits/stdc++.h>
using namespace std;

int main(){
 string a = "abcdefg";
 string b = "gfedcbsa";

 string c;
 getline(cin,c);

sort(b.begin(),b.end());
sort(a.begin(),a.end());
if(a==b){
    cout<<"Anagram of each other";
}else{
    cout<<"Not anagram of each other";
}

    return 0;
}