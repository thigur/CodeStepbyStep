    /*
        Code Step By Step Practice Problems
        Write a function named wordStats that accepts as its parameter a string holding 
        a file name, opens that file and reads its contents as a sequence of words, and 
        produces a particular group of statistics about the input. You should report:
        1. the total number of words (as an integer), 
        2. the average word length (as an un-rounded real number), and 
        3. the number of unique letters used from A-Z, case-insensitively. 
        For the purposes of this problem, we will use whitespace to separate words. That 
        means that some words include punctuation, as in "be,".

        Author: reaw17      Jan 5nd 2018
    */

    #include <iostream>
    #include <fstream>      // std::ifstream
    #include <sstream>      // std::ifstream
    #include <string>      // std::getline(string)
    #include <cctype>
    #include <iomanip>
    #include <map>

    using namespace std;

    void mostCommon( string filename ) {

        ifstream input( filename );
        string line;

        size_t totalNumOfWords = 0;
        double totalLenOfWords = 0;

        string token;
        char charInWord;
        map< char, int > charFreq;
        map< char, int >::iterator iter;

        cout << endl;
        if ( !input.is_open() ) {
            cout << "Error, bad input file" << endl;
        } else {

            while ( true ) {
                input >> token;
                if( input ) {
                    totalNumOfWords++;
                    totalLenOfWords += token.length();

                    for( size_t i = 0; i < token.length(); i++ ) {
                        if ( isalpha( token[ i ] ) ) {
                            charInWord =  token[ i ];
                            charInWord = toupper( charInWord );
                            charFreq[ charInWord  ]++;
                          } //end if()
                    } //end for()
                } else {
                    break;
                }
            } // end while()
            input.close();
            cout << setw( 14 ) << left << "Total words" << " = " << totalNumOfWords << endl;
            cout << setw( 10 ) << left <<  "Average length" << " = " << ( totalLenOfWords / totalNumOfWords ) << endl;
            cout << setw( 13 ) << left << "Unique letters" << " = " << charFreq.size() << endl;

            for ( map< char, int >::iterator it = charFreq.begin(); it != charFreq.end(); ++it)
                std::cout << it->first << " => " << it->second << '\n';
        }
    }

    /*  The main function() */
    int main() {

        string filename = "tobe.txt";

        mostCommon( filename );

        cout << endl;
        cout << "This is my what happened!" << endl;
        return 0;
    }
