#include <iostream>
using namespace std;

class DiagonalMatrix {
private:
    int *arr;
    int n;    

public:
    DiagonalMatrix(int size) {
        n = size;
        arr = new int[n];   
        for (int i = 0; i < n; i++)
            arr[i] = 0;
    }

        void set(int i, int j, int value) {
        if (i == j) {
            arr[i - 1] = value;  
        }
    }

        int get(int i, int j) {
        if (i == j)
            return arr[i - 1];
        else
            return 0;
    }

    void display() {
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= n; j++) {
                cout << get(i, j) << " ";
            }
            cout << endl;
        }
    }

    ~DiagonalMatrix() {
        delete[] arr;
    }
};

int main() {
    int n;
    cout << "Enter dimension of matrix: ";
    cin >> n;

    DiagonalMatrix dm(n);

    cout << "Enter diagonal elements: ";
    for (int i = 1; i <= n; i++) {
        int x;
        cin >> x;
        dm.set(i, i, x);
    }

    cout << "The diagonal matrix is:\n";
    dm.display();

    return 0;
}
