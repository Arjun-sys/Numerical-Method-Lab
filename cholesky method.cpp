//#include <bits/stdc++.h> 
#include<iostream>
using namespace std; 
#define MAX 100
void Cholesky_Decomposition(int matrix[][MAX],  
                                      int n) 
{ 
    int lower[n][n]; 
  memset(lower, 0, sizeof(lower)); 
  
    // Decomposing a matrix into Lower Triangular 
    for (int i = 0; i < n; i++) { 
        for (int j = 0; j <= i; j++) { 
            int sum = 0; 
  
            if (j == i) 
            { 
                for (int k = 0; k < j; k++) 
                    sum += pow(lower[j][k], 2); 
                lower[j][j] = sqrt(matrix[j][j] - 
                                        sum); 
            } else { 
  
                // Evaluating L(i, j) using L(j, j) 
                for (int k = 0; k < j; k++) 
                    sum += (lower[i][k] * lower[j][k]); 
                lower[i][j] = (matrix[i][j] - sum) / 
                                      lower[j][j]; 
            } 
        } 
    } 
  
    // Displaying Lower Triangular and its Transpose 
    cout << setw(6) << " Lower Triangular"  
         << setw(30) << "Transpose" << endl; 
    for (int i = 0; i < n; i++) { 
          
        // Lower Triangular 
        for (int j = 0; j < n; j++) 
            cout << setw(6) << lower[i][j] << "\t"; 
        cout << "\t"; 
          
        // Transpose of Lower Triangular 
        for (int j = 0; j < n; j++) 
            cout << setw(6) << lower[j][i] << "\t"; 
        cout << endl; 
    } }  
int main() 
{ 
    int n = 3; 
    int matrix[][MAX] = { { 1, 4, 7 },  { 4, 80, -44 }, { 7, 44, 89 } }; 
    Cholesky_Decomposition(matrix, n); 
    return 0; 
} 
