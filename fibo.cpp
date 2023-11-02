#include <iostream>
#include <vector>

void print(std::vector<std::vector<int>> v) {
    for (int i = 0; i < v.size(); i++) {
        for (int j = 0; j < v[i].size(); j++) {
            std::cout << v[i][j] << " ";
        }
        std::cout << std::endl;
    }
}

std::vector<std::vector<int>> Transpose(std::vector<std::vector<int>> v) {
    int row = v.size();
    int col = v[0].size();

    std::vector<std::vector<int>> trans(col, std::vector<int>(row));

    for (int i = 0; i < row; ++i) {
        for (int j = 0; j < col; ++j) {
            trans[j][i] = v[i][j];
        }
    }

    return trans;
}

int main() {
    std::vector<std::vector<int>> m1(3, std::vector<int>(2));
    srand(static_cast<unsigned>(time(0)));

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 2; j++) {
            m1[i][j] = (rand() % 100);
        }
    }
    std::vector<std::vector<int>> m2 = Transpose(m1);
    std::cout << "-----m1------" << std::endl;
    print(m1);
    std::cout << "-----m2------" << std::endl;
    print(m2);
}