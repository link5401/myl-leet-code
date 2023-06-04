#include "../template.hpp"
/*recursion*/
// vector<int> getRow(int rowIndex) {
//     if (rowIndex == 0) return vector<int>{1};
//     if (rowIndex == 1) return vector<int>{1, 1};
//     vector<int> prev = getRow(rowIndex - 1);
//     vector<int> row(rowIndex + 1, 1);
//     for (int i = 1; i < row.size() - 1; i++) {
//         row[i] = prev[i] + prev[i - 1];
//     }
//     return row;
// }
/*sequential*/
vector<int> getRow(int rowIndex){
    vector<int> result(rowIndex +1 , 1), prev(rowIndex+1,1);
    for(int i = 0; i <= rowIndex; i++){
        for(int j = 1; j <= i; j++){
            if(j == 0 || j == i) result[j] = 1;
            else result[j] = prev[j] + prev[j-1];
        }
        prev = result;
    }
    return result;
}
int main() {
    vector<int> row = getRow(9);
    for (int i = 0; i < row.size(); i++) {
        cout << row[i] << " ";
    }
}