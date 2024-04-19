#include <iostream>
#include <fstream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

bool contains(const vector<string>& matrix, const string& word)
{
    for (const auto& row : matrix)
    {
        if (row.find(word) != string::npos || row.find(string(word.rbegin(), word.rend())) != string::npos)
        {
            return true;
        }
    }
    return false;
}

vector<string> read_matrix(const string& filename)
{
    vector<string> matrix;
    ifstream file(filename);
    if (file.is_open())
    {
        string line;
        int row_length = -1;
        while (getline(file, line))
        {
            if (row_length == -1)
            {
                row_length = line.size();
            }
            else if (line.size() != row_length)
            {
                file.close();
                return {};
            }
            matrix.push_back(line);
        }
        file.close();
    }
    return matrix;
}

vector<string> read_words(const string& filename) {
    ifstream file(filename);
    vector<string> words;
    string word;

    if (file.is_open()) {
        while (file >> word) {
            words.push_back(word);
        }
        file.close();
    } else {
        cerr << "Error opening file: " << filename << endl;
    }

    return words;
}

void check_words(const string& matrix_file, const string& words_file)
{
    vector<string> matrix = read_matrix(matrix_file);
    vector<string> words = read_words(words_file);

    for (const auto& word : words)
    {
        if (contains(matrix, word))
        {
            cout << word << " ";
        }
    }
    cout << endl;
}

int main()
{
    check_words("./table.txt", "./words.txt");
    return 0;
}
