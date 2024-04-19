#include <iostream>
#include <fstream>

using namespace std;

void read(string filemane){
    string placeholder;
ifstream MyReadFile(filemane);
while(getline(MyReadFile, placeholder)){
    cout << placeholder;
}
    MyReadFile.close();

}


int main(){
read("new.txt");

}
