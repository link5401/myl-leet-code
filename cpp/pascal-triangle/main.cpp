#include "../template.hpp"

/*
    vector.resize(n,val) : val is the value that you want to fill the vector
   with
*/
vector<vector<int>> generate(int numRows) {
    vector<vector<int>> triangle(numRows);
    for (int i = 0; i < numRows; i++) {
        triangle[i].resize(i + 1, 1);
        for (int j = 1; j < i; j++) {
            triangle[i][j] = triangle[i - 1][j] + triangle[i - 1][j - 1];
        }
    }
    return triangle;
}

int main() {
    vector<vector<int>> vec = generate(5);
    for (int i = 0; i < vec.size(); i++) {
        for (int j = 0; j < vec[i].size(); j++) {
            cout << vec[i][j] << " ";
        }
        cout << "\n";
    }
}