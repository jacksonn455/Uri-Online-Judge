#include<iostream>
using namespace std;
int main(){
int i=0,v=0,p=0;

for(i=1;i<=5;i++){
    cin >> v;
    if(v%2==0){
        p++;
    }
}
cout << p <<" valores pares" <<endl;


}
