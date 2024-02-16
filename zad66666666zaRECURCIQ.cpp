#include <iostream>;

using namespace std;

double average(int []arr,int i, int sum){
    if(i > arr.length) return sum/arr.length;
    sum += arr[i];
    return average(arr, i+1, sum);



}


int main(){
 int arr[] ={3, 2, -4, 5, 6};
 int i;


}
