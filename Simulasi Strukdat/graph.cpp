#include <iostream>
#include <vector>
using namespace std;

void displayMatrix(vector<vector<int >> &mat) {
    int V = mat.size();  // tambahkan mat.size()
    for (int i = 0; i < V; i++) {
        for (int j = 0; j < V; j++)
            cout << mat [i][j] << " "; // tambahkan baris dan kolom matriks
        cout << endl;
    }
}

int main() {
    int V = 4;
    vector<vector<int >> mat(V, vector<int>(V, 0)); //tambahkab variabel V
    mat[0][1] = 1;
    mat[0][2] = 1;
    mat[1][2] = 1;
    mat[2][3] = 1;

    cout << "Matriks Adjacency:" << endl;
    displayMatrix(mat); //tambahkan mat dalam parameter
    return 0;
}
//lengkapin codenya