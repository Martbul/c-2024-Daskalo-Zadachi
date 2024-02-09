#include<iostream>

using namespace std;

void fun(int n){
    if(n==0) return;
    cout<<n%10<<' ';
    fun(n/10);
}

main(){

int n;
cin>>n;

fun(n);
return 0;

}
