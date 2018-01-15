    /* Code Step By Step Practice Problems */
    /* Jan 2nd 2018 */

    #include <iostream>
    #include <string>      // std::getline(string)
    #include <fstream>      // std::ifstream

    using namespace std;

    void inputStats( string filename ) {

        ifstream istrm( filename );
        string line;

        if ( !istrm.is_open() ) {
            cout << "failed·to·open·bogus-data.txt" << endl;
        } else {
            int i = 0;
            int longest = 0;
            double totalLengths = 0;

            for ( i = 1; getline( istrm, line); i++ ) {
                int len = line.length();
                totalLengths += len;
                cout << "line " << i << " has " << len << " chars" << endl;
                if ( len > longest )
                    longest = len;
            }
            cout << --i << " lines;";
            cout << " longest = " << longest << ", average = " << totalLengths / i << endl;
        }
        istrm.close();
    }

    int main() {

        string filename = "carroll.txt";

        inputStats( filename );

        cout << endl;
        cout << "This is my what happened!" << endl;
        return 0;
    }
