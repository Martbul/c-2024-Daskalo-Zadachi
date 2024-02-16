#include <iostream>;

using namespace std;

bool isPrime(int n, int d=2){
    if(n<2) return false;
    if(n==2) return true;
    if(n % d ==0) return false;
    if(d * d >n) return true;
    return isPrime(n,d+1);
}


int main(){
    int n;
    cin>>n;
   cout<<isPrime(n);
    return 0;

}

