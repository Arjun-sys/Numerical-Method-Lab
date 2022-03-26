#include <bits/stdc++.h> 
using namespace std; 
  
#define MAX 100
  
void luDecomposition(float a[][MAX], int n) 
{ 
    float l[n][n], u[n][n];
	int i,j,k; 
    memset(l, 0, sizeof(l)); 
    memset(u, 0, sizeof(u)); 
  
    // Decomposing matrix into Upper and Lower 
    // triangular matrix 
    for ( i = 0; i < n; i++) { 
  
        // Upper Triangular 
        for ( k = i; k < n; k++) { 
  
            // Summation of L(i, j) * U(j, k) 
            float sum = 0.0; 
            for (j = 0; j < i; j++) 
                sum += (l[i][j] * u[j][k]); 
  
            // Evaluating U(i, k) 
            u[i][k] = a[i][k] - sum; 
        } 
  
        // Lower Triangular 
        for ( k = i; k < n; k++) { 
            if (i == k) 
                l[i][i] = 1; // Diagonal as 1 
            else { 
  
                // Summation of L(k, j) * U(j, i) 
                float sum = 0.0; 
                for (j = 0; j < i; j++) 
                    sum += (l[k][j] * u[j][i]); 
  
                // Evaluating L(k, i) 
                l[k][i] = (a[k][i] - sum) / u[i][i]; 
            } 
        } 
    } 
  
    // setw is for displaying nicely 
    cout << setw(6) << "      Lower Triangular" 
         << setw(32) << "Upper Triangular" << endl; 
  
    // Displaying the result : 
    for (i = 0; i < n; i++) { 
        // Lower 
        for (j = 0; j < n; j++) 
            cout << setw(6) << l[i][j] << "\t";  
        cout << "\t"; 
  
        // Upper 
        for (j = 0; j < n; j++) 
            cout << setw(6) << u[i][j] << "\t"; 
        cout << endl; 
    } 
} 
  
// Driver code 
int main() 
{ 
    float a[][MAX] = { { 25, 5, 1 }, 
                       { 64, 8, 1 }, 
                       { 144, 12, 1 } }; 
  
    luDecomposition(a, 3); 
    return 0; 
} 

