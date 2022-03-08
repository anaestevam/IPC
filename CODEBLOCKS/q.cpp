#include <iostream>
using namespace std ;

int main(){
    int vet[5],i,cont=0,x;
    for(i=0;i<5;i++){
        cin>>vet[i];}
    cin>>x;
    for(i=0;i<5;i++){
        if(vet[i]==x){
            cont++;
            cout<<"posicao="<<i;
        }
    }

    if(cont==0){
    cout<<"não achei";
    }

    return 0;
}
