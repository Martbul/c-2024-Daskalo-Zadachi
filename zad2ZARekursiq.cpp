#include<iostream>

using namespace std;

void fun(int n, int &sum){
    if(n==0) return;
   sum+=n%10;
    fun(n/10, sum);
}

main(){

int n, sum=0;
cin>>n;

fun(n, sum);
cout<<sum;
return 0;

}

