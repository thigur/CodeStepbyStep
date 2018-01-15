    /* Code Step By Step Practice Problems */
    /* Dec 19th 2017 */

    #include <iostream>
    #include <string>
    #include <cctype>

    using namespace std;

    /*  
        modifies adjacent letter in the string. If the string has an odd
        number of letters, the last letter is unchanged.
    */
    void crazyCaps( string& crazyCaps ) {

        for ( size_t i = 0; i < crazyCaps.length(); i++ ) {

            crazyCaps[ i ] = tolower( crazyCaps[ i ] );
            i++;
            crazyCaps[ i ] = toupper( crazyCaps[ i ] );
        }
    }

    int main() {

        string crazyCapWord = "Hey!! THERE!";
        crazyCaps( crazyCapWord  );

        cout << crazyCapWord << endl;
        cout << endl;

        cout << "This is what happened!" << endl;

        return 0;
    }
