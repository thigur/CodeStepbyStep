    /* Author: laveenAZ
     * Write a function named wordCount that accepts a file name as a parameter and
     * opens that file and that returns a count of the number of unique words in the file.
     * Do not worry about capitalization and punctuation; for example, "Hello" and "hello" and "hello!!"
     *  are different words for this problem. Use a Set as auxiliary storage.
     * Jan 28th 2019 */

    #include<string>
    #include <iostream>
    #include <fstream>
    #include <sstream>

    using std::cout;
    using std::cin;
    using std::endl;
    #include <algorithm>
    #include<vector>
    #include<set>

    //Function reads a file and counts the number of unique
    // words in the file using a set as auxiliary storage
    int wordCount( std::string inputfile ) {

        std::ifstream istrm;
        istrm.open( inputfile, std::ios::in );

        std::set<std::string> words;
        std::string InputLine = "";
        std::string nextWord = "";

        if ( !istrm.is_open() ) {
            std::cout << "Unable to open input file \"" << inputfile  << "\"!" << std::endl;
        } else {
            while( !istrm.eof() ) {
                std::getline( istrm, InputLine );
                std::istringstream iss( InputLine );

                while( iss >> nextWord ) {
                    words.insert( nextWord );
                }
            } //while()
        }
        istrm.close();
        return words.size();
    }

    //The Main Function()
    /*int main() {

        std::cout << wordCount( "../codeStepByStep/carroll.txt" ) << std::endl;
        std::cout << std::endl;

        return 1;
    }*/
