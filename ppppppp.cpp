#include <fstream>
#include <iostream>
#include <string>
using namespace std;

void read_file(const string& filename) {
   ifstream file(filename);
    if (file.is_open()) {
string line;
        while (getline(file, line)) {
          cout << line << '\n';
        }
        file.close();
    } else {
        cout << "Unable to open file";
    }
}


int main() {
    read_file("C:\Users\martinbk\U\Desktop\textFile.txt");
    return 0;
}
