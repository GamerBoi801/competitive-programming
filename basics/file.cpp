#include <iostream>
#include <cstdio> // lib for freopen and fgets
#include <string>
#include <cstring> // lib for strlen

using namespace std;

int main() {
     // Open file for reading
    if (!freopen("file.txt", "r", stdin)) {
        cout << "Error opening file for reading" << endl;
        return 1; // Exit if file cannot be opened
    }
    char buffer [100];
    // Reads & outputs from the  file
    while (fgets(buffer, sizeof(buffer), stdin) != NULL) {
        printf("Read from file: %s",buffer);
    }
    printf("\n");
    return 0;
}