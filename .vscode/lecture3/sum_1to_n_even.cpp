#include <iostream>
using namespace std;
int main(){
    int n;
    int sum=0;
    cin>>n;
    for(int i = 2; i<= n; i=i+2){
        sum = sum + i;
        
    }
    cout<<sum;
}