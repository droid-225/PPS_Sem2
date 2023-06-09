/*
    Create class matrix with following data members: 
    int array[size][size] (size can vary)
    Use constructors and destructors properly 
    and for performing various arithmetic operations, 
    write member functions for each of the following 
    a. Addition function to add two matrices 
    b. Subtraction function to add two matrices 
    c. Multiplication function to add two matrices 
    d. Division function to add two matrices 
    e. Function to get data and to print data
*/

#include <iostream>
using namespace std;

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

        void add(Matrix a1, int size) {
            for(int i = 0; i < size; i++) {
                for(int j = 0; j < size; j++) {
                    arr[i][j] += a1.arr[i][j];
                }
            }
        }

        void sub(Matrix a1, int size) {
            for(int i = 0; i < size; i++) {
                for(int j = 0; j < size; j++) {
                    arr[i][j] == a1.arr[i][j];
                }
            }
        }

        void multi(Matrix a1, Matrix a2, int size) {
            for(int i = 0; i < size; i++) {
                for(int j = 0; j < size; j++) {
                    for(int k = 0; k < size; k++) {
                        arr[i][j] += a1.arr[i][k] * a2.arr[k][j];
                    } 
                }
            }
        }

        void div(Matrix a1, Matrix a2, int size) {
            // Create an identity matrix
            int** identity = new int*[size];
            for (int i = 0; i < size; ++i) {
                identity[i] = new int[size];
                for (int j = 0; j < size; ++j) {
                    identity[i][j] = (i == j) ? 1.0 : 0.0;
                }
            }

            for (int i = 0; i < size; ++i) {
                // Find the pivot element
                int pivot = a2.arr[i][i];

                // Divide the current row of both matrices by the pivot
                for (int j = 0; j < size; ++j) {
                    a2.arr[i][j] /= pivot;
                    identity[i][j] /= pivot;
                }

                // Perform row operations to eliminate other elements
                for (int j = 0; j < size; ++j) {
                    if (j != i) {
                        int factor = a2.arr[j][i];
                        for (int k = 0; k < size; ++k) {
                            a2.arr[j][k] -= factor * a2.arr[i][k];
                            identity[j][k] -= factor * identity[i][k];
                        }
                    }
                }
            }
            Matrix iden;

            for(int i = 0; i < size; i++) {
                for(int j = 0; j < size; j++) {
                    iden.arr[i][j] = identity[i][j];
                }
            }

            multi(a1, iden, size);
        }

        ~Matrix() {}
};

int main() {
    Matrix a1;
    Matrix a2;
    Matrix a3;

    a3.div(a1, a2, 2);
    a3.print(2);

    return 0;
}