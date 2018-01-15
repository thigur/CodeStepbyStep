    /* Code Step By Step Practice Problems */
    /* Dec 19th 2017 */

    #include <iostream>
    using namespace std;

    int main() {

        int sizeOfTriangle = 6;

        //Using for loops
        for ( int i = 1; i < sizeOfTriangle+1; i++) {
            for ( int j = 0; j < i ; j++) {
                cout << "#";
            }
            cout << endl;
        }
        cout << endl;
        cout << endl;

        //Using while loops
        int i = 1;
        while ( i <= sizeOfTriangle ) {
            int j = 1;
            while ( j <= i ) { 
                cout << "*";
                j++;
            }
            i++;
            cout << endl;
        }
        cout << endl;
        cout << endl;

       return 0;
    }
