#include <bits/stdc++.h>
using namespace std;
void copyarr(char s[],char d[]){
    int sindex = 0;
    int dindex =0;
    while(s[sindex]!='\0'){
        d[dindex]= s[sindex];
        sindex++;
        dindex++;
    }
}
int main(){

char a[50] = "abhi";
char b[50]="patidar";
copyarr(a,b);

cout<<a;

    return 0;
}