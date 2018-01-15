    /* Code Step By Step Practice Problems */
    /* Dec 19th 2017 */

    #include <iostream>
    #include <string>

    using namespace std;

    /*  
        modifies adjacent letter in the string. If the string has an odd
        number of letters, the last letter is unchanged.
    */
    void swapPairs( string& swapString ) {
        size_t i = 0;
        size_t len = swapString.length(); 
        if ( len % 2 != 0 )
            len = len - 1; 
        while ( i !=  len ) {
            char leftChar = swapString[ i ];
            swapString [ i ] = swapString[ i + 1 ];
            swapString [ i + 1 ] = leftChar;
            i +=2;
        }
    }

    int main() {

        //string swapString = "hello world";
        string swapString = "hello there";
        swapPairs( swapString  );

        cout << endl;
        cout << "hello world swapped is:  " << swapString << endl;
        cout << "This is what happened!" << endl;

        return 0;
    }
