#include <fstream>

using namespace std;

long long file_size(const string& filename) {
    ifstream file(filename, ifstream);
    return file.tellg();
}


int main() {
    cout << "File size: " << file_size("textFile.txt") << " bytes\n";
    return 0;
}
