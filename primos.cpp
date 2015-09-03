#include <iostream>
using namespace std;
int main(){
    int num;
    cout<<"Ingrese un numero: "<<endl;
    cin>>num;
    if(num==0){return 0;}
    int cont;
    cont=0;
    if(num>1 and num%2!=0){
        for(int a=3;a<=num-1;a=a+1){
            if(num%a==0){cont=cont+1;}
        }
    }
    else{
        if(num==1){cout<<"Si es primo"<<endl;
        main();
        return 0;
        }
        else{
            cout<<"No es primo"<<endl;
            main();
            return 0;
        }
    }
    if(cont>=1){
        cout<<"No es primo"<<endl;
        main();
        return 0;}
    else{
        cout<<"Si es primo"<<endl;
        main();
        return 0;
    }

}
