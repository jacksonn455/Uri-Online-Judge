#include <iostream>


using namespace std;

int main(){
int N = 0,i,pos,valor;

   cin>>N;

   int X[N];
   cin>>X[0];
   pos=0;
   valor=X[0];

   for(i=1;i<N;i++){
      cin>>X[i];
      if(X[i]<valor){
         pos=i;
         valor=X[i];
      }
   }
   cout<<"Menor valor: "<<valor<<endl;
   cout<<"Posicao: "<<pos<<endl;
}
