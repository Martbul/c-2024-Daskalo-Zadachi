#include <iostream>
#include <fstream>

using namespace std;

int main() {
    ifstream matrix_one_file("./matrix_one.txt");
    ifstream matrix_two_file("./matrix_two.txt");
    ofstream matrix_res_file("./matrix_res.txt");

    int n, k;
    matrix_one_file >> n >> k;
    int** matrix_one = new int*[n];
    int** matrix_two = new int*[k];
    int** matrix_res = new int*[n];

    for (int i = 0; i < n; i++) {
        matrix_one[i] = new int[k];
        matrix_res[i] = new int[n];
    }

    for (int i = 0; i < k; i++) {
        matrix_two[i] = new int[n];
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < k; j++) {
            matrix_one_file >> matrix_one[i][j];
        }
    }

    for (int i = 0; i < k; i++) {
        for (int j = 0; j < n; j++) {
            matrix_two_file >> matrix_two[i][j];
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            matrix_res[i][j] = 0;
            for (int l = 0; l < k; ++l) {
                matrix_res[i][j] += matrix_one[i][l] * matrix_two[l][j];
            }
        }
    }

    if (n != k) {
        matrix_res_file << "Cannot multiply matrices." << endl;
    } else {
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                matrix_res_file << matrix_res[i][j] << ' ';
            }
            matrix_res_file << '\n';
        }
    }

    matrix_one_file.close();
    matrix_two_file.close();
    matrix_res_file.close();

    return 0;
}

