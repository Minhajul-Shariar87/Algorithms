#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "How many matrices are there?: ";
    cin >> n;

    int dim[n+1];   // dimensions
    cout << "Matrix Dimensions: ";
    for(int i=0; i<=n; i++) {
        cin >> dim[i];
    }

    // DP table - initialize with -1 to identify uncomputed cells
    int cost[n][n];
    
    // Initialize all elements to -1 first
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cost[i][j] = -1;
        }
    }
    
    for(int i=0; i<n; i++){ // Diagonal elements
        cost[i][i] = 0;
    }

    cout << endl;

    for(int len=2; len<=n; len++) {       // Matrix length
        for(int i=0; i<=n-len; i++) {     // Start index
            int j = i + len - 1;          // End index
            cost[i][j] = 999999;

            for(int k=i; k<j; k++) {      // Where to split
                // Cost calculate
                int current_cost = cost[i][k] + cost[k+1][j] +
                                  dim[i] * dim[k+1] * dim[j+1];

                // Minimum cost update
                if(current_cost < cost[i][j]) {
                    cost[i][j] = current_cost;
                }
            }
        }
    }

    cout << "Minimum multiplication needed: " << cost[0][n-1] << endl << endl;
    
    cout << "Cost matrix:" << endl;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(cost[i][j] >= 0 && cost[i][j] != 999999) {
                cout << cost[i][j] << " ";
            } else {
                cout << "- ";  // Display null/uncomputed values as "-"
            }
        }
        cout << endl;
    }

    return 0;
}