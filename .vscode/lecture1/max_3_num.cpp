#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cin>>a>>b>>c;
    if(a>b && b>c){
        cout<<"a is max";
    }
    else if(b>a && a>c){
        cout<<"b is max";

    }
    else{
        cout<<"c is max ";

    }


}