#include <iostream>
using namespace std;

int main() {
    int n;
    int m;
    cin >> n >> m;
    int board[n][m];

    for(int r=0 ; r < n; r++) {
        for(int c=0; c < m; c++) {
            cin >> board[r][c];
        }
    }

    /* 
    . is empty cell
    # is brick wall
    S is start position
    T robo target position
    / mirror (forward) slash
    \ mirror back-slash
     */

    

    return 0;
}
