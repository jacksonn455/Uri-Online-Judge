#include<iostream>
using namespace std;
int main(){

int c,n,i;

cin >> c;

int k[c];



for(i=1;i<=c;i++){
    cin >> k[i];
    if(k[i]%2==0){
        cout << "0"<<endl;
    }
    if(k[i]%2!=0){
        cout << "1"<<endl;
    }
}


}
