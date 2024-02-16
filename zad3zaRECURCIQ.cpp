
#include <iostream>;

using namespace std;

int get_fibonachi(int n){
    if(n<=1) return 0;
    if(n==2) return 1;
    return get_fibonachi(n-1) + get_fibonachi(n-2);


    ///result: 0 1 1 2 3 5 8 13
    /// input: 1 2 3 4 5 6 7 8
}



int main(){
    int n;
    cin>>n;
   cout<<1get_fibonachi(n);
    return 0;

}
