// Resolução do problema "QAQ"
// https://codeforces.com/contest/894/problem/A
#include <bits/stdc++.h>
 
using namespace std;
char palavra[102], letra;
int asIda[102], asVolta[102];
int i=0;
 
void ateAqui(){
    int cont = 0;
    int q = 0;
    int a = 0;
    bool mudou = false;
    for (int j=0; j<=i; j++){
        if(palavra[j]=='Q') {
            q++;
        }
        if(palavra[j]=='A') {
            asIda[j]=q;
        }
    }
    q = 0;
    for (int j=i; j>=0; j--){
        if(palavra[j]=='Q') {
            q++;
        }
        if(palavra[j]=='A') {
            asVolta[j] = q;
        }
    }
}    
 
 
int main(){
    while(scanf("%c", &letra) != EOF){
        if (i == 0 && letra != 'Q') continue;
        if(letra == 'Q' || letra == 'A'){
            palavra[i] = letra;
            i++;
        }
    }
    if(palavra[i-1] == 'A') palavra[i-1] = 0;
    else palavra[i] = 0;
    ateAqui();
    int res = 0;
    for(int j=0; j<i; j++){
        if(palavra[j] == 'A'){
            res+= (asIda[j]*asVolta[j]);
        }
    }
    printf("%d\n", res);
}