#include<bits/stdc++.h>
using namespace std;


int main(){

string a = "aabbbfbaa";
string b = a;
int n = a.length();
reverse(a.begin(),a.end());
if(a==b){
    cout<<"Palindrome string";

}else{
    cout<<"Not palindrome string";
}
int v =0;
int c = 0;
std::string vowels = "aeiouAEIOU";

for(int i = 0 ; i<n;i++){
    if(vowels.find(a[i])!=string::npos){
     v++;
    }else{
    c++;
    }
}

cout<<"Vowels"<<v;
cout<<"Consonants"<<c;
    return 0;
}