    /*
        Code Step By Step Practice Problems
        Author: reaw17      Jan 4nd 2018
    */

    #include <iostream>
    #include <fstream>      // std::ifstream
    #include <sstream>      // std::ifstream
    #include <string>      // std::getline(string)
    #include <map>

    using namespace std;

    void mostCommon( string filename ) {

        ifstream input( filename );
        string line;
        string mostFreqUsedWord;
        string token;
        map< string, int > wordFreq;
        map< string, int >::iterator iter;

        cout << endl;
        if ( input.is_open() ) {

            while ( true ) {
                input >> token;
                if( input ) {
                    wordFreq[ token ]++;
                    if ( wordFreq[ token] > wordFreq[ mostFreqUsedWord ] )
                        mostFreqUsedWord = token;
                } else {
                    cout << "Done readng from input file!" << endl;
                    break;
                }
            }
            input.close();
        } else {
            cout << "Unable to ope file." << endl;
        }

        cout << endl;
        cout << "Most Frequently used word is:  " << mostFreqUsedWord << endl;
        cout << endl;
//        for ( map< string ,int >::iterator it = wordFreq.begin(); it != wordFreq.end(); ++it)
//            std::cout << it->first << " => " << it->second << '\n';
    }

    /*  The main function() */
    int main() {

        string filename = "wordsInTextFile.txt";

        mostCommon( filename );

        cout << endl;
        cout << "This is my what happened!" << endl;
        return 0;
    }
