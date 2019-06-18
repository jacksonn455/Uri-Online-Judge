#include<iostream>
#include<stdio.h>
using namespace std;
int main(){

    long long int g,t = 1;
    int n;

    cin>>n;

    for(int i = 0 ; i < n ; i++){

        cin>>g;

        for(int x = 1 ; x <= g ; x++){
            t *= 2;
        }
     cout<<(t/12)/1000<<" kg"<<endl;
       t = 1;
    }
}
