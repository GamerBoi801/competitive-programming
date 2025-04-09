#include <iostream>
using namespace std;

const int DISTRICTS = 4;
const int MONTHS =  3;

int main() 
{
    // Declare a 2D array to hold sales data
    double sales[DISTRICTS][MONTHS]; //2D array

    cout << endl;

    // Get sales data for each district and month
    for (int  d  = 0; d < DISTRICTS; d++) {
        cout << "District " << d + 1 << endl;
        for (int m = 0; m < MONTHS; m++) {
            cout << "Enter sales for month " << m + 1 << ": ";
            cin >> sales[d][m];
        }
    }

    // Display the sales data
    cout << "\nSales Data:\n";
    cout << "District\tMonth 1\tMonth 2\tMonth 3\n";
    cout << "------------------------------------------\n";
    for (int d = 0; d < DISTRICTS; d++) {
        cout << "District " << d + 1 << "\t";
        for (int m = 0; m < MONTHS; m++) {
            cout << sales[d][m] << "\t";
        }
        cout << endl;
        
        return 0;
    }
}