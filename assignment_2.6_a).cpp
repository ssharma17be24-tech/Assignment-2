#include <iostream>
using namespace std;

int main() {
    int r, c, n;

    cout << "Enter number of rows, columns and non-zero elements: ";
    cin >> r >> c >> n;

    int sparse[20][3];  
    cout << "Enter triplet (row col value):\n";
    for (int i = 0; i < n; i++) {
        cin >> sparse[i][0] >> sparse[i][1] >> sparse[i][2];
    }

    int trans[20][3];
    for (int i = 0; i < n; i++) {
        trans[i][0] = sparse[i][1]; 
        trans[i][1] = sparse[i][0];
        trans[i][2] = sparse[i][2];
    }

    cout << "\nTranspose in triplet form:\n";
    for (int i = 0; i < n; i++) {
        cout << trans[i][0] << " " << trans[i][1] << " " << trans[i][2] << endl;
    }

    return 0;
}
