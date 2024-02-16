#include <iostream>;

using namespace std;


void func(int n, int &digits){
    if(n==0){

        if(digits==0)digits++;
            return;
    }
    digits++;
    func(n/10,digits);
}

void pow(int n, int k, int &res){
    if(k==0) return;
    res*=n;
    pow(n,k-1,res);
}

int pow(int n, int k){
if(k==0) return 1;
return n*pow(n,k-1);

}



int main(){
    int n,k ,res=1;
    cin>>n>>k;
    pow(n,k,res);
    cout<<res<<endl;
    int recursion=pow(n,k);
    cout<<recursion;
    return 0;

}
