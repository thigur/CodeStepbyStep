    /* Code Step By Step Practice Problems */
    /* Dec 19th 2017 */

    #include <iostream>
    #include <fstream>      // std::ifstream

    using namespace std;

    int main() {

        ifstream input;
        string line;

        input.open("streambug-test1-data.txt");

        while ( input.good() ) {

            getline( input, line );

            cout << line << endl;
        }

        input.close();

        cout << "This is my startup  template!" << endl;


        return 0;
    }
