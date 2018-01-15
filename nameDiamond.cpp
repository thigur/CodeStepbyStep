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
    void nameDiamond( string name ) {

        for ( size_t i = 0; i <= name.length(); i++ ) {
            for ( size_t j = 0; j < i; j++ ) {
                cout << name[ j ];
            }
            cout << endl;
        }
        for ( size_t i = 0; i < name.length(); i++ ) {
            for ( size_t z = 0; z < i + 1; z++ ) cout << " ";
                for ( size_t j = i+1; j < name.length(); j++ ) {
                    cout << name[ j ];
                }
                cout << endl;
        }
    }

    int main() {

        string name = "MARTY";
        nameDiamond( name );
        nameDiamond( "MARTIN MINE" );

        cout << endl;
        cout << "This is what happened!" << endl;

        return 0;
    }
