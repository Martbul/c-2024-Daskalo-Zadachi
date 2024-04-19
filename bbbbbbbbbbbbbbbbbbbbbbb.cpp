#include <iostream>
#include <fstream>

using namespace std;

void read(string filemane, string filename2)
{
    string placeholder, placeholder2;
    ifstream MyReadFile(filemane);
    ifstream MyReadFile2(filename2);
    while(getline(MyReadFile, placeholder))
    {
        while(getline(MyReadFile2, placeholder2))
        {
            if(placeholder2==placeholder)
            {
                cout << placeholder2<< endl;
                break;
            }
            else if(placeholder2 != placeholder)
            {
                cout << " - " << placeholder<<endl;
                cout << " + " << placeholder2<<endl;
                break;
            }
        }
    }
    MyReadFile.close();

}


int main()
{
    read("new.txt", "old.txt");

}
