    /* Code Step By Step Practice Problems */
    /* Dec 25th 2017 */
    #include <iostream>

    using namespace std;

    string repeat( string str, int numOfRepeats ) {
        string newStr = "";
        if ( !str.empty() ) {
            for (int i = 0; i < numOfRepeats; i++ )
                newStr += str;
        }
        return newStr;
    }

    int main() {

        string str = "hello";

        string returnValue = repeat( "a long string ",3 );
        cout << returnValue << endl;

        cout << "This is my startup  template!" << endl;

        return 0;
    }
