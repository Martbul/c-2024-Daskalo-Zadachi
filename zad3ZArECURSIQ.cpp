

#include <iostream>;

using namespace std;

int get_fibonachi(int n){
    if(n<=1) return 0;
    if(n==2) return 1;
    return get_fibonachi(n-1) + get_fibonachi(n-2);


    ///result: 0 1 1 2 3 5 8 13
    /// input: 1 2 3 4 5 6 7 8
}

int fi_sum(int n){
if(n==0) return 0;
return get_fibonachi(n) + fi_sum(n-1);
}




int main(){
    int n;
    cin>>n;
   cout<<fi_sum(n);
    return 0;

}
