    /* Code Step By Step Practice Problems */
    /* Dec 19th 2017 */

    #include <iostream>
    using namespace std;

    int main() {

        int min = 0;
        int max = 10; 
        int numInSequence = max - min + 1;

        for ( int j = min; j <= max; j++ ) {
            int i = j;
            while ( numInSequence != 0 ) {
                cout << i;
                i++;
                if  ( i > max ) {
                    i = min;
                }
                numInSequence--;
            }
            numInSequence = max - min + 1;
            cout << endl;
        }
       return 0;
    }
