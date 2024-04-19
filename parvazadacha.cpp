#include <iostream>
#include <fstream>
#include <vector>
#include <sstream>

struct Student {
    std::string name;
    int classNum;
    std::vector<int> grades;
};

void saveToFile(const Student& s, const std::string& filename) {
    std::ofstream file(filename);
    if (!file) {
        std::cerr << "Cannot open the File : " << filename << std::endl;
    }

    file << "name: " << s.name << "\n";
    file << "class: " << s.classNum << "\n";
    file << "grades: ";
    for (const auto &grade : s.grades) {
        file << grade << ' ';
    }
    file << "\n";

    file.close();
}

Student loadFromFile(const std::string& filename) {
    std::ifstream file(filename);
    if (!file) {
        std::cerr << "Cannot open the File : " << filename << std::endl;
    }

    Student s;
    std::string line;
    while (getline(file, line)) {
        std::istringstream iss(line);
        std::string key;
        iss >> key;
        if (key == "name:") {
            iss >> s.name;
        } else if (key == "class:") {
            iss >> s.classNum;
        } else if (key == "grades:") {
            int grade;
            while (iss >> grade) {
                s.grades.push_back(grade);
            }
        }
    }

    file.close();

    return s;
}

int main() {
    Student student = {"plamen", 6, {3, 4, 4, 5}};

    // Записване на данните във файл
    saveToFile(student, "students.txt");

    // Четене на данните от файла
    Student student2 = loadFromFile("students.txt");

    std::cout << "Name: " << student2.name << ", Class: " << student2.classNum << ", Grades: ";
    for (const auto &grade : student2.grades) {
        std::cout << grade << ' ';
    }
    std::cout << std::endl;

    return 0;
}
