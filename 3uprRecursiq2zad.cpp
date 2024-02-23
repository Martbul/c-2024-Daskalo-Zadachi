#include <iostream>

using namespace std;

void numbersInRow(int &n){
if(n == 1) return;
    if(n % 2==0){
        n =n * 0.5;
        cout <<n <<endl;
         numbersInRow(n);
    }else{
        n = (n * 3) + 1;
          cout <<n <<endl;
          numbersInRow(n);
    }



}

int main(){

int n;
cin >> n;
numbersInRow(n);
}

