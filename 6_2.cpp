/*
    Rewrite matrix class (from assignment 5) using operator 
    overloading concept. 1.e. overload (+,-,*,/)
*/

#include <iostream>
using namespace std;

int size = 2;

class Matrix {
    public:
        //int arr[2][2];
        int arr[2][2] = {{1,2},{2,1}};

        Matrix() {}

        void getData(int size) {
            for(int i = 0; i < size; i++) {
                for(int j = 0; j < size; j++) {
                    cout << "[" << i << "][" << j << "]: ";
                    cin >> arr[i][j];
                }
            }
        }

        void print(int size) {
            for(int i = 0; i < size; i++) {
                for(int j = 0; j < size; j++) {
                    cout << arr[i][j] << " ";
                }
                cout << endl;
            }
        }

        Matrix operator+(const Matrix& other) const {
            Matrix sum;
            for (int i = 0; i < 2; i++) {
                for (int j = 0; j < 2; j++) {
                    sum.arr[i][j] = arr[i][j] + other.arr[i][j];
                }
            }
            return sum;
        }

        Matrix operator-(const Matrix& other) const {
            Matrix diff;
            for (int i = 0; i < 2; i++) {
                for (int j = 0; j < 2; j++) {
                    diff.arr[i][j] = arr[i][j] - other.arr[i][j];
                }
            }
            return diff;
        }

        Matrix operator*(const Matrix& other) const {
            Matrix product;
            for (int i = 0; i < 2; i++) {
                for (int j = 0; j < 2; j++) {
                    for (int k = 0; k < 2; k++) {
                        product.arr[i][j] += arr[i][k] * other.arr[k][j];
                    }
                }
            }
            return product;
        }

        Matrix operator/(const Matrix& other) const {
            Matrix result = other;
            Matrix identity;
        
            // Create an identity matrix
            for (int i = 0; i < 2; ++i) {
                for (int j = 0; j < 2; ++j) {
                    identity.arr[i][j] = (i == j) ? 1 : 0;
                }
            }

            // Perform Gaussian elimination
            for (int i = 0; i < 2; ++i) {
                int pivot = result.arr[i][i];
            
            // Divide the current row of both matrices by the pivot
            for (int j = 0; j < 2; ++j) {
                result.arr[i][j] /= pivot;
                identity.arr[i][j] /= pivot;
            }

            // Perform row operations to eliminate other elements
            for (int j = 0; j < 2; ++j) {
                if (j != i) {
                    int factor = result.arr[j][i];
                    for (int k = 0; k < 2; ++k) {
                        result.arr[j][k] -= factor * result.arr[i][k];
                        identity.arr[j][k] -= factor * identity.arr[i][k];
                    }
                }
            }
        }
        
            return (*this) * identity;
    }   

        ~Matrix() {}
};

int main() {
    Matrix a1;
    Matrix a2;
    Matrix a3;

    a3 = a1 / a2;
    a3.print(2);

    return 0;
}