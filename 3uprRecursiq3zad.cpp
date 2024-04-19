#include <iostream>
using namespace std;

string fromDecimalToBinary(int a, string b="")
{
    if(a ==0)
    {

        cout << b;
         cin.getline (y_name, MAX_NAME_LEN);
        return "0";
    }
    a = a /2;
    if((a /2) % 2 ==0)
    {

        b +="0";
        cout<<b;
        fromDecimalToBinary(a);

    }
    else
    {
        b +="1";
        cout<<b;
        fromDecimalToBinary(a);
    }
}


void system(int n){
    string numb;
    for(int i =0; i<n; i++){
    numb+=numb;
    }
    int b=1;
    while (numb!= fromDecimalToBinary(b)){
     b++;
    }
    cout<<b;
}


int main()
{

    int a;
    cin >> a;
    fromDecimalToBinary(a);
    system(a);
}

